#include <stdio.h>
void printBin(int n){
    int i,mask;
    for(i=31;i>=0;i--){
        mask=1<<i;
        if(n&mask)
            printf("1");
        else
            printf("0");
        

        }
        printf("\n");
    }
    int main(){
        int a;
        printf("Enter a number:");
        scanf("%d",&a);
        printBin(a);
        return 0;
    }