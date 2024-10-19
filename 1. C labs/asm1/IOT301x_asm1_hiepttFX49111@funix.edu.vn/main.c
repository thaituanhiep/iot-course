#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool kiemtra_tamgiac(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    int area = abs(Ax*(By - Cy) + Bx*(Cy - Ay) + Cx*(Ay - By));
    return area != 0;
}

double calculateDistance(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Ham chuyen tu radian sang do
double radToDegree(double radian) {
    return radian * (180.0 / M_PI);
}

void xet_tamgiac(float AB, float BC, float CA, float A, float B, float C) {
    bool canA = (AB == CA);
    bool canB = (AB == BC);
    bool canC = (BC == CA);

    bool vuongTuA = (A >= 90);
    bool vuongTuB = (B >= 90);
    bool vuongTuC = (C >= 90);

    printf("\nABC la tam giac ");
    if(vuongTuA) {
        if (A > 90) {
            printf("tu ");
        } else {
            printf("vuong ");
        }

        if (canA) {
            printf("va can ");
        }
        printf("tai dinh A.");
    } else if(vuongTuB) {
        if (B > 90) {
            printf("tu ");
        } else {
            printf("vuong ");
        }

        if (canB) {
            printf("va can ");
        }
        printf("tai dinh B.");
    } else if(vuongTuC) {
        if (C > 90) {
            printf("tu ");
        } else {
            printf("vuong ");
        }

        if (canC) {
            printf("va can ");
        }
        printf("tai dinh C.");
    } else {
        printf("nhon");
        if (canA) {
            printf(" va can tai dinh A.");
        } else if (canB) {
            printf(" va can tai dinh B.");
        } else if (canC) {
            printf(" va can tai dinh C.");
        } else {
            printf(".");
        }
    }
}

float dientich_tamgiac(float AB, float BC, float CA) {
    float p = (AB + BC + CA) / 2;
    return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}

void duongcao_tamgiac(float dientich, float AB, float BC, float CA) {
    float hA = 2 * dientich / BC;
    float hB = 2 * dientich / CA;
    float hC = 2 * dientich / AB;
    printf("\nDo dai duong cao tu dinh A: %f", hA);
    printf("\nDo dai duong cao tu dinh B: %f", hB);
    printf("\nDo dai duong cao tu dinh C: %f", hC);
}

void trungtuyen_tamgiac(float AB, float BC, float CA) {
    float m_A = 0.5 * sqrt(2 * (AB * AB + CA * CA) - BC * BC);
    float m_B = 0.5 * sqrt(2 * (AB * AB + BC * BC) - CA * CA);
    float m_C = 0.5 * sqrt(2 * (BC * BC + CA * CA) - AB * AB);

    printf("\nDo dai trung tuyen tu dinh A: %.2f\n", m_A);
    printf("Do dai trung tuyen tu dinh B: %.2f\n", m_B);
    printf("Do dai trung tuyen tu dinh C: %.2f\n", m_C);
}

void tam_tamgiac(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    float xG = (Ax + Bx + Cx) / 3;
    float yG = (Ay + By + Cy) / 3;

    printf("\nToa do trong tam: [%.2f, %.2f]\n", xG, yG);
}

// Ham tinh cac goc trong tam giac su dung dinh ly cosin
void goccanh_tamgiac(float Ax, float Ay, float Bx, float By, float Cx, float Cy) {
    // Tinh do dai cac canh
    double a = calculateDistance(Bx, By, Cx, Cy);
    double b = calculateDistance(Ax, Ay, Cx, Cy);
    double c = calculateDistance(Ax, Ay, Bx, By);

    printf("\n");
    printf("Chieu dai canh AB: %.2f\n", c);
    printf("Chieu dai canh BC: %.2f\n", a);
    printf("Chieu dai canh CA: %.2f\n", b);

    // Su dung dinh ly cosin tinh cac goc
    double alpha = acos((b*b + c*c - a*a) / (2*b*c));
    double beta = acos((a*a + c*c - b*b) / (2*a*c));
    double gamma = acos((a*a + b*b - c*c) / (2*a*b));

    // Chuyen radian sang do
    alpha = radToDegree(alpha);
    beta = radToDegree(beta);
    gamma = radToDegree(gamma);

    // In ra ket qua
    printf("\n");
    printf("Goc tai diem A: %.2f \n", alpha);
    printf("Goc tai diem B: %.2f \n", beta);
    printf("Goc tai diem C: %.2f \n", gamma);

    // Xet tam giac
    xet_tamgiac(c, a, b, alpha, beta, gamma);

    // Dien tich tam giac
    float area = dientich_tamgiac(c, a, b);
    printf("\nDien tich tam giac ABC la: %.2f", area);

    // Duong cao
    duongcao_tamgiac(area, c, a, b);
    trungtuyen_tamgiac(c, a, b);
}

int main()
{
    float Ax, Ay, Bx, By, Cx, Cy;
    printf("\nNhap toa do diem A: \n");
    printf("Ax: ");
    scanf("%f", &Ax);
    printf("\nAy: ");
    scanf("%f", &Ay);

    printf("\nNhap toa do diem B: \n");
    printf("Bx: ");
    scanf("%f", &Bx);
    printf("\nBy: ");
    scanf("%f", &By);

    printf("\nNhap toa do diem C: \n");
    printf("Cx: ");
    scanf("%f", &Cx);
    printf("\nCy: ");
    scanf("%f", &Cy);

    if (kiemtra_tamgiac(Ax, Ay, Bx, By, Cx, Cy)) {
        printf("Toa do 3 diem nhap vao tao thanh mot tam giac.");

        printf("\n");
        goccanh_tamgiac(Ax, Ay, Bx, By, Cx, Cy);
        tam_tamgiac(Ax, Ay, Bx, By, Cx, Cy);
    } else {
        printf("Toa do 3 diem nhap vao khong tao thanh mot tam giac.");
    }

    return 0;
}
