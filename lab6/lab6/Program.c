#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[100];   // khai báo sau khi nhập n

    // Nhập dữ liệu cho mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &mang[i]);
    }

    float tong = 0;
    int count = 0;

    // Duyệt mảng, tìm số chia hết cho 3
    for (int i = 0; i < n; i++) {
        if (mang[i] % 3 == 0) {
            tong += mang[i];  // cộng vào tổng
            count++;          // tăng biến đếm
        }
    }

    if (count > 0) {
        float tb = tong / count;
        printf("Gia tri trung binh cac so chia het cho 3 = %.2f\n", tb);
    }
    else {
        printf("Khong co phan tu nao chia het cho 3!\n");
    }

    return 0;
}
