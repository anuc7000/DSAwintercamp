#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr) {
    int max=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
        return max;
    }
    int main()
    {
        vector<int> arr={2, 3, 34, 56, 56};
        cout<<largestElement(arr)<<endl;
        return 0;
    }