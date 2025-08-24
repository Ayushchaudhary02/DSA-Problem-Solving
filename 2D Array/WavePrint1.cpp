#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row of matrices :";
    cin>>m;
    cout<<"Enter column of matrices :";
    cin>>n;
    int arr[m][n];
    cout<<"Enter first matrix :"<<endl;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Original Matrix :"<<endl;
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int j=0;j<n;j++){
        if(j%2 == 0){
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }

        }
        else{
            for(int i=0;i<=m-1;i++){
                cout<<arr[i][j]<<" ";
            }
            
        }
         
    }
    
   }
    