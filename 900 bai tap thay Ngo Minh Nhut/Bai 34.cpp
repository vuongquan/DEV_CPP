#include <stdio.h>
#include <math.h>

void notifications();
void input(int *n);
float perform(int n);
int main()
{
    int flag = 1;
    do
    {
        int n;
        notifications();
        input(&n);
        perform(n);
        printf("\n\t\t\tNhap 0 de thoat. Nhap bat ky de tiep tuc [_]\b\b");
        scanf("%d", &flag);
    } while (flag != 0);
    return 0;
}
void notifications()
{
    printf("\n\t\t\tTINH sqrt(n+sqrt(n-1 + sqrt( n-2 +... + sqrt(2 + sqrt(1)) co n dau sqrt");
}
void input(int *n)
{
    do
    {
        printf("\nNhap n: \a");
        scanf("%d", &*n);
        if (n < 0)   printf("\n\t\t\t>>PHAI NHAP n > 0 . NHAP LAI!");
    } while (*n < 0);
}
float perform(int n)
{
    int i;
    float S = 0;
    for (i = 1; i <= n; i++)
    {
        S = sqrt(i + S);
    }
    printf("\n [KET QUA] Sn = %\n", S);
    return S;
}
