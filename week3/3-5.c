#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int x1, x2, x3, x4;
    int result;
    int result1, result2, result3, result4;

    x1 = 0xff000000;
    x2 = 0x00ff0000;
    x3 = 0x0000ff00;
    x4 = 0x000000ff;

    result1 = x1&n;
    result2 = x2&n;
    result3 = x3&n;
    result4 = x4&n;

    result1 >>= 16;
    result2 <<= 8;
    result3 >>= 8;
    result4 <<= 16;

    
    result = result1|result2|result3|result4;

    printf("%d(0x%08x)\n",n,n);
    printf("%d(0x%08x)",result,result);

    return 0;
}