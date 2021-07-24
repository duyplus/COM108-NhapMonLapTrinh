#include <stdio.h>
int main(){
	int i=0,n=0,p=0;
    char s[100];
	printf("Xin moi nhap vao chuoi: ");
	scanf("%s",s);
	/*
	for(i=0;s[i]!='\0';i++){
        if(s[i]=='a' || s[i]=='i' || s[i]=='e' || s[i]=='u' || s[i]=='o' ||
           s[i]=='A' || s[i]=='I' || s[i]=='E' || s[i]=='U' || s[i]=='O'){
			n++;
        }else{
            p++;
        }
    }
    */
	while(s[i++] != '\0') {
		if(s[i]=='e' || s[i]=='u' || s[i]=='o' || s[i]=='a' || s[i]=='i' ||
		   s[i]=='A' || s[i]=='I' || s[i]=='E' || s[i]=='U' || s[i]=='O'){
			n++;
		}else{
			p++;
		}
	}
	printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.",s,n,p);
	return 0;
}
