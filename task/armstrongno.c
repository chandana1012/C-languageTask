#include<stdio.h>
#include<math.h>
void main(){
	int i,j,n,c=0,r=0,sum=0;
	printf("enter the number : ");
	scanf("%d",&n);
	for(i=n;i>0;i/=10)
	  c++;
	for(i=n;i>0;i/=10){
		r=i%10;
		sum+=pow(r,c);
	}
	if(sum==n)
	 printf("\n\n    armstrong number");
	else 
	 printf("\n\n    not armstrong number "); 
}
