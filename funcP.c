#include <stdio.h>
#include <stdlib.h>
#include "include/io_utils.h"

#define COUNT 5

//指向指针的指针
void initP(int **ppa, int count, int initValue) {
    *ppa = malloc(sizeof(int) * count);// ppa指针指向的值存放这块内存地址
    for (int i = 0; i < count; i++) {
        (*ppa)[i] = 0;
    }
}

int main() {
    int *p;//定一个指针，用于外部申请内存
//    initP(&p, COUNT, 0);
//    p = calloc(COUNT, sizeof(int));// 初始化的值为0
//    p = realloc(p, COUNT * sizeof(int));
//    for (int i = 0; i < COUNT; i++) {
//        printf("%d\n", p[i]);
//    }
//    PRINT_INT_ARRAY(p, COUNT);
//    free(p);//此处用于释放内存
    int a = 20;
    int *pa = NULL;
    pa = &a;
    int **ppa = &pa;
    printf("------------\n");
    printf("pa指针指向地址: %#x\n", pa);
    printf("pa指针指向的值: %d\n", *pa);
    printf("pa指针的地址: %#x\n", &pa);
    printf("ppa指针指向的地址: %#x\n", *ppa); //*ppa == p
    printf("ppa指针指向的地址在求值: %d\n", **ppa);
    printf("ppa指针指向的地址在求值: %#x\n", &ppa);
    return 0;
}