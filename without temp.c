#include<stdio.h>
int main()
{
        int a ,b;
        printf("enter a and b \n");
        scanf("%d%d",&a,&b);
            a=a+b;
            b=a-b;
            a=a-b;
            printf("before swapping a=%d,b=%d\n",b,a);
            printf("after swapping a=%d,b=%d\n",a,b);
         return 0;   
}
