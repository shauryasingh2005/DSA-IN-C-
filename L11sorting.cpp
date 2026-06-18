//SELECTION SORT_______traverse unsroted arry and find the minimum element and swap it with the first element of unsorted array and repeat the process for remaining unsorted array

#include <iostream>
using namespace std;
   
int ssort(int unsor[],int si){
  int mindex=si;
  
  for(int i=si;i<5;i++){if(unsor[i]<unsor[mindex]){mindex=i;}}
    int temp=unsor[mindex];
    unsor[mindex]=unsor[si];
    unsor[si]=temp;
  
}
int main() {
  int unsor[5]={13,24,52,20,9};
  int si = 0;
while(si<5){
ssort(unsor,si);
si++;
}

cout<<"sorted array is\n";
for(int i=0;i<5;i++){cout<<unsor[i]<<" ";}
}


/********************************************************************* */

//INSERTION SORT_______traverse unsorted array and insert each element in its correct position in sorted array
#include <iostream>
using namespace std;    
int main() {
  int n;
  n=5;
  int arr[5]={4,3,2,5,1};

  for(int i=0;i<=4;i++){
  for(int j=i;j>0;j--){
      if(arr[j-1]>arr[j]){
    int temp=arr[j-1];
arr[j-1]=arr[j];
arr[j] = temp;}
      }}
for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";}}


//BUBBLE SORT_______traverse unsorted array and swap adjacent elements if they are in wrong order and repeat the process for remaining unsorted array
#include <iostream>
using namespace std;    
int main() {
  int arr[8]={13,24,52,20,9,10,42,3};
  int q=8;
 while(q--){
  for(int i=0;i<7;i++){ 
    if(arr[i]>arr[i+1]){ 
         int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;}
      }}
for(int i=0;i<8;i++){
      cout<<arr[i]<<" ";}}


/********************************************************************** */

//MERGER SORT_______divide the array into two halves and sort them recursively and then merge the sorted halves
#include<iostream>
#include<vector>
using namespace std;
int m(int arr[],int low,int mid,int high){
vector<int> temp;
int left=low;
int right=mid+1; 
while(left<=mid && right<=high){if(arr[left]<arr[right]){temp.push_back(arr[left]);left++;}
else{temp.push_back(arr[right]);right++;}}
while(left<=mid){temp.push_back(arr[left]);left++;}
while(right<=high){temp.push_back(arr[right]);right++;}
for(int i=low;i<=high;i++){arr[i]=temp[i-low];}
return 0;
}


void ms(int arr[],int low,int high){
  if(low==high){return;}
  int mid=(low+high)/2;
  ms(arr,low,mid);
  ms(arr,mid+1,high);
  m(arr,low,mid,high);
}
int main(){
  int arr[5]={4,3,2,5,1};
  int low=0;int high=4;
  ms(arr,low,high);
for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";}}