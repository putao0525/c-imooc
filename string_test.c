//
// Created by putao on 2022/3/14.
//
#include <ctype.h>
#include "include/io_utils.h"

int IsDigit(char c) {
    return c >= '0' && c <= '9';
}

int main(void) {
    PRINT_INT(isdigit('0'));
    return 0;
}