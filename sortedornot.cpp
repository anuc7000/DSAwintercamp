#include<bits/stdc++.h>
using namespace std;
int main(){
      int arr[]={3, 3, 4, 5, 6, 7};
      bool sortedflag=true;
      for(int i=1;i<6;i++){
        if(arr[i]<arr[i-1]){
            sortedflag=false;
        }
      }
      cout<<sortedflag<<endl;
      return 0;
}