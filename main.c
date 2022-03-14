#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "include/io_utils.h"

//NULL string 字符数组最后一个是\0
void testString01() {
    char s[] = "113abc;;;%%";
    for (int i = 0; s[i] != NULL; i++) {
        if (isalnum(s[i])) {
            printf("%c", s[i]);
        }
    }
    return;
}

struct student {
    char name[20];
    int age;
    char sex;
    int height;
};

void testStruct() {
    struct student stu01;
    strcpy(stu01.name, "xxx");
    stu01.age = 23;
    stu01.sex = 'f';
    printf("%s\n", stu01.name);
    struct student *p;
    p = &stu01;
    strcpy((*p).name, "putao");
    printf("%s\n", stu01.name);
    strcpy(p->name, "putao02");

}


int main() {
    PRINT_INT(1);
    testStruct();
//    testString01();
}
