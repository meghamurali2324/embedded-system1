/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
  int sum(int a, int b){
      int sum=a+b;
      return sum;
  }
    int sub(int a, int b){
      int sub=a-b;
      return sub;
  }
    int mul(int a, int b){
      int mul=a*b;
      return mul;
  }
    int div(int a, int b){
      int div=a/b;
      return div;
  }
  int main(){
      int a,b,sum_res,sub_res,mul_res,div_res;
      printf("Enter the first number : \n");
      scanf("%d", &a);
      printf("Enter the second number : \n");
      scanf("%d", &b);
      sum_res=sum(a,b);
      sub_res=sub(a,b);
      mul_res=mul(a,b);
      div_res=div(a,b);
      printf("sum of %d \n",sum_res);
      printf("sum of %d \n",sub_res );
      printf("sum of %d \n",mul_res );
      printf("sum of %d \n",div_res );
      return 0;
      
  }