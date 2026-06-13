#include <iostream>
using namespace std;
void rev(int j,int& n[]){
if(j>2){return;}

cout<<n[j];
j++;
rev(2-j,n[j]);

}     


int main(){
    int n[3];
    for(int i=0;i<=2;i++){cin>>n[i];}
  int j=0;
rev(j,n[]);
  
}