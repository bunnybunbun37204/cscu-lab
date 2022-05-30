/*
จงเขียนโปรแกรมที่รับชื่อและนามสกุลจากผู้ใช้ แล้วนํามาสร้างเป็นสตริงใหม่ 2 สตริง โดย
- สตริงหนึ่งเป็นชื่อต่อด้วยนามสกุลและมีช่องว่าง (blank) คั่นกลาง
- อีกสตริงหนึ่งเป็นนามสกุลต่อด้วยชื่อและมี , ต่อด้วยช่องว่างคั่นกลาง
แล้วแสดงผลลัพธ์ดังตัวอย่างข้างล่างนี้
ตัวอย่างการทํางาน
Firstname Lastname: Somsak Saksri 
Hello! Somsak Saksri
Saksri, Somsak
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // Create Buffer to store input
    char buffer[4096];
    printf("Enter name : ");
    scanf(" %100[^\n]", buffer);

    // Create Dynamic String
    char *name = (char*)malloc(strlen(buffer) + 1);
    char *firstName, *lastName;

    // Copy Buffer to name
    strcpy(name, buffer);
    printf("Hello! %s \n", name);

    // Split name to fitstNamr and lastName
    char *token = strtok(name, " ");
    int cout = 0;
    while(token != NULL) 
    {
        if (cout == 0) 
        {
            firstName = (char*)malloc(strlen(name));
            strcpy(firstName, token);
        }
        else
        {
            lastName = (char*)malloc(strlen(name));
            strcpy(lastName, token);
        }
        token = strtok(NULL, " ");
        cout++;
    }

    printf("%s, %s\n", lastName, firstName);

    // Free memory
    free(name);
    free(firstName);
    free(lastName);

    return 0;
}
