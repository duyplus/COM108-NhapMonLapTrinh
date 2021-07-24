#include <stdio.h>
void swap(int *a,int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int a,b;
	printf("Nhap a: ");scanf("%d",&a);
	printf("Nhap b: ");scanf("%d",&b);
	swap(&a,&b);
	printf("\nHoan vi a la: %d",a);
	printf("\nHoan vi b la: %d",b);
    return 0;
}
