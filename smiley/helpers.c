#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    for(int row=0;row <width;row++)
    {
        for(int column=0;column <row;column++)
        {
            if(image[column][row].rgbtBlue==0 && image[column][row].rgbtGreen==0 && image[column][row].rgbtRed==0)
            {
                image[column][row].rgbtRed=255;
                image[column][row].rgbtGreen=153;
                image[column][row].rgbtBlue=51;

            }
        }
    }
}
