#include <stdio.h>
int num1, num2, result, op;
 int marcelo (int num1, int num2) {
	printf(" digite o priimeiro numero:\n");
	scanf ("%d", &num1);
	printf(" digite o segundo numero:\n");
	scanf ("%d", &num2);
	}
		
 int main (void) {
	
	scanf("%d", &op);
	
	switch (op){
	   case 1 :
	     num1 + num2; 
	     printf ("%d \n", result);
	   case 2 :
	       num1 - num2;
	      printf ("%d\n", result);
	   case 3 :
        	 num1 * num2;
	        printf ("%d\n,", result);
	   case 4 : 
	         num1 / num2;
	         printf ("%d\n", result);
  }
	}
