#include <iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    // cout<<"Enter the number : ";
    // cin>>a;
    // cout<<"The number on the position "<<a<<" in fibonacci series is : "<<fib(a);

    cout<<"Enter the number of terms you want to display in fibonacci series : ";
    cin>>a;
    cout<<"The fibonacci series is as follows : ";
    for(int i = 0; i < a; i++){
        cout<<fib(i)<<" ";
    } 

    return 0;
}
