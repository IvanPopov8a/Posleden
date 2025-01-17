#include<stdio.h>
int main()
{
    int mark,i,n;
    float avr,sum = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        printf("enter a grade: ");
        scanf("%d", &mark);

        sum=sum + mark;
    }

    avr=sum / n;
<<<<<<< HEAD
    printf("your grade is SAMO MORKOWi:  %.2f", avr);
=======
    printf("your grade MORKOW:  %.2f", avr);
>>>>>>> test2
    return 0;
        }
