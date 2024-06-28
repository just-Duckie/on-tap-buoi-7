#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortDescending(int arr[], int size) {
	int i;
    for (i = 0; i < size - 1; i++) {
    	int j;
        for (j = i + 1; j < size; j++) {
        	
            if (arr[i] < arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main() {
    int arr[5];
    int i;
    printf("Nhap vao 5 so: \n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    sortDescending(arr, 5);

    printf("mang duoc sap xep theo thu tu giam dan: ");
    for ( i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
