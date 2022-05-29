/*
จงเขียนโปรแกรมที่รับราคาสินค้าและค่าขนส่งจากผู้ใช้ แล้วคํานวณยอดรวมที่ลูกค้าต้องจ่าย แล้วแสดง
ผลลัพธ์ดังตัวอย่างข้างล่างนี้
ตัวอย่างการทํางาน
Price : 235.50
Shipping : 30
Total : 265.5 Baht (30.0 Baht shipping fee)
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float price = 0, shipping = 0;
    printf("Price : ");
    scanf("%f", &price);
    printf("Shipping : ");
    scanf("%f", &shipping);
    printf("%f Bath\n", price + shipping);
    return 0;
}
