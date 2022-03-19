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
    pa = &a; //pa执行的地址
    int **ppa = &pa;
    printf("------------\n");
    printf("pa指针指向地址: %#x\n", pa);
    printf("pa指针指向的值: %d\n", *pa);
    printf("pa指针的地址: %#x\n", &pa);
    printf("ppa指针指向的地址: %#x\n", *ppa); //*ppa == p
    printf("ppa指针指向的地址在求值: %d\n", **ppa);
    printf("ppa指针指向的地址在求值: %#x\n", &ppa);
    printf("------------\n");
    printf("函数的地址: %#x\n", &initP);
    void (*funcF)(int **pr, int count, int value) =&initP; //定义一个函数指针
    printf("函数的地址: %#x\n", funcF);
    printf("-------函数调用测试-------\n");

    funcF(&pa, 10, 0); //函数的地址直接调用函数
    PRINT_INT_ARRAY(pa, 10);
    free(pa);

    (*funcF)(&pa, 10, 0);
    PRINT_INT_ARRAY(pa, 10);
    free(pa);

    (*initP)(&pa, 10, 0);
    PRINT_INT_ARRAY(pa, 10);
    free(pa);

    printf("-------函数指针判断类型-------\n");
    int *funcTest01(int a, int b); //这是一个函数 *的优先级低，返回值是一个指针
    int (*funcTest02)(int, double); //这是一个函数指针
    int *(*funcTest03)(int, double);//也是一个函数指针，返回值是int 类型的指针
    printf("-------指针是否可以修改测试-------\n");
    int ca = 20;
    int cb = 30;
    int const *cp01 = &ca; //倒着读 ，const修饰int
    printf("常量的指针: %#x\n", *cp01);
//    *cp = cb;//指针指向的值不可以修改
    int *const cp02 = &ca;
//    cp02=&cb;//指针的指向不可以修改
    int const *const cp03 = &a;
    
    return 0;
}