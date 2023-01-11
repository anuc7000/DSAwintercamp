#include<iostream>
using namespace std;

int maximum(int a, int b);
int main(){
    int a, b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    int c= maximum(a, b);
    cout<<"the max no is: "<<c<<endl;
}
int maximum(int x, int y){
    if(x>y){
        return x;
    }
    else
    return y;
}