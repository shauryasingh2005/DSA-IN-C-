/*pyramid  *
          ***
         *****  n=3 */

#include <iostream>
 using namespace std;
 
 int main() {
     int r;
     cout << "Enter the number of rows: ";
     cin >> r;
 int n=1;
     for (int i = 1; i <=r;i++) {
         cout<<"\n";
         for(int sp=r-i;sp>0;sp--){
            cout<<" ";
         }
         for (int j =1; j <=n ; j++) {
            cout<<"+";
                 
         }
 n=n+2;
     }
 
     return 0;
 }




/*    *
     * *
    * * *  n=3*/
   #include<iostream>
   using namespace std;
   int main(){
       int n;
       cout<<"enter";
       cin>>n;
       int v=1;
   for(int i=1;i<=n;i++){
       cout<<endl;
       
       for(int ns=n-i;ns>0;ns--){
           cout<<" ";}
       
       for(int j=1;j<=v;j++){
           cout<<"+";
           cout<<" ";
       }
       v=v+1;}
   }





 /*PRIME OR NOT*/
#include <iostream>
using namespace std;

int main() {
int n;
cout<<"enter n";
cin>> n;

if(n==1){
    cout<<"prime";}
    int i=2;
    while(i<n){
        if(n%i==0){cout<<"\nnot prime for"<< i;}
        else{cout<<"\nprime FOR "<< i;}
        
   i=i+1; }

    
    
}





/*  +
   ++
  +++
 ++++
+++++   */
#include <iostream>
 using namespace std;
 
 int main() {
     int r;
     cout << "Enter the number of rows: ";
     cin >> r;
 int n=1;
     for (int i = 1; i <= r; ++i) {
         cout<<"\n";
         for (int j =1; j <=r ; j++) {
             if(i+j<=r){cout <<" ";}
             else{cout<<"+";} 
                 
         }
 
     }
 
     return 0;
 }



 /* 
 +   +
  + +
   +
  + +
 +   +   */

 #include <iostream>
 using namespace std;
 
 int main() {
     int r;
     cout << "Enter the number of rows: ";
     cin >> r;
 int n=1;
     for (int i = 1; i <= r; ++i) {
         cout<<"\n";
         for (int j =1; j <=r ; j++) {
             if(i==j || i+j==r+1){cout <<"+";}
             else{cout<<" ";} 
                 
         }
 
     }
 
     return 0;
 }

 


 /*1
  23
  456
  78910  */
  #include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter";
    cin>>n;
    int v=1;
for(int i=1;i<n+1;i++){
    cout<<endl;
    
    for(int j=1;j<=i;j++){
        cout<<v; 
         v=v+1; }
    }
}





  /*DIAMOND*/
  #include<iostream>
  using namespace std;
  int main(){
      int n;
      cout<<"enter";
      cin>>n;
      int v=1;
      //UPPER PART 
  for(int i=1;i<n+1;i++){
      cout<<endl;
      for(int ns=n-i;ns>=1;ns--){
          cout<<" "; }
      
      for(int j=0;j<=v-1;j++){
          cout<<"0"; }
          v=v+2; }
  
  
          //LOWER PART OF DIAMOND
          for(int i=n-1;i>=1;i--){
              cout<<endl;
              for(int ns=n-i;ns>=1;ns--){
                  cout<<" "; }
              
              for(int j=1;j<=(2*i)-1;j++){/*isme 2*i-1 isliye lgaya as pattern notice kro
                                  jb i=1 tb 1 print krna,2 pr 3,3 pr 5,4 pr 7   so basically i ke double ko sbstract 1 chl rha hai ye pattern h*/
                  cout<<"0"; }
                   }
  }






/*last digit */
#include <iostream>
using namespace std;

int main() {
    int sum=0;
    int prod=1;
    int n;
    cout<<"enter an integer;";
    cin>>n;
    int ld;
   
    while(n>0)
    {ld=n%10;
    n=n/10;
    
    cout<<ld;    }
    
    
    return 0;}




    /*DECIMAL TO BINARY  and vice versa do it ur self*/
    #include <iostream>
using namespace std;
int main(){


    for(int tdn=1;tdn<=10;tdn++){
int dn=tdn;/*decimal no.*/
int ans=0;
int pow=1;
while(dn!=0){
   int bn=dn%2;
   dn=dn/2;
   ans=ans+(bn*pow);
pow=pow*10;
}
cout<<"\n"<<ans;
    }


}



/*TO CHECK WHETHER GIVEN NUMBER IS AN INTEGER OF 2 OR NOT*/
#include <iostream>
using namespace std;
int main(){
    cout<<"enter integer(power of 2)";
    int n;
    cin>>n;
    if(n==1){cout<<"true";}

    for(int i=2;i<=n;i=i*2){
if(i==n){cout<<"true";}
else{cout<<"false";}
    }
        
        }





/*FIND  NCR USING FUNCTION*/
#include<iostream>
using namespace std;
int fact(int x){
  int fac=1;
  for(int i=x;i>=1;i--){
     fac=fac*i;
    
  }
}

int nCr(int n,int r){
    int num=fact(n);
    int deno=fact(r)*fact(n-r);
    int ans=num/deno;
    return ans;
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<nCr(a,b);
  
}



/*max and minimum element in an array*/
#include<iostream>
using namespace std;
int main(){
    int sz;
    
    cout<<"\nenter size of array";
    cin>>sz;
    int arr[sz];
   
    for(int i=0;i<sz;i++){
      
            cout<<"enter element\n";
        cin>>arr[i];
    }
    int arm=arr[0];
for(int i=1;i<sz;i++){
    if(arm<arr[i]){
        arm=arr[i];
    }
}
cout<<"max is"<<arm<<endl;
  

int min=arr[0];
for(int j=1;j<sz;j++){
    if(min>arr[j]){
        min=arr[j];
    }
}
cout<<"min is"<<min<<endl;}



