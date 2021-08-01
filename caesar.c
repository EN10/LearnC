#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, string argv[])
{
    if (argc > 2 || argc == 1)
    {
        printf("Usage: ./caesar key \n");
        return 1;
    }
    else
    {
    for (int i=0; i<strlen(argv[1]); i++)
        {
        if (isdigit(argv[1][i]) == 0)
            {
                printf("Usage: ./caesar key \n");
                return 1;
            }
        }
    }

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    // Convert string to integer
    int key = atoi(argv[1]);
    char temp;
    int lower = false;
    for (int i=0; i<strlen(plaintext);i++)
    {
        if (isalpha(plaintext[i]))
        {
            if islower(plaintext[i])
            {
                lower = true;
                plaintext[i] = toupper(plaintext[i]);
            }
            else
            {
                lower = false;
            }
            temp = plaintext[i]+key;
            if (temp>90)
                {
                    temp -= 26;
                }
            else if (temp < 65)
                {
                    temp += 26;
                }
            if (lower)
            {
                printf("%c",tolower(temp));
            }
            else
            {
                printf("%c",temp);
            }
        }
        else
        {
            printf("%c",plaintext[i]);
        }

    }
   printf("\n");
   return 0;
}
