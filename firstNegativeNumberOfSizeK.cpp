#include<iostream>
using namespace std;
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=3;
    int ans[n-k+1];
    int idx=-1;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            idx=i;
            break;
        }
    }
    if(idx!=-1){
        ans[0]=arr[idx];
    }
    else{
        ans[0]=0;
    }
    int i=1;
    int j=k; 
    while(j<n){ 
        if(idx>=i) ans[i]=arr[idx]; 
        else {
            idx=-1;
            for(int x=i;x<=j;x++){
                if(arr[x]<0) { 
                    idx=x;
                }
            } 
            if(idx!=-1) ans[i]=arr[idx];
            else ans[i]=0;
        }
        i++;
        j++;
    }
    for(int i=0;i<(n-k+1);i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}