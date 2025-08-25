#include <stdio.h>

int main() {
    int x, y;

    // รับค่าตัวเลขสองจำนวนจากผู้ใช้
    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter value for y: ");
    scanf("%d", &y);

    // เปรียบเทียบค่า x กับ y
    if (x > y) {
        // กรณี x มากกว่า y
        printf("x is greater than y\n");
    } else if (x < y) {
        // กรณี x น้อยกว่า y
        printf("x is less than y\n");
    } else {
        // กรณี x เท่ากับ y
        printf("x is equal to y\n");
    }

    return 0;
}

/*
โปรแกรมนี้รับค่าตัวเลขสองจำนวนจากผู้ใช้ผ่านทางแป้นพิมพ์
จากนั้นเปรียบเทียบค่าระหว่าง x และ y
ถ้า x มากกว่า y จะแสดงข้อความว่า x is greater than y
ถ้า x น้อยกว่า y จะแสดงข้อความว่า x is less than y
แต่ถ้าค่าเท่ากันจะแสดงข้อความว่า x is equal to y
*/