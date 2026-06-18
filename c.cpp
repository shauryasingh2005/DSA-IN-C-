#include<iostream>
using namespace std;
int sort(int arr[5],int si){
  int min=si;
  for(int i=si;i<5;i++){if(arr[i]<arr[min]){min=i;}}
  int temp=arr[min];
  arr[min]=arr[si];
  arr[si]=temp;
}

int main(){
   int arr[5]={13,24,52,20,9};
   int target;
   cin>>target;
   int q=5;
   int si=0;
while(q--) { sort(arr,si);
si++;}
for(int i=0;i<5;i++){cout<<arr[i]<<" "<<endl;}

int i=0,j=4;
while(i<j){
  if(arr[i]+arr[j]==target){cout<<arr[i]<<"+"<<arr[j];
  return 0;}

if(arr[i]+arr[j]>target){j--;}
else{i++;}
}
return -1;
}