#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate){
    int temp = candidate;
    int power = 0;
    while (temp > 0){
        power += 1;
        temp = temp / 10;
    }

    int sum = 0;
    int temp2 = candidate;
    int mod;
    int modtotal;

    while (temp2 > 0){
        mod = temp2 % 10;
        modtotal = mod;
        for (int i = 1; i < power; i++){
            modtotal *= mod;
            
        }
        sum = sum + modtotal;
        temp2 = temp2 / 10;
        
    }

    return sum == candidate;
}