#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)

{
    char passwd[] = "password";
    if (!strcmp(passwd, argv[1]))
    {
        printf("Correct Password!/n");

        return;
    }
}

/* 文件名：hack.c */

#include <stdio.h>

#include <string.h>
int strcmp(const char *s1, const char *s2)

{

    printf("hack function invoked. s1=<%s> s2=<%s>/n", s1, s2);

    /* 永远返回0，表示两个字符串相等 */

    return 0;
}