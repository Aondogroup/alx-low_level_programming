int convert_day(int month, int day, int year)
{
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // number of days in each month
    int is_leap_year = 0; // flag for leap year
    
    // check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        is_leap_year = 1;
    }
    
    // adjust number of days in February if it's a leap year
    if (is_leap_year) {
        days_in_month[1] = 29;
    }
    
    int day_of_year = 0; // initialize day of year
    
    // calculate day of year
    for (int i = 0; i < month - 1; i++) {
        day_of_year += days_in_month[i];
    }
    day_of_year += day;
    
    return day_of_year;
}
