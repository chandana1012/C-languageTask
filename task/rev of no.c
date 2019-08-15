#include<stdio.h>
void main (){
	int n,i,rev=0,rem=0;
	printf("enter the number :");
	scanf("%d",&n);
	for(i=n;i>0;i=i/10){
		rem=i%10;
		rev=rev*10+rem;
	}
	printf("\n\n   %d",rev);
}
