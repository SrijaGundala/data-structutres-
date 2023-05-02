#include <stdio.h>
int main() {
    int a[100],i,se,n;
    printf("size of an array:\n");
    scanf("%d", &n);
    printf("enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("entr the search element");
    scanf("%d",&se);
    for(i=0;i<n;i++){
	if(se==a[i])
	printf("%d%d",se,i);
	else
	prinf("elements not found");
	}return 0;}
	
