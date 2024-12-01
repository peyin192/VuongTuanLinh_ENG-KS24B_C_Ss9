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

    int addValue, addIndex;
    printf("Add element: ");
    scanf("%d", &addValue);
    printf("Enter add position: ");
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex >= 100){
        printf("Invalid posion\n");
        return 0;
    }

    if (addIndex >= currentLength){
        arr[addIndex] = addValue;
        currentLength = addIndex + 1; //them do dai mang
    } else {
        //chen phan tu moi
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;  //tang so luong phan tu hien tai
    }

    printf("After adding: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
