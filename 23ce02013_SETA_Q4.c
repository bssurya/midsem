#include<stdio.h>
int main()

{
    int x=0;
    int i=0;
    int c=0;

    printf("Enter Number: ");
    scanf("%d",&x);
    int a=0;
    a=x-1;
   int z=0;
    z=x/x;
    int y=0;
    y=x/1; 
  
   for(;a>0;--a)
   {
     i++;

      if (a==13 && i==3) printf("%d %d\n",a,i);
      else if (a==11 && i==5)  printf("%d %d\n",a,i);
     
   }
   printf("\n");

   return 0;

}