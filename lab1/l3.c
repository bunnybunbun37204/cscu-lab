/*
จงเขียนโปรแกรมที่รับชื่อและอายุจากผู้ใช้ แล้วคํานวณปีเกิดของผู้ใช้และแสดงผลลัพธ์ดังตัวอย่างข้างล่างนี้
ตัวอย่างการทํางาน
Name, age: Somsak 19 
Somsak's year of birth is 2544.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    const int CURRENT_YEAR = 2565;
    
    char buffer[4096];
    printf("Enter name, age : ");
    scanf(" %100[^\n]", buffer);
    char *string, *name, *age;
    string = (char*)malloc(strlen(buffer) + 1);
    strcpy(string, buffer);
    char *token = strtok(string, " ");
    
    int cout = 0;
    while(token != NULL) 
    {
        if (cout == 0) 
        {
            name = (char*)malloc(strlen(string));
            strcpy(name, token);
        }
        else
        {
            age = (char*)malloc(strlen(string));
            strcpy(age, token);
        }
        token = strtok(NULL, " ");
        cout++;
    }
    int year = CURRENT_YEAR - atoi(age);

    printf("%s's year of birth %d\n", name, year);

    free(string);
    free(name);
    free(age);

    return 0;
}