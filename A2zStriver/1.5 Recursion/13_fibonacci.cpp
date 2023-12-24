#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n<=1){
        return n;
    }
    int last= fibonacci(n-1);
    int slast =fibonacci(n-2);
    return last+slast;
}
int fibonacciusingloops(int n){
    int a=0;
    int b=1;
    int sum=0;
    if(n==0) return a;
    if(n==1) return b;
    for (int i = 2; i <= n; i++)
    {
        sum = a+b;
        a=b;
        b=sum;
    }
    return sum;
    
}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n)<<endl;
    cout<<fibonacciusingloops(n);
}