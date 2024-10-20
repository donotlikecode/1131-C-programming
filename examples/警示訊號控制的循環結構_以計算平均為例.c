#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

// function main begins program execution
int main(void)
{
    unsigned int counter; // number of grades entered
    int grade; // grade value
    int total; // sum of grades

    float average; // number with decimal point for average

    // initialization phase
    total = 0; // initialize total
    counter = 0; // initialize loop counter

    // processing phase
    // get first grade from user
    printf("%s", "Enter grade, -1 to end: "); // prompt for input
    scanf("%d", &grade); // read grade from user

    // loop while sentinel value not yet read from user
    while (grade != -1) {
        total = total + grade; // add grade to total
        counter = counter + 1; // increment counter

        // get next grade from user
        printf("%s", "Enter grade, -1 to end: "); // prompt for input
        scanf("%d", &grade); // read next grade                  
    } // end while

    // termination phase
    // if user entered at least one grade
    if (counter != 0) {

        // calculate average of all grades entered
        average = (float)total / counter; // avoid truncation 
        /*單元強制型別轉換運算子 把total換成浮點數
        C只能夠執行運算元資料型別相通的算術運算式，
        如果在運算式中含有unsigned int 和float的運算式
        ，會複製unsined int的運算元並提升成float
        在這個例子 counter被複製後會被轉成float然後執行兩個float相除
        再把結果給average
        */ 

        // display average with two digits of precision
        printf("Class average is %.2f\n", average);
    } // end if   
    else { // if no grades were entered, output message
        puts("No grades were entered");
    } // end else
} // end function main
