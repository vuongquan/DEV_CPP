#include <stdio.h>
#include <math.h>
int main()
{
	int flag=1;
	do
	{
		printf("Tinh S(n)=x+x^2+...+x^n");
		int x;
		do
		{
			printf("\nNhap x:\a");
			scanf("%d", &x);
			if (x < 0) printf("\nPhai nhap n > 0,Nhap lai!");
		} while (x < 0);
		int n,S=0;
		for (n = 1; n <= x; n++)
		{
			S += pow(x, n);
			printf("\nS(%d)=%d", n, S);
		}
	printf("\nKet qua\tS(n)=%d", S);
	printf("\nNhap 0 de thoat, Nhap ky tu bat ky de tiep tuc[_]\a\b\b");
	scanf("%d",&flag);
	}while (flag!=0);
	return 0;
}
