#include <stdio.h>
void main()
{
    int a,b,c;
    printf("ENTER A NUMBER FOR A :");
    scanf ("%d",&a);
    printf ("ENTER A NUMBER FOR B :");
    scanf ("%d",&b);
    printf ("ENTER A NUMBER FOR C :");
    scanf("%d",&c);
    if ((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        printf ("its valid triangle ");
    }
    else
    {
        printf ("its not a valid triangle ");
    }
}