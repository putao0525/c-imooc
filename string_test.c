//
// Created by putao on 2022/3/14.
//
#include "include/io_utils.h"  //先从工程的源文件所在的路径查找，然后工程的头文件搜索目录
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

int IsDigit(char c) {
    return c >= '0' && c <= '9';
}

int main(void) {

    PRINT_INT(isdigit('0'));
    PRINT_INT(atoi("112"));
    PRINT_DOUBLE(atoi("3.324"));

    char cc = NULL;
    char c1 = 2;
    char c2 = 'a';
    printf("%d\n", cc);
    printf("%c\n", cc);
    printf("%c\n", c1);
    printf("%d\n", c1);
    printf("%d\n", c2);
    printf("%c\n", c2);
    _Bool tag = true;
    if(tag){
        printf("hello world");
    }
    return 0;
}