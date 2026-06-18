//SUM OF ARRAY
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {13, 24, 52, 20, 9};
    int i = 0, j = 4;
    int s1 = 0, s2 = 0;
    
    
    while(i < j) { 
        s1 = s1 + arr[i];
        s2 = s2 + arr[j];
        i++; 
        j--;
    }
    
    int sum = s1 + s2;
    if(i == j) {
        sum = sum + arr[i];
    }
    
    cout << "sum of array is " << sum;
    return 0;
}


//TWO SUM PROBLEM TO GE TTHE NUMBER WHICH SUM AND GIVE TARGET
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







//REVERSE AN ARRAY 
#include <iostream>
using namespace std;
void swap(int r, int l, int n[3]) {
  int temp = n[r];
  n[r] = n[l];
  n[l]=temp;
}

void rev(int r, int l, int n[3]) {
  if(r>=l){return;}
  swap(r, l, n);
  rev(r+1,l-1,n);
  
}

int main() {
  int n[3];
  for (int i = 0; i <= 2; i++) {
    cin >> n[i];
  }
  int l = 2, r = 0;
  rev(r, l,n);
   for(int i=0;i<=2;i++){cout<<n[i];}}