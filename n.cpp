/*FIRST AND LAST OCCURENCE*/
#include <iostream>
using namespace std;
int first(int arr[],int s,int e,int key){
int mid=(e+s)/2;
int ans;
while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;}/*as first occurence hai to we are going to left kyuki ofc in sorted agar middle ke pehel koi occ hai to left pr hi hoga and similarly last occurence me right side bin search*/
        if(arr[mid]<key){s=mid+1;}
        if(arr[mid]>key){e=mid-1;}
         mid=(e+s)/2;}
        cout<<ans;
    return 0;} 


    int last(int arr[],int s,int e,int key){
int mid=(e+s)/2;
int ans;
while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;}
        if(arr[mid]<key){s=mid+1;}
        if(arr[mid]>key){e=mid-1;}
         mid=(e+s)/2;}
        cout<<ans;
    return 0;} 


int main(){ int arr[6]={1,3,3,3,4,4};
    int f=first(arr,0,5,3);
    int l=last(arr,0,5,3);
    return 0; }