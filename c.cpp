//FRUITS INTO BASKET{Longes tsubarray which has atmost 2 baskets for max numbe rof fruits,mtlb 1 ya 2 baskets possible h}

#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
int main(){
int max=INT_MIN;
int arr[5]={1,2,1,3,2};
int k=2;/*as quesiton mein we have 2 baskets only*/
int h=0,l=0;
unordered_map<int,int>f;
while(h<5){
    f[arr[h]]++;
    while(f.size()>k){
        f[arr[l]]--;
        if(f[arr[l]]==0){f.erase(arr[l]);}
        l++;
    }

/*MISTKAE    if(f.size()==k){  this would not be needed as exactly 2 nahi 2 ya 2 s ekm baskets me cover ho jaaye*/
int len=h-l+1;
if(len>max){max=len;}


h++;}



cout<<max;



}