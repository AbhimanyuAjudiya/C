#include <stdio.h>

void printStr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    char str[] = {'A', 'b', 'h', 'i', 'm', 'a', 'n', 'y', 'u', '\0'};
    // char str[] = "Abhimanyu";
    // char str[34];
    // gets(str);
    printf("Using custom function printStr\n");
    printStr(str);
    printf("Using printf %s\n", str);
    printf("using puts: \n");
    puts(str);
    return 0;
}
