#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

//points assigned to eacb letter of the alpabhet
int POINTS[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

int compute_score(string word);

int main(void)
{
    //get input word from both players
    string word1=get_string("player 1:");
    string word2=get_string("player 2:");

    //score from both words
    int score1=compute_score(word1);
    int score2=compute_score(word2);

    //print the winner
    if (score1>score2)
    {
        printf("player 1 win!\n");
    }
    else if (score1<score2)
    {
        printf("player 2 win!\n");
    }
    else
    {
       printf("Tie!\n");
    }
}

int compute_score(string word)
{
    //keep track on score
    int score=0;

    //compute score for each character
    for (int i=0,len=strlen(word); i<len; i++)
    {
        if(isupper(word[i]))
        {
            score+=POINTS[word[i]-'A'];
        }
        else if (islower(word[i]))
        {
            score+=POINTS[word[i]-'a'];
        }
    }
    return score;
}
