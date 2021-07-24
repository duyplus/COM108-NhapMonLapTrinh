#include <stdio.h>
int checkYear(int year){
	int flag=0;
	if(year%400==0){
		flag = 1;
	}
	if(year%4==0 && year%100!=0){
		flag = 1;
	}
	return flag;
}
int main(){
	int year,kt;
	printf("Nhap nam: ");
	scanf("%d",&year);
	kt = checkYear(year);
	if(kt==1){
		printf("\n%d la nam nhuan.",year);
	}else{
		printf("\n%d khong la nam nhuan.",year);
	}
    return 0;
}
