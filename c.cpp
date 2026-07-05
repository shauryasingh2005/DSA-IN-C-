#include<iostream>
using namespace std;
int main(){
  int n=9;
  int a[n]={0,0,1,1,2,2,2,2,2};
  
  int j=0;
  
int count=1; 
cout<<a[j];
    while(j<n-1){
       if(a[j]!=a[j+1]){
      
    cout<<a[j+1];
    count++;

    j++;
          }
  j++;}
 

cout<<endl<<count<<endl;
}
