#include<iostream>
using namespace std;
int subarray_sum1(int arr[], int n){
    int largest_sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<=i;j++){
            int sum1=0;
            for(int k=i;k<=j;k++){
                sum1+=arr[k];
                
            }largest_sum=max(largest_sum,sum1);
        }
    } return largest_sum;
}
int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n=sizeof(arr)/sizeof(int);
    cout<<subarray_sum1(arr,n)<<endl;
    return 0;
}