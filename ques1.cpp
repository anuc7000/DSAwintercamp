#include<bits/stdc++.h>
using namespace std;
int main() {
    int arr[]={3, 4, 5, 1, 7};
    int targetSum= 7;
    //int count=0;
    int a, k=-1;
    for(int i=0; i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]+arr[j]==targetSum){
                //count++;
                a=i;
                k=j;
            }
        }
    }
    cout<<"("<<a<<","<<k<<")"<<endl;
    return 0;
}