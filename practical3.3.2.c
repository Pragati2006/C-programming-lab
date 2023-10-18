#include<stdio.h>
void main()
{
    int arear,areac,areas,peri1,peri2,peri3,l,b,r,s;
    int c;
    printf("1.area and perimeter of rectangle\n2.area and perimeter of square\n3.area and perimeter of circle\n enter your choice\n");
    scanf("%d",&c);
    switch(c)
    {
        case 1 :
        printf("enter the length and breadth=");
        scanf("%d%d",&l,&b);
        arear=l*b;
        peri1=2*l+2*b;
        printf("area of rectangle = %d",arear);
        printf("\nperimeter of rectangle = %d",peri1);
        break;
        case 2:
        printf("enter the side=");
        scanf("%d",&s);
        areas=s*s;
        peri2=4*s;
        printf("area of square = %d",areas);
        printf("\nperimeter of square = %d",peri2);
        break;
        case 3:
        printf("enter the radius=");
        scanf("%d",&r);
        areac=3.14*r*r;
        peri3=2*3.14*r;
        printf("area of circle = %d",areac);
        printf("\nperimeter of circle = %d",peri3);
        break;
    }
}
