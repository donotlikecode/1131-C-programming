#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

// Fig. 4.6: fig04_06.c
// Calculating compound interest

int main(void)
{
    double principal = 1000.0; // starting principal
    double rate = .05; // annual interest rate

    // output table column heads
    printf("%4s%-21s\n", "Year", "Amount on deposit");  //從year之後21格預設向右對齊  想要向左就-21

    // calculate amount on deposit for each of ten years
    for (unsigned int year = 1; year <= 10; ++year) {

        // calculate new amount for specified year
        double amount = principal * pow(1.0 + rate, year); //pow(x, y)計算x的y次方

        // output one table row
        printf("%4u%21.2f\n", year, amount);  //欄位寬度21 小數點後2位
    }
}
