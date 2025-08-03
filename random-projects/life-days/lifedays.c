#include <stdio.h>
#include <time.h>
#include "months.h"

int main(){

    //calculate today's date
    time_t now = time(NULL);

    struct tm *tm = localtime(&now);

    int day, month, year;
    

    day = tm -> tm_mday;
    month = tm -> tm_mon + 1;
    year = tm -> tm_year + 1900;

    //prompt user for their birthday

    int birthmonth, birthdate, birthyear;

    printf("Please provide your birthdate in mm/dd/yyyy format: ");
    scanf("%d/%d/%d", &birthmonth, &birthdate, &birthyear);

    int leap_years = 0;

    for(int y = birthyear; y < year; y++){
        if(y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)){
            leap_years++;
        }
    }
    
    int age = (year - birthyear);
    int normal_years = (age - leap_years);

    int birth_month_days;

    switch(birthmonth){
        case 1:
            birth_month_days = JANUARY;
            break;
        case 2:
            birth_month_days = FEBRUARY;
            break;
        case 3:
            birth_month_days = MARCH;
            break;
        case 4:
            birth_month_days = APRIL;
            break;
        case 5:
            birth_month_days = MAY;
            break;
        case 6:
            birth_month_days = JUNE;
            break;
        case 7:
            birth_month_days = JULY;
            break;
        case 8:
            birth_month_days = AUGUST;
            break;
        case 9:
            birth_month_days = SEPTEMBER;
            break;
        case 10:
            birth_month_days = OCTOBER;
            break;
        case 11:
            birth_month_days = NOVEMBER;
            break;
        case 12:
            birth_month_days = DECEMBER;
            break;
        default:
            birth_month_days = 0;
            break;
    }

    int curr_month_days;

    if(month == birthmonth){
        curr_month_days = day - birthdate;
    }
    else if(month > birthmonth){
        curr_month_days
    }

    //int total_days = ((normal_years * 365 + leap_years * 366));

    
    printf("\nToday is the %dth, of the %dth month, year %d\n", day, month, year);
    printf("\nYou have lived %d regular years, %d leap years, and your age is %d\n", normal_years, leap_years, age);
    
    return 0;

}