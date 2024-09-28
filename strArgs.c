#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char inp[20];

    while(1)
    {

        printf("Enter a string: ");
        fgets(inp, 20, stdin);
        
        if(strstr(inp, "DONE")) break;
        
        char *nl = strchr(inp, '\n');
        if(nl) *nl = '\0';

        int boo = 1;
        if(strstr(str, inp)) boo = 0;
        
        if(strcmp(inp, str) < 0 && boo)
        {
            char temp[100];
            strcpy(temp, str);

            strcpy(str, inp);
            strcat(str, " ");

            strcat(str, temp);
        }
        else if(strcmp(inp, str) >= 0 && boo)
        {
            strcat(str, inp);
            strcat(str, " ");
        }
        printf("%s\n", str);
    }
    printf("%s\n", str);
}