#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) 
{
    unsigned int counter; // number of grade to be entered next
    int grade; // grade value
    int largest; // sum of grades entered by user
    
    // initialization phase
    largest = 1;
    // processing phase
    for (counter = 1; counter <= 10; counter = counter + 1) { // loop 10 times
        printf("%s", "Enter your grade: "); // prompt for input
        scanf("%d", &grade); // read grade from user
        if (grade > largest)
        largest = grade; // add grade to total
        
    
    } // end for

    printf("Highest score is %d\n", largest); // display result

}
