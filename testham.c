#include <stdio.h>
#include <math.h>
void XuatC (char x, int n)
{    int i;
     for (i = 1; i <= n; i++) putchar(x);
}
void main()
{
    int h, i;
    printf("Nhap chieu cao cua tam giac muon xuat: "); 
    scanf("%d", &h);
    for (i = 1; i <= h; i++) {
        XuatC('', h-i); //gọi hàm thực thi
        XuatC('*', 2*i-1); //gọi hàm thực thi
        XuatC('\n', 1); //gọi hàm thực thi
    }   
    return 0;
}