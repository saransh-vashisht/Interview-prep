#include<bits/stdc++.h>
using namespace std;
#define n 100
class Stack{
    int * arr;
    int top;
    public:
        Stack(){
            arr= new int[n];
            top=-1;
        }

        void push(int x){
            if((n-top)>1){
                top++;
                arr[top]=x;
            }
            else cout<<"Stack Overflow"<<endl;
        }

        void pop(){
            if(top>=0){
                top--;
            }
            else cout<<"Stack Underflow"<<endl;
        }

        int peek(){
            if(top>=0) return arr[top]; 
            else cout<<"No element in stack"<<endl;

        }

        bool isempty(){
            if(top==-1) return true;
            else return false;
        }
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();

    cout<<st.isempty()<<endl;

    return 0;
}