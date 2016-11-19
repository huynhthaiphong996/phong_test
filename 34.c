#include <stdio.h>
#include <math.h>
void main()
{
    int chon;
    while(1)
    {
        printf("\n1.CV DT tam giac\n2.CV DT hinh vuong\n3.CV DT HCN\n4.CV DT hinh tron\n5.Ket thuc");
        printf("\nChon chuc nang:");
        scanf("%d",&chon);
        switch(chon)
        {
        case 1:
            {tamgiac();break;}
        case 2:
            {hinhvuong();break;}
        case 3:
            {hinhchunhat();break;}
        case 4:
            {hinhtron();break;}
        case 5:return;
        }
    }
}
void tamgiac()
{
    int a,b,c;
    float dt,p;
    printf("\nNhap canh 1:");
    scanf("%d",&a);
    printf("\nNhap canh 2:");
    scanf("%d",&b);
    printf("\nNhap canh 3:");
    scanf("%d",&c);
    p = (float)(a+b+c)/2;
    dt = (float) sqrt(p*(p-a)*(p-b)*(p-c));
    if(a+b>c && a+c>b && b+c >a)
    {
        printf("\nCV = %d\nDT = %0.3f",a+b+c,dt);
    }
    else printf("\nkhong phai canh cua tam giac");
}

void hinhvuong()
{
    int a;
    printf("\nNhap canh:");
    scanf("%d",&a);
    printf("\nDT = %d\nCV = %d",a*a,a*4);
}
void hinhchunhat()
{
    int cd,cr;
    printf("\nNhap chieu dai:");
    scanf("%d",&cd);
    printf("\nNhap chieu rong:");
    scanf("%d",&cr);
    printf("\nDT = %d\nCV = %d",cr*cd,(cr+cd)*2);
}
void hinhtron()
{
    const float pi = 3.14;
    float bk;
    printf("\nNhap ban kinh:");
    scanf("%f",&bk);
    printf("\nDT = %0.2f\nCV = %0.2f",pi*bk*bk,2*pi*bk);
}
