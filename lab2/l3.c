/*
จงเขียนโปรแกรมที่รับความยาวด้าน 3 ด้านของสามเหลี่ยมจากผู้ใช้ แล้วตรวจสอบว่าเป็นด้านของสามเหลี่ยม
หรือไม่ และแสดงผลลัพธ์ดังตัวอย่างข้างล่างนี้
ตัวอย่างการทํางาน
Length of 3 sides: 3, 7.5, 4
Triangle: False
Length of 3 sides: 3.4, 5, 4
Triangle: True
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char buffer[4096];
    char *input, *_a, *_b, *_c;
    float a = 0, b = 0, c = 0;
    printf("Length of triangle : ");
    scanf(" %100[^\n]", buffer);

    input = (char*)malloc(strlen(buffer) + 1);
    strcpy(input, buffer);

    char *token = strtok(input, ", ");
    int cout = 0;
    while(token != NULL) 
    {
        if (cout == 0) 
        {
            _a = (char*)malloc(strlen(input));
            strcpy(_a, token);
        }
        else if (cout == 1)
        {
            _b = (char*)malloc(strlen(input));
            strcpy(_b, token);
        }
        else
        {
            _c = (char*)malloc(strlen(input));
            strcpy(_c, token);
        }
        token = strtok(NULL, " ");
        cout++;
    }
    a = atof(_a);
    b = atof(_b);
    c = atof(_c);

    free(input);
    free(_a);
    free(_b);
    free(_c);

    if ((a+b > c) && (a+c > b) && (b+c > a))
    {
        printf("Triangle: True\n");
    }
    else
    {
        printf("Triangle: False\n");
    }

    return 0;
}
