/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void add(int c, int d){
    int sum=0;
    sum=c+d;
    printf("sum of 2 numbers=%d\n",sum);

}
void sub(int c, int d){
    int diff=0;
    diff=c-d;
    printf("difference of 2 numbers=%d\n",diff);
}
void mul(int c, int d){
    int prod=0;
    prod=c*d;
    printf("product of 2 numbers=%d\n",prod);
}
void divide(int c, int d){
    int res=0;
    res=c/d;
    printf("quotient of 2 numbers=%d",res);
}
    int main(){
        add(20,60);
        sub(10,20);
        mul(3,5);
        divide(55,5);
        return 0;
    }