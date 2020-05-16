/*
    documentation:

    Age Calculator in C program
*/
#include <stdio.h>

/* function to calculate current age */
void age(int current_date, int current_month, int current_year, int birth_date, int birth_month, int birth_year)
{
    int date, month, year;

    /* days of every month */
    int year_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if(birth_date > current_date){
        current_date = current_date + year_month[birth_month - 1];
        current_month--;
    }
    if(birth_month > current_month){
        current_year--;
        current_month = current_month + 12;
    }
    /* calculate date, month, year */
    date = current_date - birth_date;
    month = current_month - birth_month;
    year = current_year - birth_year;

    printf("\nYour age:\n%d year, %d month, %d days\n", year, month, date);
}

int main()
{
    int screen;
    int current_date, current_month, current_year;
    int birth_date, birth_month, birth_year;
    /* birth dd// mm// yyyy */
    printf("Enter your Birth Date: ");
    scanf("%d", &birth_date);
    printf("Enter your Birth Month: ");
    scanf("%d", &birth_month);
    printf("Enter your Birth Year: ");
    scanf("%d", &birth_year);
    /* current dd// mm/yyyy */
    printf("Enter Current Date: ");
    scanf("%d", &current_date);
    printf("Enter Current Month: ");
    scanf("%d", &current_month);
    printf("Enter Current Year: ");
    scanf("%d", &current_year);
    /* function call to print age */
    age(current_date, current_month, current_year, birth_date, birth_month, birth_year);
    scanf("%d", &screen);
    return 0;
}
