#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,r,i,D,x1,x2;
    printf("Solve : ax^2 + bx + c=0");
    printf("\nEnter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);
    D=((b*b)-(4*a*c));
    if(D>0)
    {
        printf("Roots are real and different");
        x1=(-b + sqrt(D))/(2*a);
        x2=(-b - sqrt(D))/(2*a);
        printf("\nRoots are:\nroot 1 = %.21f \nroot2 = %.21f",x1,x2);
    }
    else if(D==0)
    {
        printf("Roots are real and equal");
        x1=x2=(-b + sqrt(D))/(2*a);
        printf("\nRoots are:\nroot 1=root 2=%.21f",x1);
    }
    else
    {
        printf("Roots are imaginary.");
        r=-b/(2*a);
        i = sqrt(-D) / (2 * a);
        printf("\nRoots are:\nroot 1= %.21f + %.21fi \nroot 2= %.21f - %.21fi",r,i,r,i);
    }
    return 0;
}
