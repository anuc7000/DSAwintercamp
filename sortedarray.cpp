#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    //cout<<"Enter x: ";
    //int x;
    //cin>>x;
     for(int i=1;i<6;i++){
        if(v[i]>=v[i-1]){
            cout<<"Sorted array"<<endl;
            break;
        }
        else{
            cout<<"Not a sorted array"<<endl;
            break;
        }
     }
return 0;
}
