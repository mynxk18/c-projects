#include <stdio.h>






int main(){
     

  //calculator 

  char operator = '\0';
  double  num1 = 0.0;
  double  num2 = 0.0;
  double result = 0.0;

  printf("calculator\n");

  printf("Enter your first num1: ");
  scanf("%lf",&num1);

  printf("Enter your operator (+,-,*./,):");
  scanf(" %c",  &operator);


  printf("Enter your num2 :");
  scanf("%lf", &num2);


  switch (operator)
  {
  case '+':
          result= num1 + num2;
    break;
    case '-':
    result = num1- num2;
    break;
  case '*':
    result = num1 * num2;
    break;
     case '/': 
     if (num2 == 0){
      printf("you can't divide by zero !\n");
}
else{
    result = num1 / num2;}
 
    break;
    default:
    printf("invalid operator\n ");
  }  

  printf(" Result = %.4lf", result );

            return 0; }