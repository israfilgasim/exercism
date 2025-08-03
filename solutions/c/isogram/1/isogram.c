#include "isogram.h"

bool is_isogram(const char phrase[]) {
    if (!phrase){
        return false;
    }
    int letters[26] = {0};  // Initialize the array with zeros

    int j = 0;
    int k;
    while (phrase[j] != '\0') {
        k = (int)phrase[j];

        if ((k >= 97) && (k <= 122)) {
            letters[k - 97] = letters[k - 97] + 1;
            if (letters[k - 97] > 1) {
                return false;
            }
        } else if ((k >= 65) && (k <= 90)) {
            letters[k - 65] = letters[k - 65] + 1;
            if (letters[k - 65] > 1) {
                return false;
            }
        }
        j++;
    }

    return true;
}
