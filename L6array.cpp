/*ARRAYS*/
#include<iostream>
using namespace std;
int main(){
    //initialising an array
    int arr[15]={1,2,3};
    //accessing an element
    cout<<arr[1]<<endl;
    //printing an array
    for(int i=0/*index strts at 0*/;i<15;i++){
        cout<<arr[i];
    }

    //finding size of an array using sizeof()
    int arrsz=sizeof(arr)/sizeof(int);/*size of arr is 15*4=60 ,size of int  is 4 ,60/4=15*/
    cout<<endl<<arrsz;
}



/*********************************** */
//reversing an array
#include <iostream>
using namespace std;
     


int main(){
    int n[3];
    for(int i=0;i<=2;i++){cin>>n[i];}
  
  for(int i=2;i>=0;i--)  {
   
     cout<<n[i];  }
  
}