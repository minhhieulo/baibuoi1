#include <stdio.h>
int main()
{
    int a, b;
    float x;
    printf("nhap a:");
    scanf("%d",&a);
    printf("nhap b:");
    scanf("%d",&b);
    x = (float)-b/a;
    printf("Nghiem cua phuong trinh %dx + %d = 0 là: %f", a, b, x);
}
