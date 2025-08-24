#include <stdio.h>
int main(){
    int a=10;
    float b=3.14;
    void *ptr;              //void pointer


    ptr=&a;
    printf("value of a=%d\n" ,*(int *)ptr);
    ptr=&b;

    printf("value of b =%f",*(float *)ptr);
    return 0;

}
