/*Landmark#4
Develop a Calculator:
You have only 1 paisa(0.01) with you
If your money double everyday
Then Calcuulate the amount You have after 30 days
#Is that money more than 50 Lacs.
*/
#include <stdio.h>
int main()
{
    int i;
    float money=0.01;

    for(i=1;i<=30;i++)
    {
        printf("\nDay %d:\t",i);
        printf("\nAmount %.2f",money);
        money=money*2;
    }
    printf("\n******************************\n");
    printf("\nTotal money after 30 days and on 31st day is=%.2f",money);
}