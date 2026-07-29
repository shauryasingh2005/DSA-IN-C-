#include<iostream>
#include<vector>
using namespace std;
int sort(int arr[],int n){
  for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){int temp=arr[i+1];
    arr[i+1]=arr[i];
arr[i]=temp;}
  }  }


int main(){
int arr[5]={-3,1,-5,0,5};
int q=5;
while(q--){sort(arr,5);}
int l=1,h=4;
int sum=0;
int diff=0;
vector<int>f;
for(int i=0;i<3;i++){

    while(l<h){
sum=arr[l]+arr[h];
int trg=sum;
diff=arr[i]-trg;
f.push_back(diff);
if(arr[i]==trg){l++;}
if(arr[i]<trg){l++;}

if(arr[i]>trg){h--;}
}



}

int min=0;
f[min];
int k=1;
while(k<f.size()){
    if(f[k]<f[min]){
        f[min]=f[k];
    }
k++;
}



}