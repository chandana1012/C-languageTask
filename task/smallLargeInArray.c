#include<stdio.h>
void main(){
	int n,a[n],i,max,min;
	printf("enter array size:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++){
		scanf("%d ",&a[i]);
	}
	max=min=a[0];
	for(i=0;i<n;i++){
		if(a[i]<min)
		   min=a[i];
		if(a[i]>max)
		   max=a[i];   
	}
	printf("%d	 %d ",min,max);
}
