#include  <stdio.h>

int sum_no(int x)
{
    if (x > 0){
    x = x + sum_no(x-1);
    };
    return x;
    
}
    
int main(void)
{
    int p;
    p = sum_no(0);
    printf("%d\n", p);
}
