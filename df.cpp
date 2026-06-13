#include <iostream>
using namespace std;
int main(){
    
      int arr[]={1,2,5,6,9,10,12,13};
      int key=8;
      int s=0,l=7;
      for(int i=s;i<=l;i++){
int mid=(l+s)/2;
if(arr[mid]==key){
    cout<<"element found";
    break;}
else if(arr[mid]<key){
    s=mid+1;
}
else {
    l=mid-1;
}
cout<<"not";
}

    
        
    }
