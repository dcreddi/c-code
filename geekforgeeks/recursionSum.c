#include<stdio.h>

long long sum(int n){
    if (n == 0){
        return 0;
    }

    return n + sum(n - 1);
}

int main(){
    long long x;
    printf("enter int to get sum adding upto zero: ");
    scanf("%lld",&x);
    printf("sum if %lld",sum(x));
}
