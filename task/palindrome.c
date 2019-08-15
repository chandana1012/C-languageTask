#include<stdio.h>
void main(){
	char str[20],c=0,i=0,l=0;
	printf("enter  a string  ");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++) l++;
    l-=1;
	while(i<l){
		if(str[i]!=str[l]){
			c++;
			break;
		}
		i++;
		l--;
	}
	if(c==1)  printf("\n\n   not palindrome...");
	else printf("\n\n   palindrome....");
}
