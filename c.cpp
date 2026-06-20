#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={-5,-2,-1,2,3};
    vector<int>pos;
    vector<int>neg;
    /*seperating pos and neg eleements*/
    for(int i=0;i<5;i++){
        if(arr[i]>=0){pos.push_back (arr[i]);}
        else{neg.push_back (arr[i]);}
    }
    
/*square(for which we need size of neg and pos array to traverse it)*/
int ps=pos.size();
int ns=neg.size();
int prod=1;
for(int i=ns+1;i<ps;i++){
    prod=arr[i]*arr[i];
    pos.push_back (arr[i]);
cout<<arr[i]<<endl;}
cout<<endl;
for(int i=0;i<ns;i++){
    prod=arr[i]*arr[i];
    neg.push_back (arr[i]);
cout<<arr[i];}

//in case of 0 positive or negative elements to print array as its is
if(ps==0){for(int i=0;i<5;i++){
    prod=arr[i]*arr[i];}}
    else{for(int i=0;i<5;i++){
    prod=arr[i]*arr[i];}}
  
 //merge and sort two arrays
 vector<int>res;/*res for resultant array*/   
 int l=0;/*left pointer */
    int r=ns;/*right pointer*/
    while(l<ns && r<ps){
        if(arr[l]<arr[r]){res.push_back(arr[l]);
        l++;}
        else{res.push_back(arr[r]);
            r++;}
    }

    while(l<ns){
        {res.push_back(arr[l]);
        l++;}
    }
while(r<ps){
        {res.push_back(arr[r]);
        r++;}
    }

for(int i=0;i<5;i++){
    cout<<res[i];
}}