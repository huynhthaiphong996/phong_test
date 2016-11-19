#include <stdio.h>
void main()
{
    int n,i,giaithua=1;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        giaithua *=i;
    }
    printf("%d!=%d",n,giaithua);
}
