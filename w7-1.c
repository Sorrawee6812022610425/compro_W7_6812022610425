#include <stdio.h>

int main() {
    float midterm, total;

    // รับคะแนนสอบ midterm จากผู้ใช้
    printf("Enter your midterm score: ");
    scanf("%f", &midterm);

    // ตรวจสอบเงื่อนไข ถ้าคะแนน >= 50 ให้เพิ่มคะแนนพิเศษ 5%
    if (midterm >= 50) {
        // คำนวณคะแนนรวมหลังเพิ่ม 5%
        total = midterm + (midterm * 0.05);
    } else {
        // คะแนนรวมเท่ากับคะแนนเดิม
        total = midterm;
    }

    // แสดงคะแนนรวมหลังเพิ่มคะแนนพิเศษ (ถ้ามี)
    printf("Total score after bonus: %.2f\n", total);

    // แสดงข้อความจบการประเมินผล
    printf("End of evaluation\n");

    return 0;
}