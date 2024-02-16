#include<stdio.h>
int main()

{
    float r=0;
    float s=0;
    float v=0;

    printf("enter radius R: ");
    scanf("%f",&r);

    v=(3.3*3.14*r*r*r);

    s=(4*3.14*r*r);

    printf("Volume of the sphere is %.2f\n",v);

    printf("Surface area is %.2f",s);

    return 0;







}