#include<stdio.h>
int main(void){
    int choose, flag = 0, length=0, number, sum3=0, sum5=0, min, max, count5=0, count6=0, number6, number7, index7;
    int arr[100];
    printf("MENU \n 1. Nhap so phan tu can nhap va gia tri cac phan tu \n 2. In ra cac phan tu dang quan ly \n 3. In ra cac gia tri phan tu chan va tinh tong \n 4. In ra gia tri lon nhat va nho nhat trong mang \n 5. In ra cac phan tu la so nguyen to va tinh tong \n 6. Nhap vao 1 so va thong ke trong mang co bao nhieu phan tu do \n 7. Them mot phan tu vao vi tri chi dinh \n 8. Thoat\n");
    while(flag!=8){
        printf("\n Lua chon cua ban: ");
        scanf("%d", &choose);
        switch(choose){
            case 1:
                flag=1;
                printf("moi ban nhap so phan tu co trong mang: ");
                scanf("%d", &length);
                for(int i=0; i<length; i++){
                    printf("moi ban nhap phan tu so %d vao mang: ", i+1);
                    scanf("%d", &number);
                    arr[i]= number;
                }
                break;
            case 2:
                if(flag==1){
                    printf("mang co cac phan tu la: ");
                    for(int i=0; i<length; i++){
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }else{
                    printf(" ban chua nhap phan tu vao mang ");
                }
                break;
            case 3:
                if(flag==1){
                    printf("cac phan tu chan co trong mang la: ");
                    for(int i=0; i<length; i++){
                        if(arr[i] %2 == 0){
                            printf("%d ", arr[i]);
                            sum3+=arr[i];
                        }
                    }
                    printf("\n");
                    printf("tong cua cac phan tu chan la: %d\n", sum3);
                }else{
                    printf(" ban chua nhap phan tu vao mang ");
                }
                break;
            case 4:
                if(flag==1){
                    min=arr[0];
                    max=arr[0];
                    for(int i=0; i<length; i++){
                        if( min> arr[i]){
                            min=arr[i];
                        }
                        if(max<arr[i]){
                            max=arr[i];
                        }
                    }
                    printf("gia tri lon nhat trong mang la %d\n", max);
                    printf("gia tri nho nhat trong mang la %d\n", min);
                }else{
                    printf(" ban chua nhap phan tu vao mang ");
                }
                break;
            case 5:
                if(flag==1){
                    printf(" cac phan tu la so nguyen to la: ");
                    for(int i=0; i<length; i++){
                        count5=0;
                        for(int j=1; j<= arr[i]; j++){
                            if( arr[i] % j ==0){
                                count5++;
                            }
                        }
                        if(count5==2){
                            printf("%d ", arr[i]);
                            sum5+=arr[i];
                            }
                    }
                    printf("\n");
                    printf(" tong gia tri cac phan tu la so nguyen to la: %d", sum5);
                    printf("\n");
                }else{
                    printf(" ban chua nhap phan tu vao mang ");
                }
                break;
            case 6:
                if(flag==1){
                    printf(" moi ban nhap vao 1 phan tu: ");
                    scanf("%d", &number6);
                    for(int i=0; i<length; i++){
                        if(number6 == arr[i]){
                            count6++;
                        }
                    }
                    printf(" trong mang co %d phan tu %d \n", count6, number6);
                }else{
                    printf(" ban chua nhap phan tu vao mang ");
                }
                break;
            case 7:
                if(flag==1){
                    printf(" moi ban nhap vao phan tu muon them: ");
                    scanf("%d", &number7);
                    printf(" moi ban nhap vao vi tri muon them phan tu: ");
                    scanf("%d", &index7);
                    if(index7>=length){
                        arr[length]= number7;
                        length++;
                        printf(" mang sau khi them phan tu %d vao vi tri %d la: ", number7, index7);
                        for(int i=0; i<length; i++){
                            printf("%d ", arr[i]);
                        }
                    }else if(index7>=0 && index7< length){
                        for(int i=length; i>index7; i--){
                            arr[i]= arr[i-1];
                        }
                        arr[index7]= number7;
                        length++;
                        printf(" mang sau khi them phan tu %d vao vi tri %d la: ", number7, index7);
                        for(int i=0; i<length; i++){
                            printf("%d ", arr[i]);
                        }
                    }else{
                        printf("vi tri ban muon them phan tu khong hop le \n");
                    }
                        
                        printf("\n");
                }else{
                    printf(" ban chua nhap phan tu vao mang ");
                }
                break;
            case 8:
                flag=8;
                printf("\n");
                break;
            default :
                printf("lua chon cua ban khong co trong MENU\n");
        }
    }
    return 0;
}
