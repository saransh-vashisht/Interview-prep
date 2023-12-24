#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(int i , string &s){
    if(i>=s.size()) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return checkPalindrome(i+1,s);
}
int main(){
    string s= "madsm";
    if(checkPalindrome(0,s)){
        cout<<"Given String is a palindrome"<<endl;

    }
    else cout<<"Given string is not a palindrome"<<endl;
    return 0;
}