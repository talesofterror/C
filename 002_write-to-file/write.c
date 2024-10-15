#include <stdio.h>

char string[] = "testing";
char c = 'c';
char *cPointer = &c;
int number = 100;
int *numPointer = &number;

int main () {

  FILE *file  = fopen("textfile.txt", "r");
  if (file == NULL) {
    perror("Error opening file");
    return 1;
  }
  char currFileChar;
  while ( (currFileChar = fgetc(file)) != EOF ) {
    printf("%c", currFileChar);
  }

  printf("\n\nprint string[], an array of chars: %s \n\n", string);

  printf("print c, a char: %c \n", c);
  printf("print cPointer, a pointer to a memory location holding a char: %p \n", cPointer);
  printf("print *cPointer, the value of the pointer: %c \n", *cPointer);
  printf("print &cPointer: %p \n\n", &cPointer);

  c = 'h';
  printf("print c after changing value: %c \n", c);
  printf("print cPointer after changing value of c: %p \n", cPointer);
  printf("print *cPointer, the value of the pointer: %c \n", *cPointer);
  printf("print &cPointer after changing value of c: %p \n\n", &cPointer);

  printf("print number, a integer: %i \n", number);
  printf("print numPointer, a pointer to a memory location holding an integer: %p \n", numPointer);
  printf("print *numPointer, the value of the pointer: %i \n", *numPointer);
  printf("print &numPointer: %p \n\n", &numPointer);

  number = 7;
  printf("print number after changing value: %i \n", number);
  printf("print numPointer after changing value of number: %p \n", numPointer);
  printf("print *numPointer, the value of the pointer: %c \n", *numPointer);
  printf("print &numPointer after changing value of number: %p \n\n", &numPointer);
  
  return 0;
}
