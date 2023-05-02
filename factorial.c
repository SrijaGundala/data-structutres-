#include<stdio.h>
long factorial(int n)
{if(n==0)
return 1;
else
return(n*factorial(n-1));}
void main(){
int number;
long fact;
printf("enter a number =");
scanf("%d",&number);
fact=factorial(number);
printf("factorial of %d is %ld ",number,fact);
return 0;
}
