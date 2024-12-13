#include<iostream>
using namespace std;

int main(){

    //for loop
  
    int array[]={1,2,3,4};
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0; i<size; i++){
    cout<<array[i]<<endl;
    }

    //for each loop

    for(int ele:array){
        cout<<ele<<endl;
    }

    //while loop

    int i=0;
    while(i<size){
        cout<<array[i]<<endl;
        i++;
    }
        return 0;
}