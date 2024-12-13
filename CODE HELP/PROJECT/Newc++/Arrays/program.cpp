//Calculate the sum of the element in the given array.

/*#include<iostream>
using namespace std;

int main(){
   int array[]={3,4,2,5};
    int size=sizeof(array)/sizeof(array[0]);


   int sum=0;
   for(int i=0; i<size;i++){
    sum+=array[i];

   }
   cout<<sum<<endl;

    
    return 0;

}
------------------------------------------------------------------------------------------------*/


//find the maximum value out of all the element in the array.

#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,7,5,6};

    int max=array[0];

    for(int i=1; i<6; i++){
        if(array[i]>max){
            max=array[i];
        }
        
    }
    cout<<max<<endl;
    return 0;
}
