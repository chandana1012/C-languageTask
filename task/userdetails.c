#include<stdio.h>
#include<conio.h>
void main(){

	int age=0;
	double pno;
	char name[20];
	printf("enter the details :\n 1.name: ");
	gets(name);
	printf("\n2.age: ");
	scanf("%d",&age);
	printf("\n3.phnone number: ");
    scanf("%lf",&pno);
	printf("the details are....\n name :%s\n age: %d\n phone no:%.lf ",name,age,pno);
	
	
}
