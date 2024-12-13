#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of row and column :"<<endl; 
    
    cin>>n>>m;
    cout<<"Enter the element :"<<endl; 
    int array[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>array[i][j];
        }
    }
     
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<array[i][j]<<" ";

        }cout<<endl;
    }

    }