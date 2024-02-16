#include<stdio.h>
int main()

{
    float a=0;
    float b=0;
    float c=0;
    float r1=0;
    float r2=0;
    float x=0;

    // a,b,c are coeffient of x,y,z of Quadratic Equations

    printf("Enter a,b,c: ");
    scanf("%f%f%f",&a,&b,&c);

    x=(b*b)-(4*a*c);

    int y=0;
    x=y*y;

    if ((b*b)-(4*a*c) >=0)
    {
      r1=(((-b)+(y))/2*a*c);

      r2=(((-b)-(y))/2*a*c);

      printf("The roots of the equation are %f and %f",r1,r2);

        
    }

    else printf("Imaginary Roots");

    return 0;
}