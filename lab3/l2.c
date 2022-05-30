/*
จงเขียนโปรแกรมที่รับน้ําหนัก (kg.) และส่วนสูง (m.) จากผู้ใช้มาคํานวณ bmi จาก น้ําหนัก (kg.)/ส่วนสูง
(m.) ยกกําลัง 2 แล้วแสดงผลลัพธ์ว่าผู้ใช้มีรูปร่างในระดับใดดังนี้
ต่ํากว่า 18.5 ผอม
ไม่น้อยกว่า 18.5 แต่ต่ํากว่า 23.0 รูปร่างปกติ
ไม่น้อยกว่า 23.0 แต่ต่ํากว่า 25.0 รูปร่างอ้วน
ไม่น้อยกว่า 25.0 แต่ต่ํากว่า 30.0 อ้วนระดับ 1
ไม่น้อยกว่า 30.0 อ้วนระดับ 2
ตัวอย่างการทํางาน
Weight (kg.) : 61.3
Height (m.) : 1.65
รูปร่างปกติ

Weight (kg.) : 72.3
Height (m.) : 1.5
อ้วนระดับ 2
__________________________________________________________________________

Weight (kg.) : 50.3
Height (m.) : 1.67
ผอม
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float weight = 0, heigt = 0;
    printf("Weight (kg) : ");
    scanf("%f", &weight);
    printf("Height (m) : ");
    scanf("%f", &heigt);

    float bmi = weight / (heigt * heigt);
    if (bmi < 18.5)
    {
        printf("ผอม \n");
    }
    else if ((bmi >= 18.5) && (bmi < 23))
    {
        printf("รูปร่างปกติ \n");
    }
    else if ((bmi >= 23) && (bmi < 25))
    {
        printf("รูปร่างอ้วน \n");
    }
    else if ((bmi >= 25) && (bmi < 30))
    {
        printf("รูปร่างอ้วนระดับ 1 \n");
    }
    else if (bmi >= 30)
    {
        printf("รูปร่างอ้วนระดับ 2 \n");
    }
    return 0;
}
