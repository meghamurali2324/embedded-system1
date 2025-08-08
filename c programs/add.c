//Can you add all the functions to this file? the function definition and function call of all the 4 functions must be in a single file.
#include <stdio.h>
void add(int c, int d){  //function declaration
    int sum=0;            //function definition
    sum=c+d;
    printf("sum of 2 numbers=%d",sum);

}
void sub(int c, int d){
    int diff=0;
    diff=c-d;
    printf("sum of 2 numbers=%d",diff);
}
void mul(int c, int d){
    int prod=0;
    prod=c*d;
    printf("sum of 2 numbers=%d",prod);
}
void div(int c, int d){
    int res=0;
    res=c+d;
    printf("sum of 2 numbers=%d",res);
}
    int main(){
        add(20,60);                //function call
        sub(10,20);
        mul(3,5);
        div(55,5);
        return 0;
    }
