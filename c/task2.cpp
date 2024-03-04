#include <stdio.h>

float crystalTienDien(int sokWh) {
    if (sokWh <= 50) {
        return sokWh * 500.0;
    } else if (sokWh <= 100) {
        return 50 * 500.0 + (sokWh - 50) * 700.0;
    } else {
        return 50 * 500.0 + 50 * 700.0 + (sokWh - 100) * 900.0;
    }
}

int main() {
    int a = 30;
    int b = 80;
    int c = 120;

    printf("Electricity bill for %d kWh: %.0f VND\n", a, crystalTienDien(a));
    printf("Electricity bill for %d kWh: %.0f VND\n", b, crystalTienDien(b));
    printf("Electricity bill for %d kWh: %.0f VND\n", c, crystalTienDien(c));

    return 0;
}

