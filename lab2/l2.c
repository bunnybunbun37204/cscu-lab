/*
จงเขียนโปรแกรมที่หาว่าสามารถหาผลเฉลยของสมการกําลังสองจากสูตร x =
−b±√b
2−4ac
2a
ได้หรือไม่ โดย

ตรวจสอบว่า b

2 − 4ac ≥ 0 และ a ≠ 0 แล้วแสดงผลลัพธ์ดังตัวอย่างข้างล่างนี้

ตัวอย่างการทํางาน
Enter coefficients a, b, c : 1, 4, 3
Can use quadratic formula: True
Enter coefficients a, b, c : 2.3, -1.5, 1.5 
Can use quadratic formula: False
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    char buffer[4096];
    char *input, *_a, *_b, *_c;
    float a = 0, b = 0, c = 0;
    printf("Enter coeff : ");
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

    float idk = (float)pow(b, 2) - (4 * a * c);
    if ((a == 0) || (idk < 0))
    {
        printf("Can use quadratic formula: False\n");
        return 1;
    }
    printf("Can use quadratic formula: True\n");
    return 0;
}
