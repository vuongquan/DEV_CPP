#include <stdio.h>
int main()
{
    int n,flag;
    flag=1;
    printf("Tinh S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3....N");
    do
	{
		do
	    {
	    	printf("\nNhap n:");
	    	scanf("%d",&n);
	    	if(n < 0) printf("\nPhai nhap n>0,Nhap lai!:");
		}while(n<0);
		int a , S, P;
		a=1;
		S=0;
		P=1;
		while(a<=n)
		{
			P=P*a;
			S=S+P;
			printf("\n\tS(%d)=%d",a,S);
			a++;
		}
	printf("\nNhap o de thoat, Nhap so bat ky de tiep tuc:[]\b\b");
	scanf("%d",&flag);
	}while(flag!=0);
	return 0 ;
}
