#include <stdio.h>
int add(int a, int b);

int main()
{
    int ret_sum =0;

    ret_sum = add(40,57);
    printf("sum of 2 numbers=%d",ret_sum);
}
    int add (int a, int b)
    {
        int sum=0;
        sum=a+b;
        return sum;
    }
