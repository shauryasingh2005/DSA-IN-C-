//print name n times
#include <iostream>
using namespace std;
void name(int &count,int &n){
    
    if(count==n){return;}
else{cout<<"shaurya\n";
count++;
name(count,n);//MY MISTAKE;so what happens in recurision is u call funciton inside functions yha pr maoin name() dobara call hi naa kiya to when count=0 and n=5 too else conditon me ek baar [ront krke it used to terminte]
}}     


int main(){
    int n;
    cin>>n;
    int count=0;
   name(count,n);
}


/***************************************************************** */
//PRINT FROM 1 TO N
#include <iostream>
using namespace std;
void name(int &count,int &n){
    
    if(count>n){return;}
else{cout<<count<<endl;
count++;
name(count,n);}}     


int main(){
    int n;
    cin>>n;
    int count=1;
   name(count,n);
}


/***************************************************************** */
//print linearly N to 1

#include <iostream>
using namespace std;
void name(int &count,int &n){
    
    if(count>n){return;}
else{cout<<n<<endl;
n--;
name(count,n);}}     


int main(){
    int n;
    cin>>n;
    int count=1;
   name(count,n);
}

/****************************************** */
//PRINT LINEARLY BACKTRACKING 1 TO N  (explained in rec video chat in whatsapp and notes)
#include <iostream>
using namespace std;
void name(int c,int n){
    
    if(c<1){return;}


    name(c-1,n);
cout<<c;
}     


int main(){
    int n;
    cin>>n;
    int c=n;
  name(c,n);
}


//N TO 1 BAKCTRACKING(rec veido whatsapp and notes)
#include <iostream>
using namespace std;
void name(int c,int n){
    
    if(c<1){return;}

cout<<c;
    name(c-1,n);

}     


int main(){
    int n;
    cin>>n;
    int c=n;
  name(c,n);
}