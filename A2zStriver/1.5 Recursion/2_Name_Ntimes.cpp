#include<bits/stdc++.h>
using namespace std;

void print(int i,int n,string name){
     if(i>n) return;
    cout<<name<<endl;
    print(i+1,n,name);

}

int main(){
    int n;
    cin>>n;
    string name;
    cin>>name;
    print(1,n, name);
    return 0;
}