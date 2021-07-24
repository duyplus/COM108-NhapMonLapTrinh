#include <stdio.h>
int main(){
	int i,x,count=0;
    printf ("Nhap x: ");
    scanf("%d",&x);
    for(i=2;i<x;i++){
		if(x%i==0){
			count++;
		}
    }
    if(count==0){
    	printf ("%d la so nguyen to",x);
    }else{
    	printf("%d khong phai so nguyen to",x);
    }
    return 0;
}
