/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, 
Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*/

#include<stdio.h>
void main()
{
    int i;
    float a[5],score=0;
    printf("\n Enter scores of each subjects ");
    for(i=0;i<5;i++)
        scanf("%f",&a[i]);
    for(i=0;i<5;i++)
        score=score+a[i];
    score=score/5;
    if(score>=90)
        printf("\nGrade A");
    else if((score>=80)&&(score<90))
        printf("\nGrade B");
    else if((score>=70)&&(score<80))
        printf("\nGrade C");
    else if((score>=60)&&(score<70))
        printf("\nGrade D");
    else if((score>=40)&&(score<60))
        printf("\nGrade E");
    else
        printf("\nGrade F");
}
