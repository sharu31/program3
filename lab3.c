#include <stdio.h>
#include<ctype.h>
void vowel(char);
int main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    c=tolower(c);
    vowel(c);
    return 0;

}
void vowel(char ch)
{
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("It is a vowel.");
            break;
        default:
            {
                if(ch>='a' && ch<='z')
                {
                   printf("It is a consonant.");
                }

                else
                {
                    printf("Invalid Input.");
                }
            }
    }

}
