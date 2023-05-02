#include <stdio.h>
int main() {
    int a[100], i, n, loc, element, j, n1;
    printf("size of an array:\n");
    scanf("%d", &n);
    printf("enter the array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("enter the position of insertion:\n");
    scanf("%d", &loc);
    loc--; 
    printf("enter the element to insert:\n");
    scanf("%d", &element);
    for (i = n-1; i >= loc; i--) {
        a[i+1] = a[i]; 
    }
    a[loc] = element;
    printf("elements after insertion:\n");
    for (i = 0; i < n+1; i++) {
        printf("%d ", a[i]);
    }
    printf("\nenter the element to delete:\n");
    scanf("%d", &n1);
    for (i = 0; i < n; i++) {
        if (a[i] == n1) {
            for (j = i; j < n-1; j++) {
                a[j] = a[j+1]; 
            }
            n--; 
            break; 
        }
    }
    printf("elements after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
	
		
		
			

