#include <stdio.h>

int main() {
    int start, end, consumption;
    long totalCost;

    printf("Nhap chi so cu: ");
    scanf("%d", &start);
    printf("Nhap chi so moi: ");
    scanf("%d", &end);

    consumption = end - start;

    if (consumption <= 50) {
        totalCost = consumption * 10000;
    } else if (consumption <= 100) {
        totalCost = 50 * 10000 + (consumption - 50) * 15000;
    } else if (consumption <= 150) {
        totalCost = 50 * 10000 + 50 * 15000 + (consumption - 100) * 20000;
    } else if (consumption <= 200) {
        totalCost = 50 * 10000 + 50 * 15000 + 50 * 20000 + (consumption - 150) * 25000;
    } else {
        totalCost = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (consumption - 200) * 30000;
    }

    printf("Tien dien phai tra: %ld VND\n", totalCost);

    return 0;
}

