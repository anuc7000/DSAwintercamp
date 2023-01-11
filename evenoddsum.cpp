#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={2, 1, 3, 1, 6, 7};
    int s1=0;
    int s2=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            s1+=arr[i];
        }
        else{
            s2+=arr[i];
        }
    }
    cout<<s1-s2<<endl;
    return 0;
}