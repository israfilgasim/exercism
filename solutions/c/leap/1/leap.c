#include "leap.h"

bool leap_year(int year){

    if (year % 100 == 0 && year % 400 != 0){
        return false;
    } else if (year % 4 != 0){
        return false;
    } else{
        return true;
    }
    
}
