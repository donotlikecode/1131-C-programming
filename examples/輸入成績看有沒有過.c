
int main(void) {
    int grade = 0;
    //printf("Entet your score!\n");
    puts("Enter your score!");
    scanf("%d", &grade);

    if (grade >= 60)
    {
        printf("Congrats! you Pass");
    }

    else
    {
        printf("See you next year!");
    }
}
