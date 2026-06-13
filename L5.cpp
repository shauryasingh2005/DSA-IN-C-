/*FUNCTIONS    used when we want to perform a specific task many times 
it helps us to make code less bulky vrna ek hi operation baar bar perform krne ke 
vhi code baar baar krna pdega*/
#include<iostream>
using namespace std;
int power(int a,int b){
  int pow=1;
  for(int i=1;i<=b;i++){
     pow=pow*a;
    
  }return pow;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<power(a,b);
  
}



/*FOR UNDERSTANDING FUNCITONS BETTER LOOK INTO nCr QUESTION
*/

/*using boolean for prime number function*/
#include<iostream>
using namespace std;
bool prn(int x){
  
  for(int i=2;i<x;i++){
     
    if(x%i==0){return 0;}
    
  }return 1;
}


int main(){
  int a;
  cin>>a;
  if(prn(a)){cout<<a<<"is prime\n";}
  else{cout<<a<<"is not prime\n";}
  
}


/*PASS BY VAUE*/
#include <iostream>

using namespace std;

int sum(int a,int b)
 { a=a+15;
    b=b+15;
    int so=a+b;
    cout<<a<<b<<"function waale parameters";
    return so;}

int main() {
    int x,y;
    x=5;
    y=10;
cout<<x<<y<<"main waale parameters";
    return sum(x,y);
    
}
