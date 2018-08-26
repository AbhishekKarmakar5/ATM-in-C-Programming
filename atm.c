#include<stdio.h>
#include<windows.h>

char trans ='Y';
unsigned long amount=0, deposit, withdraw;
int choice, pin, flag;

int main()
{   int p=2000;
    printf("\n\n");
    printf("\n\t    ________________________________________________________________________\n");
    printf("\n\t\t                             HELLO!               \n");
    printf("\n\t    ________________________________________________________________________\n");
    printf("\n\t\t********************KARMAKAR COMMERCIAL BANK********************\n");
    printf("\n\t    ________________________________________________________________________\n\n");
    printf("\t\t--------Welcome to our ATM service of KARMAKAR BANK----------\n\n\n");
    printf("\n\t\t    Enter the ATM PIN (Personal Identification Number) : ");
    scanf("%d",&p);
    if (p==2000)
	{ system("cls");
	 } 
	else
	{
    	printf("\n-----------Invalid Password!!!!-----------");
    	return(0);
	}
    do
    {	    printf("\n\n");
    	    printf("\n\t    ________________________________________________________________________\n");
   		    printf("\n\t\t                             HELLO!               \n");
            printf("\n\t    ________________________________________________________________________\n");
            printf("\n\t\t********************KARMAKAR COMMERCIAL BANK********************\n");
            printf("\n\t    ________________________________________________________________________\n\n");
            printf("\t\t\t--------Welcome to ATM Service of ABHISHEK KARMAKAR----------\n\n\n");
            printf("\t1. Check Balance\n");
            printf("\t2. Withdraw Cash\n");
 			printf("\t3. Deposit Cash\n");
 			printf("\t4. Quit\n\n\n");
            printf("\tSelect An Option: ");
            scanf("%d", &choice);
             
            switch (choice)
            {
                case 1: printf("\n YOUR BALANCE : Rs. %lu ", amount);
                          break;
                case 2: printf("\n ENTER THE AMOUNT TO WITHDRAW : Rs ");
  						 scanf("%lu", &withdraw);
 					     if (withdraw >(amount ))
						 {
 							 printf("\n INSUFFICENT FUNDS TO BE COLLECTED");
						 }
						 else
 						 {
 							 amount = amount - withdraw;
 							 printf("\n\n PLEASE COLLECT CASH");
 							 printf("\n YOUR CURRENT BALANCE IS Rs %lu", amount);
 						}
						 break;
                 case 3:   printf("\n ENTER THE AMOUNT TO DEPOSIT : Rs");
 							scanf("%lu", &deposit);
 							amount = amount + deposit;
 							printf("YOUR BALANCE IS Rs. %lu", amount);
 						 break;
                  case 4:
                          system("cls");
                          printf("\n\n\n\n\n\n\n\t\tTHANK YOU FOR USING OUR ATM SERVICES\t\n\n");
                          printf("\t\tDONE BY ABHISHEK KARMAKAR");
                          getch();
                          return 0;
                          break;
						  
				 default: printf("\n INVALID OPTION");
			 }
            printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
            fflush(stdin);
             
            scanf("%c", &trans);
            system("cls");
             
            if (trans == 'n'|| trans == 'N')
                        flag = 1;
    } while (!flag);
        printf("\n\n THANK YOU FOR USING OUR ATM SERVICES\n");
        printf("\n\n\n");
        printf("\t\tprogramming done by ABHISHEK KARMAKAR");
 
  return 0;
}
