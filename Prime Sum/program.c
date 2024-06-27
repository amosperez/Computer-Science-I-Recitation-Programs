// Amos Perez
// 06/24/2024
// Arup Gupta's Computer Science I Recitation Programs
#include <stdio.h>
#include <stdlib.h>

void primesum(int n){
    printf("primesum function is currently in progress.\n");
}

FILE *openFile(char filepath[], char filemode[]);
void checkResult(FILE *file1, FILE *file2);

int main() {

    FILE *readFile = openFile("./sample-test.in", "r");
    FILE *mytest = openFile("./sample-test.out", "r");
    FILE *sampletest = openFile("./sample-test.out", "r");

    checkResult(mytest, sampletest);

    return 0;
}

void checkResult(FILE *file1, FILE *file2){
    printf("checkResult function is currently in progress.\n");
}

FILE *openFile(char filepath[], char filemode[])
{
    FILE *file = fopen(filepath, filemode);
    if (file != NULL)
        printf("Successfully opened the file \"%s\" in mode \"%s\"\n", filepath, filemode);
    else{
        printf("Failed to open the file \"%s\"\n", filepath);
        exit(1);
    }
    return file;
}