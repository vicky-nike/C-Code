/* Enter a date and get which day it is as output*/

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    char week[7][10] ;
    int date, mon, year, i, r, s = 0 ;

    strcpy(week[0], "Sunday") ; 
    strcpy(week[1], "Monday") ; 
    strcpy(week[2], "Tuesday") ; 
    strcpy(week[3], "Wednesday") ; 
    strcpy(week[4], "Thursday") ; 
    strcpy(week[5], "Friday") ; 
    strcpy(week[6], "Saturday") ; 

    cout<<"Enter a valid date dd/mm/yyyy \n";
    cin>>date>>mon>>year;

    //To check leap year
    if(year%400==0)
    {
        month[1]=29;
    }

    for(i=0; i<(mon-1); i++)
    {
        s = s + month[i];
    }

    s = s + (date + year + (year/4) - 2);
    s = s % 7;

    cout<<"The day is "<<week[s];

    return 0;
}