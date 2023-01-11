#include<bits/stdc++.h>
using namespace std;

// Doubts:-
// int max globally declare krne se error kyu aa rha h ??
// why need to create a new variable int k=arr[largestElementindex]; ??
// why not directly check if(arr[i]==arr[largestElementindex]) ??


    int maximumIndex=-1;

    int maxIndex(int arr[], int n)
    {
       int max1=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max1)
            {
                max1=arr[i];
                maximumIndex=i;
                //cout<<"I am here"<<endl;
            }
        }
        //cout<<max1<<" "<<maximumIndex<<endl;
        return maximumIndex;
    }
int main(){
     int arr[]={3, 2, 6, 4, 1, 5, 6};
     int n=7;
     int largestElementindex=maxIndex(arr, n);
     cout<<largestElementindex<<"  "<<arr[largestElementindex]<<endl;
     //k(variable) is storing largest element value
     //int k=arr[largestElementindex];
     //use when there are duplicates in the array
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<" abcd "<<arr[largestElementindex]<<endl;
        if(arr[i]==arr[largestElementindex])
        {
            arr[i]=-1;
            cout<<"I am here "<<i<<endl;
        }
     }
     //arr[largestElementindex]=-1; use when there are no duplicates in the array
     //for(int i=0;i<n;i++) 
     //{
        //cout<<arr[i]<<"a"<<" ";
        //}
     int secondLargestindex=maxIndex(arr, n);

     cout<<arr[secondLargestindex]<<endl;
     return 0;
}