#include <stdio.h>
int main(){
	const int a,b,c;
	printf("Nhap a hoac b de kiem tra: ");
	scanf("%d",&c);
	switch(c){
		case 1:
			scanf("%d%d",&a,&b);
			if(a==0){
				if(b==0){
					printf("\nPhuong trinh vo so nghiem.");
				}
				else{
					printf("\nPhuong trinh vo nghiem.");
				}
			}
			break;
		case 2:
			scanf("%d%d",&a,&b);
			printf("\nPhuong trinh co nghiem x = %d",-b/a);
			break;
	}
}
