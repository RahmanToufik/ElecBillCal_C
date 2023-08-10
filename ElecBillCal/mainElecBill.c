#include <stdio.h>
#include <curses.h>
#include <stdlib.h>
#include <string.h>
#include "mainElecBill.h"
#include "ElecBill.h"

void Urban(void);
void Rural(void);
int main(void)
{
    void details(void);
    int option;
    do
    {
        printf("****Electricity Bill****\n");
        printf("Please enter your choice from below (1-2):\n");
        printf("1. Urban\n");
        printf("2. Rural\n");
        printf("3. EXIT\n");
        printf("Electricity Board Helpline: 8435 2340\n");
        printf("Enter your choice :\n");
        scanf("%d", &option);
        system("cls");
        switch (option)
        {
        case 1:
            Urban();
            break;
        case 2:
            Rural();
            break;
        default:
            printf("SORRY INVALID CHOICE!\n");
            printf("PLEASE CHOOSE FROM 1 or 2\n");
        }
        getch();
    } while (option != 3);
}
