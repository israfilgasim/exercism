#include <stdio.h>
#include <stdbool.h>

bool leap_year(int year){

    if (year % 100 == 0){
        return year % 400 == 0;
    } else{
        return year % 4 == 0;
    }
    
}
