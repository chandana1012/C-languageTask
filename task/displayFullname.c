#include<stdio.h>
#include<string.h>
void main(){
	char fname[30],lname[10];
	printf("\nenter first name: ");
	gets(fname);
	printf("\nenter last name: ");
	gets(lname);
	strcat(fname,lname);
	printf("\n\nfull name: %s ",fname);
	
	
}
