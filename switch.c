#include<stdio.h>
void main(){
	int ch,c=1;
	float f;
	while(c){
	
	  printf("enter choice\n1.fahrenheit to celsius\n2.celsius to fahrenheit\n\t\t\t:");
	  scanf("%d",&ch);
	
	  switch(ch){
		case 1:
		       printf("\nenter fahrenheit temp: ");
		       scanf("%f",&f);
		       printf("\n%.2f",(f-32)*5/9);
		       break;
		case 2:
		       printf("\nenter celsius temp: ");
		       scanf("%f",&f);
			   printf("\n%.2f",(9/5)*f+32);
			   break;
		default:
		        printf("\n wrong input.....");	          
	  }
	  printf("\n do u want to enter again : if yes enter 1,if no enter 0: ");
	  scanf("%d",&c);
    }
}
