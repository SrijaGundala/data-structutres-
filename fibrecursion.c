#include<stdio.h>
void fib(int n){
	static int a=0,b=1,c;
	if(n>0){
		c=a+b;
		a=b;
		b=c;
		printf("%d",c);
		fib(n-1);
		
	}
}
int main(){
	int n;
	printf("enter the number");
	scanf("%d",&n);
	printf("fibseries ");
	printf("%d %d",0,1);
	fib(n-1);
	return 0;
}
