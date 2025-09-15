#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text=get_string("Text:");

    int letters=0;
    int words=1;
    int sentences=0;
    int grade=0;


    for (int i=0;i<strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
        }
        else if(text[i]==' ')
        {
            words++;
        }
        else if(text[i]=='.' || text[i]=='?'|| text[i]=='!')
        {
            sentences++;
        }


        grade = (0.0588 * (100 * (float) letters / (float) words) - 0.296 * (100 * (float) sentences / (float) words) - 15.8);
    }
    if (grade < 16 && grade>=0)
    {
        printf("Grade %i\n",(int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}

