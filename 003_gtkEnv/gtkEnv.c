#include <stdlib.h>
#include <gtk/gtk.h>

static void
print_hello (GtkWidget *widget,
             gpointer   data)
{
  g_print ("Hello World\n");
	system("echo Sup");
}

static void
activate (GApplication *app,
          gpointer        user_data)
{
  GtkWidget *window;
  GtkWidget *button;

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "fuuuuuck");
  gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);

  button = gtk_button_new_with_label ("fuuuuu");
  g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);
  gtk_window_set_child (GTK_WINDOW (window), button);

  gtk_window_present (GTK_WINDOW (window));
}

int
main (int    argc,
      char **argv)
{
  GApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.example", 0);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}
