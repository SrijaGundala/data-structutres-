#include <stdio.h>
int main() {
    int arr[100];
    int n, search_val, i, first, last, middle;
	printf("Enter the size of the array: ");
    scanf("%d", &n);
	printf("Enter the elements of the array in ascending order: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
	printf("Enter the value to search for: ");
    scanf("%d", &search_val);
	first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last) {
        if (arr[middle] < search_val) {
            first = middle + 1;
        } else if (arr[middle] == search_val) {
            printf("Value %d found at index %d\n", search_val, middle);
            break;
        } else {
            last = middle - 1;
        }
		middle = (first + last) / 2;
    }
    if (first > last) {
        printf("Value %d not found in the array\n", search_val);
    }
	return 0;
}  
