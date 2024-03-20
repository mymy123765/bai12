#include <stdio.h>
#include <math.h>

int laSoChinhPhuong(int num) {
    if (num < 0) 
        return 0;
    int squareRoot = sqrt(num);
    return (squareRoot * squareRoot == num);
}

int demSoChinhPhuong(int n) {
    int count = 0;
    for (int i = 1; i < n; i++) {
        if (laSoChinhPhuong(i)) 
            count++;
    }
    return count;
}

int main() {
    int n;
    printf("Nhập vào một số nguyên dương n: ");
    scanf("%d", &n);

    printf("Có %d số chính phương nhỏ hơn %d là: ", demSoChinhPhuong(n), n);
    for (int i = 1; i < n; i++) {
        if (laSoChinhPhuong(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
