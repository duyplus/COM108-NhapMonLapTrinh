#include <stdio.h>
#include <string.h>
void checklogin(char user[100],int pass){
    char userSys[] = "admin";
    int passSys = 12345;
    if(strcmp(user,userSys)==0 && pass==passSys){
        printf("\nDang nhap thanh cong!!!\n");
    }else{
        printf("\nDang nhap that bai!!!\n");
    }
}
int main(){
	char user[100];
	int pass;
	printf("Mac dinh username va password la: admin va 12345\n");
	printf("Nhap username: ");
	scanf("%s",&user);
	printf("Nhap password: ");
	scanf("%d",&pass);
	checklogin(user,pass);
    return 0;
}
