#include <stdio.h>
int sum(int a, int b){
    int sum=(a+b);
    return sum;
}
int sub(int a, int b){
    int sub=(a-b);
    return sub;
}
int mul(int a, int b){
    int mul=(a*b);
    return mul;
}
int div(int a, int b){
    int div=(a/b);
    return div;
}
int main(){
    int a,b,sum_res,sub_res,mul_res,div_res,num;
    printf("Enter the first number : \n");
    scanf("%d", &a);
    printf("Enter the second number : \n");
    scanf("%d", &b);
    printf("Enter the operation to be executed : \n1)addition \n2)subtraction \n3)multiplication \n4)division \n");
    scanf("%d", &num);
if(num==1){
    sum_res=sum(a,b);
    printf("sum of %d \n",sum_res);

}
else if (num==2){
    sub_res=sub(a,b);
    printf("diff of %d \n",sub_res);
}
else if(num==3){
    mul_res=mul(a,b);
    printf("product of %d \n", mul_res);
    
}
else if(num==4){
    div_res=div(a,b);
    printf("quotient of %d \n", div_res);
}
else{
    printf("invalid");
}


return 0;
}
