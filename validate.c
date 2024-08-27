#include <stdio.h>
#include <string.h>

int main()
{
    char statement[] = "insert 1 victor hugo.victoor77@gmail.com";
    char* keyword = strtok(statement, " ");
    char* id = strtok(NULL, " ");

    printf("%s\n", statement);
    printf("%s\n", id);

    return 0;
}