#include<bits/stdc++.h>
using namespace std;

//Three ways to solve this problem are :- 
// 1. With 2 loops when there are no duplicates in the array
// 2. Taking care of the duplicates with 3 loops
// 3. With 2 loops and also taking care of the duplicates in the array

int maxIndex(int arr[], int n)
    {
    int max1=INT_MIN;
    int maximumIndex=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max1)
            {
                max1=arr[i];
                maximumIndex=i;
            }
        }
        return maximumIndex;
    }
int main()
{
    int arr[]={3, 2, 6, 4, 1, 5, 6};
    int n=7;
    int largestElementindex=maxIndex(arr, n);
    int maxEle=arr[largestElementindex];
    cout<<maxEle<<endl;
    int secondMax=INT_MIN;
    for(int i=0;i<n;i++){
               if(arr[i]>secondMax && arr[i]!=maxEle){
                secondMax=arr[i];
               }
    }
    cout<<secondMax<<endl;
    return 0;
}