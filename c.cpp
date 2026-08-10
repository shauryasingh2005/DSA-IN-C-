#include<iostream>
using namespace std;
int main(){
    int n=8;

    int l=0;
    int trg=4;
    int gtl=0;
    
    int arr[n]={-5,-2,-2,0,0,1,2,7};
for(int i=0;i<=n-3;i++){
   
for(int j=i+1;j<=n-2;j++){
    int l=j+1;
    int h=n-1;
    int otrg=arr[i]+arr[j];

while(l<h){
    int tans=arr[l]+arr[h];
    if(tans+otrg==trg){
cout<<arr[l]<<arr[h]<<arr[i]<<arr[j]<<" ";
    l++;h--;}

    if(tans+otrg<trg){l++;}
     if(tans+otrg>trg){h--;}
}

}
    
}

}