#include<iostream>
#include<climits>
using namespace std;
int main(){

int arr[6]={1, 2, 3, 4, 5, 6};
int k=6;

int sum=0;


int min=INT_MAX;
int l=0,h=0;
while(h<6){
    sum=sum+arr[h];
if(sum>=k){
    int len=h-l+1;
if(len<min){min=len;}
l++;
cout<<min<<" ";}

if(sum<k){
    h++;
}}

}