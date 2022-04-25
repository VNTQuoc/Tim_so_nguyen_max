#include <stdio.h>
//Tìm số nguyên lớn nhất 

int main()
{
    int a, b, c;
    printf("Moi ban nhap so a: ");
    scanf("%d", &a);

    printf("Moi ban nhap so b: ");
    scanf("%d", &b);

    printf("Moi ban nhap so c: ");
    scanf("%d", &c);

    if(a > b && a > c)
    {
        printf("\n%d la so lon nhat", a);
    }
    else if(b > c && b > a)
    {
        printf("\n%d la so lon nhat", b);
    }
    else if(c > b && c > a)
    {
        printf("\n%d la so lon nhat", c);
    }
    else
    {
        printf("\nCa 3 so deu bang nhau"); //Thêm trường hợp cả 3 số đếu bằng nhau
    }


    return 0;
    
}