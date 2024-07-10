// Amos Perez
// 07/09/2024
// Target Sums
// Arup Gupta's Computer Science I Recitation Programs
#include <stdio.h>
#include <stdlib.h>

FILE *openFile(char filepath[], char filemode[]);

int main()
{
    FILE *sample_in = openFile("./sample-test.in", "r");
    return 0;
}

FILE *openFile(char filepath[], char filemode[])
{
    FILE *file = fopen(filepath, filemode);
    if (file != NULL)
        printf("\"%s\" is open in \"%s\" mode.\n", filepath, filemode);
    else
    {
        printf("\"%s\" failed to open.\n", filepath);
        exit(1);
    }
    return file;
}