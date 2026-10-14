#include <stdio.h>
int main(){

    int number;

    int number1;
    int number2;

    float addition;
    float substraction;
    float multiplication;
    float division;

    printf("enter 1st number:");
    scanf("%d",&number1);

    printf("enter 2nd number:");
    scanf("%d",&number2);


   printf("\n");
   printf(">>>>>RESULT<<<<<\n");
   printf("\n");

    addition = number1 + number2;
    substraction = number1 - number2;
     multiplication = number1 * number2;
     division = number1 / number2;


    printf("add= %.2f\n",addition);
     printf("subtraction= %.2f\n",substraction );
     printf("multiplication= %.2f\n",multiplication );
     printf("division= %.2f\n",division);
    
     
    return 0;
}