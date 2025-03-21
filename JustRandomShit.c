#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
    char word[20], buffer[20] = {0};
    printf("Enter a string: ");
    fgets(word, 20, stdin);
    for (int i = 0; i < strlen(word); i++)
    {
        for (int j = 32; j <= (int)word[i]; j++)
        {
            printf("%s%c", buffer, j);
            printf("\n");
            usleep(50000);
        }
        buffer[i] = word[i];
        buffer[i + 1] = '\0';
    }
    return 0;
}