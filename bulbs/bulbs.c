#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // prompt user for input
    string message=get_string("Message:");

    // iterate over each character of the string
    for (int i=0; i < strlen(message);i++)
    {
        int binary[]={0,0,0,0,0,0,0,0};

        //convert the character into aschii
        int decimal=message[i];

        //convert from aschii to binary
        int j=0;

        while(decimal>0)
        {
            binary[j]=decimal%2;
            decimal=decimal/2;
            j++;
        }
        //print the binary in reverse
        for(int k=BITS_IN_BYTE-1; k>=0; k--)
        {
            print_bulb(binary[k]);
        }
        printf("\n");

    }


}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}


#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
        printf("Usage:./caesar key");
        return 1;
    }
    for (int i=0; i <strlen(argv[1]); i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("Usage:./caesar key");
            return 1;
        }
    }


    int k=atoi(argv[1])

    string s=get_string("Plain Text:");
    printf("Cipher Text:");


    for (int i=0; i<strlen(s);i++)
    {
        if (isupper(s[i]))
        {
            printf("%c",((s[i])-65+k)%26) +65);
        }
        else if (islower(s[i]))
        {
            printf("%c",((s[i]-97+k)%26)+97);
        }
        else
        {
            printf("%c",s[i]);
        }
        printf("\n");

    }
}