#include <stdio.h>
int main() {
    int arr[100];
    int n, currentLength;

    printf("Enter amount of element: ");
    scanf("%d", &n);

    if (n > 100 || n < 0){
        printf("Invalid element");
        return 0;
    }

    currentLength = n;

    printf("Enter element:\n"); //Nhap cac phan tu co trong mang hien tai
    for (int i = 0; i < n; i++){
        printf("[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int deleteIndex;
    printf("Enter delete position: ");
    scanf("%d", &deleteIndex);

    if (deleteIndex < 0 || deleteIndex >= 100){
        printf("Invalid posion\n");
        return 0;
    }

    for(int i = deleteIndex; i < n - 1; i++){
    	arr[i] = arr[i+1];
	}
    currentLength--;

    printf("Array after deleting: ");
    for (int i = 0; i < currentLength; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
