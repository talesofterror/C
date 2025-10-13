

This command will copy all of the necessary dll files automatically:
    ```
        ldd demo.exe | grep "=> /" | awk '{print $3}' | xargs -I{} cp -u {} .
    ```
    
    'ldd' stands for list dynamic dependencies and will show which dll shared libraries 
    the object file depends on

