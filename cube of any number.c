#include<stdio.h>
int main(){
	int n,i=1;
	printf("enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	printf("number is %d and cube of number is %d: %d\n",i,i,(i*i*i));
}
	return 0;
}
