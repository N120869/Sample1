#include<stdio.h>
main()
{
   int n;
   printf("Enter your number:\n");
   scanf("%d",&n);
   if(n%2 == 0)
   {
     printf("Number is even\n");
   }
   else
     printf("Number is odd\n");
}
