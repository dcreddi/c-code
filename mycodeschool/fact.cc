#include<iostream>
#include<cstdio>
using namespace std;

int fact(int n){
    if( n== 0){
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    cout << "result " << fact(n) ;
}
