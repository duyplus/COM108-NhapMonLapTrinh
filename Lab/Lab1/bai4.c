#include <stdio.h>
int main(){
    int hoa,ly,toan;
    float diemTB;
    printf("Nhap diem mon Hoa: ");scanf("%d",&hoa);
    printf("Nhap diem mon Ly: ");scanf("%d",&ly);
    printf("Nhap diem mon Toan: ");scanf("%d",&toan);
    diemTB = (hoa + ly + toan)/3; //Tinh diem trung binh 3 mon
    printf("\nDiem trung binh cua ba mon la: %.2f\n",diemTB);
    return 0;
}
