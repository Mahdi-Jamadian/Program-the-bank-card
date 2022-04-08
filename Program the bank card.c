#include <stdio.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */
int main() {

    double Money_balance,Remaining_money;
    int yes_or_no;
    double Purchase_amount = 0.0;
    yes_or_no = 1;
    printf("Money balance :  ");
    scanf("%lf",&Money_balance);
    Remaining_money = Money_balance;
    while (yes_or_no==1)
    {
        printf("\n Are you going to buy (if yes number 1 and if no 0) : ");
        scanf("%d",&yes_or_no);
        if(yes_or_no == 1 && Money_balance>=0)
        {
            printf("Enter the purchase amount : ");
            scanf("%lf",&Purchase_amount);
            if(Purchase_amount>Money_balance)
            {
                printf("Inventory is not enough !!! ");
            } else
            {

                Remaining_money = Remaining_money - Purchase_amount;
                printf("\n Card money balance : %6.3lf  $",Remaining_money);
            }
        } else{

            printf("\n Card money balance : %6.3lf  $ \n",Remaining_money);
            printf("Initial inventory card : %6.3lf $ \n ",Money_balance);
            printf("Amount purchased : %6.3lf  $ ",Money_balance-Remaining_money);
            yes_or_no = 0;
        }
    }

    return 0;
}
