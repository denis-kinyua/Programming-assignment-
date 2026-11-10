
#include <stdio.h>

int main()
{
    FILE *fp;
    char title[100];

    fp = fopen("borrowed_books.txt", "a");

    if(fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(fp, "%s", title);

    fclose(fp);

    printf("Book title successfully stored.\n");

    return 0;
}
