#include<bits/stdc++.h>
using namespace std;

int main() {
       vector<int> v(6);
       //int n=v.size();

       //cout<<"Enter the no. -"<<endl;

    for(int i=0;i<6;i++){
        cin>>v[i];
       }
    cout<<"Enter x: "<<endl;
    int x;
    cin>>x;
    int occ=0;
       for(int i=0;i<6;i++){
            if(v[i]==x){
                occ++;
            }
       }
    cout<<occ<<endl;
    return 0;
}