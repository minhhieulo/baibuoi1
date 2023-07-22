#include<stdio.h>
#include<Math.h>
int main(){
	int n ,sum;
	printf("nhap vao so nguyen n: ");
	scanf("%d",&n);
	for(int i =1 ; i<=n; i++){
		sum+=i;
	}
	printf("Tong la: %d",sum);
	return 0 ;
	
}
	
