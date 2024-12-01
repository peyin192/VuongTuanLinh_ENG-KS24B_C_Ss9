#include <stdio.h>
int main(){
    int arr[5];
    int n = 5, position, value;
    printf("1.Enter array \n");
	printf("2.Show array \n");
	printf("3.Add element \n");
    printf("4.Change element \n");
	printf("5.Delete element \n");
	printf("6.Exit \n");
    int choice;
    printf("Your choice: ");
    scanf("%d", &choice);
    while(choice > 6){
        printf("Your choice: ");
        scanf("%d", &choice);
    }
    while(choice < 6){
        switch(choice){
            case 1: 
                printf("Enter amount of elements in array: ");
                scanf("%d", &n);
                for(int i = 0; i < n; i++){
                printf("[%d] = ",i);
                scanf("%d", &arr[i]);
                    }
                break;
            case 2:
                for(int i = 0;i < n;i++){
                printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                printf("Enter position need to be added: ");
                scanf("%d", &position);
                printf("Input new value: ");
                scanf("%d",&value);
                for(int i = n; i > position; i--){ 
                        arr[i] = arr[i - 1]; 
                    }
                arr[position] = value; 
                n++; 
                break;
            case 4:
                printf("Select position need to be changed: ");
                scanf("%d", &position);
                printf("Input new value: ");
                scanf("%d", &value);
                arr[position] = value;
                break;
            case 5:
                printf("Seclect position need to be deleted: ");
                scanf("%d", &position);
                for(int i = position; i < n - 1; i++){ 
                        arr[i] = arr[i+1]; 
                    }
                n--;
            }
        printf("Your choice: "); 
        scanf("%d",&choice);
    }
}
