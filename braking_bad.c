#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<time.h>

int getcomputerchoice();
int getuserchoice();
void    checkwinner (  int userchoice , int computerchoice ) ;
int main () {

    srand(time(NULL));
    printf("### ROCK PAPER SCISSORS ###\n");

    int userchoice = getuserchoice();
    int computerchoice = getcomputerchoice();


     switch (userchoice)
     {
     case 1: printf("YOU CHOOSE ROCK\n");
        break;
      case 2: printf("YOU CHOOSE PAPER\n");
        break;
         case 3: printf("YOU CHOOSE SCISSORS \n");
        break;
     }

      switch (computerchoice)
     {
     case 1: printf("Computer CHOOSE ROCK\n");
        break;
      case 2: printf("Computer CHOOSE PAPER\n");
        break;
         case 3: printf("Computer CHOOSE SCISSORS \n");
        break;}

        checkwinner(userchoice,computerchoice);
     
   
   
 return 0; }
 int getcomputerchoice(){
return (rand() % 3 ) +1;
 }
int getuserchoice(){
  int choice = 0;

  do {  printf("choose an option\n");
    printf("1. ROCK\n");
    printf("2. PAPER\n");
    printf("3. SCISSORS\n");
    printf("Enter your choice:");
    scanf("%d", &choice);
  }while(choice < 1 || choice > 3);
   
   
  

return choice;}


void    checkwinner (  int userchoice , int computerchoice ) {

  if  (userchoice == computerchoice){
  
    printf(" It's a TIE!");

  }
  else if (userchoice == 2 && computerchoice == 1  )
  {
    printf("YOU WIN!");

  }
    else if (userchoice == 1 && computerchoice == 3 ){

    printf("YOU WIN!");

    }
    else if (userchoice == 3 && computerchoice == 2){ printf("You WIN!");}
    
    
     else {printf("YOU LOST!");
  } 


  
}