/*FIBBONACCI*/

#include<iostream>
using namespace std;
int main()
{int n;
    cin>>n;

int var=1;
int sum=0;
for(int i=1;i<=n;i++){
    int org=sum;
    sum=sum+var;
cout<<sum<<" ";
var=org;
}
}


/*PALINDROME*/
#include<iostream>
using namespace std;
int main()
{int n;
    cin>>n;
    int org=n;
    int rem=0;
    int rev=0;
    for(;n>0;n=n/10){
rem=n%10;
rev=rev*10+rem;
    
         }cout<<rev<<endl;
if(rev==org){cout<<"palindrome";}
else{cout<<"not";}
}



/*GCD OF TWO NUMBERS*/
#include<iostream>
using namespace std;
int main()
{int n;
    cin>>n;
   int m;
    cin>>m;
    int x;
    if(m>=n){x=m;}
    else{x=n;}
    for(int i=n;i>=1;i--){
        if(m%i==0 && n%i==0){cout<<i;
        break;}
    }
   
}






/********REVERSE A STRING*****************/
#include<iostream>
using namespace std;
int main()
{string n;
    cin>>n;
   int l=n.size();
   int las=l-1;
 for(int i=0;i<=l-1;i++){
    if(n[i]!=n[l-i-1]){
        cout<<"not";
        break;
    }else{cout<<"palindrome"; break;}
 }
}






/*reverse an array*/
#include<iostream>
using namespace std;
int main(){
    int sz;
    int sum=0;
    
    cout<<"\nenter size of array";
    cin>>sz;

    int arr[sz];
   
    for(int i=0;i<sz;i++){
      
            cout<<endl;
        cin>>arr[i];
    }
    
    for(int i=0;i<sz;i++){
      
    cout<<arr[i];
}
cout<<endl;
for(int i=sz-1;i>=0;i--){
       cout<<arr[i]<<" ";

}}






/*swapping array alternatively*/
#include<iostream>
using namespace std;
int main(){
    int sz;
    int sum=0;
    
    cout<<"\nenter size of array";
    cin>>sz;

    int arr[sz];
   
    for(int i=0;i<sz;i++){
      
            cout<<endl;
        cin>>arr[i];
    }
    
    for(int i=0;i<sz;i++){
      
    cout<<arr[i];
}
cout<<endl;
for(int i=0;i<sz;i=i+2){
    if(i+1<sz){/*we did it especially of odd number of elements in arrays*/
    int arrorg=arr[i];/*arrorg me hmne arr[i] waale ko save kiya phir arr[i] ko change kiya to arr[i+1] then arr[i+1] to arrorg*/
    arr[i]=arr[i+1];
    arr[i+1]=arrorg;
    }
}

for(int i=0;i<sz;i++){
      
    cout<<arr[i]<<" ";
}}





/*TWO SUM (leetcode)*/
#include <iostream>
using namespace std;
int main(){
    int sz;
    cout<<"ente rsize";
    cin>>sz;
    cout<<endl;
    int arr[sz];
    int trg;
    cout<<"target";
    cin>>trg;
    cout<<endl;
    for(int i=0;i<sz;i++){
        cout<<"enter element"<<(i+1)<<endl;
        cin>>arr[i];
    }
for(int i=0;i<sz;i++){
    for(int j=i+1;j<sz;j++){
        if(arr[i]+arr[j]==trg){
            cout<<"{"<<i<<","<<j<<"}";
        }
        else{continue;}
    }
}
}





/*SUM OF MATRICES*/
#include<iostream>
using namespace std;
void mate(int mat[100][100],int x,int y){
    for(int a=0;a<x;a++){
        cout<<endl;
        for(int b=0;b<y;b++){
            cout<<" ";
            cin>>mat[a][b];
        }
 }}

 


int main(){
    int a;
    cout<<"enter rows";
    cin>>a;
    int c;
    cout<<"enter row2";
    cin>>c;
    int b;
    cout<<"enter coloumn";
    cin>>b;
    int d;
    cout<<"enter coloumn2";
    cin>>d;
int mat1[100][100];
int mat2[100][100];
    mate(mat1,a,b);
mate(mat2,c,d);

for(int i=0;i<a;i++){
cout<<endl;
for(int j=0;j<b;j++){
int sum=mat1[i][j]+mat2[i][j];
cout<<sum<<" ";}
}
}





/*TARGET SUM FOR DUPLET*/
#include <iostream>
using namespace std;
int main(){
int arrc[6]={4,3,5,6,1,2};
int k=7;
for(int i=0;i<=5;i++){
    for(int j=1;j<=5;j++){
        if((arrc[i]+arrc[j])==k){cout<<i<<j<<endl;}
    }
}


}






/*BINARY SEARCH FOR ODD AND EVEN*/
#include <iostream>
using namespace std;
int binsrch(int arr[],int size,int key){
int s=0;
    int e=size;
    int mid=(e+s)/2;
    while(s<=e){
        if(arr[mid]==key){cout<<mid;}
        if(arr[mid]<key){s=mid+1;}
        if(arr[mid]>key){e=mid-1;}
        
     mid=(e+s)/2;}
return -1; }
int main(){
    int arr1[6]={1,2,3,4,5,10};
    int arr2[5]={10,20,30,40,50};
    int result= binsrch (arr1 , 6, 2);
    cout<<result;
}




/*FIRST AND LAST OCCURENCE................................................................*/
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