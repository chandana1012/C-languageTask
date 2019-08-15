#include<stdio.h>
void main(){
	float s1,s2,s3;
	printf("enter 3 sunject marks(with space)of student:  ");
	scanf("%f%f%f",&s1,&s2,&s3);
	printf("\n*******MARKS OF STUDENT******\n");
	printf("\ns1:%.2f\ns2:%.2f\ns3:%.2f\naverege marks:%.2f",s1,s2,s3,(s1+s2+s3)/3);
		
}
