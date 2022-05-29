/*
จงเขียนโปรแกรมที่คํานวณหาผลเฉลยของสมการกําลังสอง (quadratic equation) โดยให้รับสัมประสิทธิ์
a, b, c ในสมการ ax2 + bx + c = 0 จากผู้ใช้แล้วคํานวณหาผลเฉลยจากสูตร x =
−b±√b
2−4ac
2a
แล้ว

แสดงผลลัพธ์ดังตัวอย่างข้างล่างนี้(a ต้องไม่เป็น 0 และ b
2 ≥ 4ac )

ตัวอย่างการทํางาน
Enter coefficients a, b, c : 1, 4, 3
x = -1.0 , -3.0
Enter coefficients a, b, c : 2.5, -8.7, 2.1 
x = 3.219053751558745 , 0.26094624844125425
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
        printf("a cannot be 0 or b2 > 4ac\n");
        return 1;
    }
    float result1 = (-b + (float)sqrt(idk)) / (2*a);
    float result2 = (-b - (float)sqrt(idk)) / (2*a);

    printf("x : %f, %f\n", result1, result2);
    return 0;
}
