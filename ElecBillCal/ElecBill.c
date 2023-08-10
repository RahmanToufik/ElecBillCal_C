#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
//#include <conio.h>
#include <string.h>
#include "mainElecBill.h"

void details(void)
{
    printf("Enter your  area name:\n");
    scanf("%s", B.area);
    printf("Enter your  name:\n");
    scanf("%s", B.name);
    printf("Enter your Meter Number:\n");
    scanf("%d", &B.meternumber);
    printf("Enter units consumed:\n");
    scanf("%d", &B.unitsconsumed);
    printf("Enter email ID :\n");
    scanf("%s", B.email);
    printf("Enter the permanent address :\n");
    scanf("%s", B.address);
    printf("Enter the phone number : \n");
    scanf("%d", B.phonenumber);
}

void Urban(void)
{
    int amount=0;
    if(B.unitsconsumed <=30 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 3.25;
    }
    else if(B.unitsconsumed >= 31 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 4.70;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 6.25;
    }
    else
    {
        amount = B.unitsconsumed * 7.30;
    }

    printf("****Electricity Bill****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
}

void Rural(void)
{
    int amount=0;

    if(B.unitsconsumed <=30 && B.unitsconsumed >= 0)
    {
        amount = B.unitsconsumed * 3.15;
    }
    else if(B.unitsconsumed >= 31 && B.unitsconsumed <= 100)
    {
        amount = B.unitsconsumed * 4.40;
    }
    else if(B.unitsconsumed >= 101 && B.unitsconsumed <= 200)
    {
        amount = B.unitsconsumed * 5.95;
    }
    else
    {
        amount = B.unitsconsumed * 6.80;
    }
    printf("****Electricity Bill****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
}
