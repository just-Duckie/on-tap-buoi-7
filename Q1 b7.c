//Q1

#include<stdio.h>
#define PI 3.14159

double s(double r) {
    if (r <= 0) {
        return -1;
    }
    return PI * r * r;
}

int main() {
    double r;
    printf("enter radius: ");
    scanf("%lf", &r);
    double area = s(r);
    if (area == -1) {
        printf("Invalid radius\n");
    } else {
        printf("Area of circle: %2.f\n", area);
    }
    return 0;
}
