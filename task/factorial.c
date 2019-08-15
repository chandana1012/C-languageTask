#include<stdio.h>

int fact(int n){
	int f;
    if(n==0|n==1){
	
        return 1;
    }
    else{
	    f=n*fact(n-1);
	}
	return f;	 
}

int main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	printf("\n%d",fact(n));
    return 0;
}
