#include<bits/stdc++.h>
using namespace std;
int main() {
     int arr[]={2 ,3 , 4, 4, 5, 5, 6, 3, 2, 1, 1};
     for(int i=0;i<11;i++){
        for(int j=i+1;j<11;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[i]=arr[j]=-1;
            }
        }
     }
    for(int i=0;i<11;i++) 
    {
        if(arr[i]>0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}