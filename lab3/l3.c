/*
จงเขียนโปรแกรมที่รับพิกัด (x,y) ของจุดหนึ่ง แล้วตรวจสอบว่าจุดนั้นอยู่ภายในบริเวณ A หรือ B หรือ C ใน
รูปข้างล่าง (จุดที่อยู่บนเส้นรอบรูป ไม่นับว่าอยู่ในรูป)
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int arearA[40][40];
    int areaB[50][40];
    for (int x = 0; x < 40; x++)
    {
        for (int y = 0; y < 40; y++)
        {
            arearA[x][y] = y;
        }
    }
    return 0;
}
