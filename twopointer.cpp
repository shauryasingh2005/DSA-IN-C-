
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