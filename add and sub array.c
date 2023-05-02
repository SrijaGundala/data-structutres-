#include<stdio.h>
int main(){
	int size,i,a[10],b[10],adds[10],subs[10];
	printf("enter the array size");
	scanf("%d",& size);
	printf("enter the first array \n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	
	}printf("enter the elements of second array \n ");
	for(i=0;i<size;i++){
		scanf("%d",&b[i]);
		
	}
	for(i=0;i<size;i++){
		adds[i]=a[i]+b[i];
		subs[i]=a[i]-b[i];
		printf("\n%d",adds[i]);
		printf("\n%d" ,subs[i]);
	}
	return 0;
}
