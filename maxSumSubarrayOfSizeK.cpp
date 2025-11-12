#include<iostream>
using namespace std;    
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0; 
    for(int i=0;i<k;i++){
        sum+=arr[i];
    } 
    int maxSum=sum;
    int idx=-1; 
    int i=1;
    int j=k;  
    while(j<n){
        sum=sum+arr[j]-arr[i-1];
        if(sum>maxSum){
            maxSum=sum;
            idx=i;
        } 
        i++;
        j++;    
    }
    cout<<maxSum<<endl<<"Starting index: "<<idx<<endl;
}