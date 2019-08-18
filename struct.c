#include<stdio.h>
struct BOOK{
	char title[30],author[30],gener[30];
};
void main(){
	struct BOOK b;
	printf("enter title of book:");
	gets(b.title);
	printf("\nenter author of book:");
	gets(b.author);
	printf("\nenter gener of book:");
	gets(b.gener);
	printf("\n\ntitle:%s\nauthor:%s\ngener:%s",b.title,b.author,b.gener);
	
}
