#include<stdio.h>
void main(){
	int a,i;
	printf("\nenter a number: ");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	    printf("\n  %dx%d=%d",a,i,a*i);
}
