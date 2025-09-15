#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("Usage:./caesar key\n");
        return 1;
    }
    for (int i=0; i < strlen(argv[1]); i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage:./caesar key\n");
            return 1;
        }
    }


    int k=atoi(argv[1]);

    string s=get_string("Plain Text:");
    printf("Cipher Text:");


    for (int i=0; i<strlen(s);i++)
    {
        if (isupper(s[i]))
        {
            printf("%c",((s[i])-65 + k)% 26 + 65);
        }
        else if (islower(s[i]))
        {
            printf("%c",((s[i])-97 + k)% 26 + 97);
        }
        else
        {
            printf("%c",s[i]);
        }
        printf("\n");

    }
}