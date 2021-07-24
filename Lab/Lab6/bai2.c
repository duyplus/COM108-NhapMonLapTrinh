#include <stdio.h>
void nhap(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu %d la: ",i);
		scanf("%d",&arr[i]);
    }
}
int max(int arr[],int n){
	int max = arr[0];
	for(int i=1;i<n;i++){	
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int min(int arr[],int n){
	int min = arr[0];
	for(int i=1;i<n;i++){	
		if(arr[i]<min){
			min=arr[i];
		}
	}
	return min;
}
int main(){
	int n;
	int arr[n];
	printf("Nhap n: ");
	scanf("%d",&n);
	nhap(arr,n);
	printf("\nGia tri lon nhat cua mang la: %d", max(arr,n));
	printf("\nGia tri nho nhat cua mang la: %d", min(arr,n));
    return 0;
}
