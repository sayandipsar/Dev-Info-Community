/*Write a C program to check whether an alphabet is vowel or consonant using switch case.
*/
#include<stdio.h>
void main()
{
int n;
char c;
printf("\nEnter an Alphabet  :   ");
scanf("%c",&c);
n=("%d",c);
printf("\nThe inputted alphabet is a ");
switch(n)
    {
        case 65:
            printf("Vowel");
            break;
        case 97:
            printf("Vowel");
            break;
        case 69:
            printf("Vowel");
            break;
        case 101:
            printf("Vowel");
            break;
        case 73:
            printf("Vowel");
            break;
        case 105:
            printf("Vowel");
            break;
         case 79:
            printf("Vowel");
            break;
        case 111:
            printf("Vowel");
            break;
        case 85:
            printf("Vowel");
            break;
        case 117:
            printf("Vowel");
            break;
        default:
            printf("consonant");
    }
}
