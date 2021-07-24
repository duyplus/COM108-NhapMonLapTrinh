#include <stdio.h>
int main(){
    int min,max;
    int i=min;
	float tong,dem,tb;
	printf("Nhap min: ");scanf("%d",&min);
	printf("Nhap max: ");scanf("%d",&max);
    while(i<=max){
		if(i%2==0){
			printf("\n%d",i);
      		tong += i;
      		dem++;
		}
		i++;
	}
	tb = tong/dem;
	printf("\nKet qua: %.0f",tb);
	return 0;
}
