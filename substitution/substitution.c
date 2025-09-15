#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("Usage:./Substitution Key\n");
    }
    return 1;
    string key=argv[1];
    for (int i=0;i<strlen(key);i++)
    {
        if(!isalpha(key[1]))
        {
            printf("Usage:./Substitution Key\n");
        }
        return 1;
    }
    if (strlen(key)!=26)
    {
        printf("key must contain 26 characters\n");
    }
    return 1;

    for (int i=0;i<strlen(key);i++)
    {
        for(int j=i+1;j<strlen(key);j++)
        {
            if(toupper(key[i])==toupper(key[j]))
            {
                printf("Usage:./Substitution Key\n");
            }
            return 1;
        }

      string text=get_string("Plaintext: ");
      printf("Plaintext:");


        {
            if(islower(key[i]))
            {
                key[i]=key[i]-32;
            }
        }
    }

    printf("Ciphertext:");

    for(int i=0;i<strlen(text);i++)
    {
        if(isupper(text[i]))
        {
            int letter=text[i]-65;

            printf("%c",key[letter]);

        }
        else if(islower(text[i]))
        {
            int letter=text[i]-97;
            printf("%c",key[letter]+32);
        }
        else if
        printf("%c",text[i]);
    }
    printf("\n");
}