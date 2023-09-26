#include <stdio.h>

char* reverse_string(char* param_1) {
    if (param_1 == NULL) return NULL;

    int length = 0;
    while (param_1[length] != '\0') {
        length++;
    }
    
    int start = 0;
    int end = length - 1;
    
    while (start < end) {
        char temp = param_1[start];
        param_1[start] = param_1[end];
        param_1[end] = temp;
        
        start++;
        end--;
    }
    
    return param_1;
}
