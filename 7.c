#include <stdio.h>
void main()
{
    int n;
    printf("Nhap vao 1 so:");
    scanf("%d",&n);
    if(n==0) printf("\nKhong chan khong le.");
    else if(n%2 == 1) printf("\n%d la so le.",n);
    else printf("%d khong phai so le.",n);
}
