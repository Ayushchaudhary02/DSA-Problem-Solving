#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter row of matrices :";
    cin>>m;
    cout<<"Enter column of matrices :";
    cin>>n;
    int arr[m][n];
    cout<<"Enter first matrix :";
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
   //transpose
   cout<<"tranpose matrix :"<<endl;
   for(int j=0;j<=n-1;j++){
    for(int i=0;i<=m-1;i++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<"Inverted matrix :"<<endl;
   for(int k=0;k<=n;k++){
        int i=0,j=m-1;
        while(i<=j){
            int temp=arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;
        }
   }
   for(int i=0;i<=m-1;i++){
        for(int j=i+1;j<=n-1;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
   }
    
}
