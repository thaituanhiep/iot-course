#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool kiemtra_tamgiac(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    int area = abs(Ax*(By - Cy) + Bx*(Cy - Ay) + Cx*(Ay - By));
    return area != 0;
}

double calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Hàm chuyển radian sang độ
double radToDegree(double radian) {
    return radian * (180.0 / M_PI);
}

// Hàm tính các góc trong tam giác sử dụng định lý cosin
void calculateAngles(int Ax, int Ay, int Bx, int By, int Cx, int Cy) {
    // Tính độ dài các cạnh
    double a = calculateDistance(Bx, By, Cx, Cy);  // Cạnh BC
    double b = calculateDistance(Ax, Ay, Cx, Cy);  // Cạnh CA
    double c = calculateDistance(Ax, Ay, Bx, By);  // Cạnh AB

    // Sử dụng định lý cosin để tính các góc
    double alpha = acos((b*b + c*c - a*a) / (2*b*c));  // Góc tại A (đối diện cạnh a)
    double beta = acos((a*a + c*c - b*b) / (2*a*c));   // Góc tại B (đối diện cạnh b)
    double gamma = acos((a*a + b*b - c*c) / (2*a*b));  // Góc tại C (đối diện cạnh c)

    // Chuyển radian sang độ
    alpha = radToDegree(alpha);
    beta = radToDegree(beta);
    gamma = radToDegree(gamma);

    // In ra kết quả
    printf("Góc tại điểm A: %.2f độ\n", alpha);
    printf("Góc tại điểm B: %.2f độ\n", beta);
    printf("Góc tại điểm C: %.2f độ\n", gamma);
}

int main()
{
    float Ax, Ay, Bx, By, Cx, Cy;
    printf("Nhập tọa độ điểm A (Ax, Ay): ");
    scanf("%f %f", &Ax, &Ay);

    printf("Nhập tọa độ điểm 2 (Bx, By): ");
    scanf("%f %f", &Bx, &By);

    printf("Nhập tọa độ điểm 3 (Cx, Cy): ");
    scanf("%f %f", &Cx, &Cy);

    if (kiemtra_tamgiac(Ax, Ay, Bx, By, Cx, Cy)) {
        printf("3 diem tao thanh tam giac.");
    } else {
        printf("3 diem khong tao thanh tam giac.");
    }

    printf("\n");
    calculateAngles(Ax, Ay, Bx, By, Cx, Cy);

    return 0;
}
