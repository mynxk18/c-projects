#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void checkbalance(float balance);
float deposit ();
float withdraw(float balance); 

int main() {
  

  int choice = 0;
  float balance = 0.0f;

  do
  {
    printf("Select an option\n");
     printf("1. check balance\n");
     printf("2. Deposit Money\n");
     printf("3. Withdraw Money\n");
     printf("4. exit\n");

     printf("Enter your choice\n");
     scanf("%d",&choice);
  
  
  switch (choice)
  {
  case 1 :
    checkbalance(balance);

    break;
  case 2: 
  balance =  balance+ deposit();

    break;
    case 3 :
    balance = balance - withdraw(balance);
    break;
    case 4:  
    printf("Thank for using bank\n");
    break;
      default: printf("INvalid! choice! Please choose 1-4:\n");}
  }
   
  while (choice != 4);
  
  
 return 0; }
void checkbalance(float balance){
  printf("Your current balance is : %.2f\n", balance);

}
float deposit (){
   float amount = 0.0f;

   printf("Enter amount to deposit: $");
   scanf("%f",& amount);

   if(amount < 0){

    printf("\nInvalid! amount\n");
    return 0.0f;

   }
    else{

      printf("\nsuccssesfully Deposited $%.2f\n", amount);
      return amount;
    }
  
}
float withdraw(float balance){

  float amount = 0.0f;

   printf("\nEnter amount to withdraw: $");
   scanf("%f",& amount);

   if(amount < 0){

    printf("\nInvalid! amount\n");}

    else if(amount > balance){

      printf("\nInsuffcient  funds!  Your balance is %.2f\n", balance);
       return 0.0f; 
    }
    else {printf("\nsuccessfully withdraw $%.2f\n", amount);
                return amount; }

}   