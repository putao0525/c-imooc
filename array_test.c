//
// Created by putao on 2022/3/14.
//
#include "include/io_utils.h"

#define ARRAY_SIZE 10

void test01() {
    int array[ARRAY_SIZE];
    for (int i; i < ARRAY_SIZE; i++) {
        array[i] = i;
        PRINT_INT(array[i]);
    }


}

int main(void) {
    test01();
    return 0;
}
