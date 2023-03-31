#include <stdio.h>
#include <string.h>

union measurement {
    float meters;
    int inches;
};

int main() {
    union measurement m;
    char unit[10];
    float inch_to_meter = 0.0254;
    printf("Enter value and unit (inches, feet, yards, or meters): ");
    scanf("%f %s", &m.meters, unit);
    if (strcmp(unit, "inches") == 0) {
        m.inches = (int)m.meters;
    } else if (strcmp(unit, "feet") == 0) {
        m.inches = (int)(m.meters * 12);
    } else if (strcmp(unit, "yards") == 0) {
        m.inches = (int)(m.meters * 36);
    } else if (strcmp(unit, "meters") == 0) {
        m.inches = (int)(m.meters / inch_to_meter);
    }
    printf("\n%.2f meters\n", m.meters);
    printf("%d inches\n", m.inches);
    printf("%.2f feet\n", (float)m.inches / 12);
    printf("%.2f yards\n", (float)m.inches / 36);
    printf("%.2f meters\n", (float)m.inches * inch_to_meter);
    return 0;
}

