#include<iostream>
using namespace std;
int main(){
  int n=11;
  int arr[n]={1,2,0,1,0,0,0,1,2,2,1};
  int co0=0,co1=0,co2=0;
  for(int i=0;i<n;i++){
    if(arr[i]==0){co0++;}

  }for(int i=0;i<n;i++){
    if(arr[i]==1){co1++;}

  }for(int i=0;i<n;i++){
    if(arr[i]==2){co2++;}

  }

int i=0;
  while(co0>0){
    arr[i]=0;
    cout<<arr[i];
    i++;
    co0--;
  }
while(co1>0){
  arr[i]=1;
    cout<<arr[i];
    i++;
    co1--;
  }while(co2>0){
    arr[i]=2;
    cout<<arr[i];
    i++;
    co2--;
  }}