

#include <stdio.h>
#include <stdlib.h>
void deposit();
 void withdraw();
void checkbalance();

int main()
{  int i;

    printf("*********************Welcome to Bank of India****************\n");
    printf("1.Deposit\n");
    printf("2.Withdraw\n");
    printf("3.checkbalance\n");
    printf("4.quit\n");

   while(1)
   {


    printf("\nenter your choice:");
    scanf("%d",&i);

    switch(i)
    {
   case 1:
    deposit();
        break;
   case 2:
    withdraw();
    break;
   case 3:
    checkbalance();
     break;

   case 4:
       printf("Thanks for Coming :)  come again");
    exit(1);

    break;

   default:
    printf("Invalid choice");

    }
    }
return 0;
}
float amount,balance=0;
void deposit()
{

    printf("enter amount to deposit : ");
    scanf("%f",&amount);
    balance= balance + amount;
    printf("balance after deposited is %f",balance);
}

void withdraw()
  { float am1,balance1;

    printf("enter amount to withdraw: ");
    scanf("%f",&am1);
    if (balance>500)

    { if (am1>100)

    {




    printf("\namount withdraw : %f",am1);
    balance1=balance - am1;
    printf("\nbalance after withdraw : %f\n",balance1);
    }
    else{

    printf("*****Please withdraw atleast 100 rupees!!!!!!*****");
    }
    }
    else{
        printf("Insufficient fund");
    }
}
void checkbalance()
{

    printf(" Available Balance  : %f",balance);
}
