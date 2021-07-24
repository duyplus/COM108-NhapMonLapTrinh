#include <stdio.h>
int main(){
	int x,i,ount=0;
    printf("Nhap x: ");
	scanf("%d",&x);
    for(i=1;i<x;i++){
       if(i*i == x){
			printf ("\n%d la so chinh phuong",x);
			break;
       }
    }
    return 0;
}
