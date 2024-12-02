#include<stdio.h>
int main(void){
    int choose, flag=0, lengthRow=0, lengthCol=0, number, sum3=0, sum7=0, sum7Max=0, product4=1, count=0, countMax=0;
    int arr[100][100];
    printf("MENU \n 1. Nhap kich co va gia tri cac phan tu cua mang \n 2. In cac gia tri cua phan tu theo ma tran \n 3. In cac phan tu la le va tinh tong \n 4. In ra cac phan tu nam tren duong bien va tinh tich \n 5. In ra cac phan tu nam tren duong cheo chinh \n 6. In ra cac phan tu nam tren duong cheo phu \n 7. In ra dong co tong gia tri cac phan tu la lop nhat \n 8. Thoat \n ");
    while(flag!=8){
        printf(" Lua chon cua ban: ");
        scanf("%d", &choose);
        switch(choose){
            case 1:
                flag=1;
                printf("moi ban nhap kich thuoc hang cua mang: ");
                scanf("%d", &lengthRow);
                printf("moi ban nhap kich thuoc cot cua mang: ");
                scanf("%d", &lengthCol);
                printf("moi ban nhap cac gia tri phan tu vao mang: \n");
                for(int i=0; i<lengthRow; i++){
                    for(int j=0; j<lengthCol; j++){
                        printf("moi ban nhap vao gia tri hang %d cot %d: ", i+1, j+1);
                        scanf("%d", &number);
                        arr[i][j]= number;
                    }
                }
                break;
            case 2:
                if(flag==1){
                    printf("gia tri cac phan tu theo ma tran la:\n");
                    for(int i=0; i<lengthRow; i++){
                        for(int j=0; j<lengthCol; j++){
                            printf("%4d", arr[i][j]);
                        }
                        printf("\n");
                    }
                }else{
                    printf("ban chua khoi tao mang \n");
                }
                break;
            case 3:
                if(flag==1){
                    printf("cac phan tu le trong mang la: ");
                    for(int i=0; i<lengthRow; i++){
                        for(int j=0; j<lengthCol; j++){
                            if(arr[i][j] %2 !=0){
                                printf("%d ", arr[i][j]);
                                sum3+=arr[i][j];
                            }
                        }
                    }
                    printf("\n");
                    printf("tong gia tri cac phan tu le la: %d \n", sum3);
                }else{
                    printf("ban chua khoi tao mang \n");
                }
                break;
            case 4:
                if(flag==1){
                    printf("cac gia tri nam tren duong bien la: \n");
                    for(int i=0; i<lengthRow; i++){
                        for(int j=0; j<lengthCol; j++){
                            if(i==0 || i== lengthRow-1){
                                printf("%4d", arr[i][j]);
                                product4 *= arr[i][j];
                            }else{
                                if(j==0 || j == lengthCol-1){
                                    printf("%4d", arr[i][j]);
                                    product4 *= arr[i][j];
                                }else{
                                    printf("    ");
                                }
                            }
                        }
                        printf("\n");
                    }
                    printf("tich cua cac phan tu nam tren duong bien la: %d\n", product4);
                }else{
                    printf("ban chua khoi tao mang \n");
                }
                break;
            case 5:
                if(flag==1){
                    if(lengthRow == lengthCol){
                        printf("cac phan tu nam tren duong cheo chinh la: ");
                        for(int i=0; i<lengthRow; i++){
                            for(int j=0; j<lengthCol; j++){
                                if( i==j){
                                    printf("%d ", arr[i][j]);
                                }
                            }
                        }
                        printf("\n");
                    }else{
                        printf("ma tran khong co duong cheo chinh:\n");
                    }
                }else{
                    printf("ban chua khoi tao mang \n");
                }
                break;
            case 6:
                if(flag==1){
                    if(lengthRow == lengthCol){
                        printf("cac phan tu nam tren duong cheo phu la: ");
                        for(int i=0; i<lengthRow; i++){
                            for(int j=0; j<lengthCol; j++){
                                if(j == lengthCol - i - 1){
                                    printf("%d ", arr[i][j]);
                                }
                            }
                        }
                        printf("\n");
                    }else{
                        printf("ma tran khong co duong cheo phu :\n");
                    }
                }else{
                    printf("ban chua khoi tao mang \n");
                }
                break;
            case 7:
                if(flag==1){
                    count=0;
                    for(int i=0; i<lengthRow; i++){
                        count = i;
                        sum7=0;
                        for(int j=0; j<lengthCol; j++){
                            sum7 += arr[i][j];
                        }
                        if(sum7Max < sum7){
                            sum7Max = sum7;
                            countMax = count;
                        }
                    }
                    printf("dong %d la dong co tong gia tri cac phan tu la lon nhat: ", countMax+1);
                    for(int j=0; j<lengthCol; j++){
                        printf("%d ", arr[countMax ][j]);
                    }
                    printf("\n");
                    printf("tong gia tri cac phan tu tren dong %d la: %d \n", countMax+1, sum7Max);
                }else{
                    printf("ban chua khoi tao mang \n");
                }
                break;
            case 8:
                flag = 8;
                break;
            default:
                printf("lua chon cua ban khong co trong MENU \n");
        }
    }
    return 0;
}
