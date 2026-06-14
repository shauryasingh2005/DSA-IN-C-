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


//reverse an array two pointer method
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

/******************************************************************************************** */
   //FIBONACCI SERIES
   #include <iostream>
using namespace std;

// This function ONLY calculates the nth Fibonacci number
int fibb(int n) {
    // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Recursive relation
    return fibb(n - 1) + fibb(n - 2);
}

int main() {
    int n;
    cin >> n;
    
    // Print the Fibonacci series up to n
    for (int i = 0; i <= n; i++) {
        cout << fibb(i) << " ";
    }
    cout << endl;
    return 0;
}




/*When you call fibb(4), the computer does not magically output 3. 
It aggressively breaks the problem down until it hits the base cases.
fibb(4) starts: It doesn't know the answer. 
The rule says it must return fibb(3) + fibb(2);. 
It pauses and asks for fibb(3).fibb(3) starts: It doesn't know the answer.
 It must return fibb(2) + fibb(1);. 
 It pauses and asks for fibb(2).fibb(2) starts: It doesn't know the answer.
  It must return fibb(1) + fibb(0);. 
  It pauses and asks for fibb(1).
  Now it hits the wall (The Base Cases):The computer looks at fibb(1). 
  Your code explicitly says: if (n == 1) return 1;. 
  It returns 1.The computer looks at fibb(0).
   Your code explicitly says: if (n == 0) return 0;.
    It returns 0.The Stack Unwinds (Building the Answer):
    Now the computer has actual numbers, so it works its way backwards,
     doing the math:fibb(2) asked for fibb(1) + fibb(0). That is $1 + 0$. 
     So, fibb(2) returns 1.fibb(3) asked for fibb(2) + fibb(1).
      We just found out fibb(2) is $1$. And fibb(1) is always $1$. 
      That is $1 + 1$. So, fibb(3) returns 2.
      
    Finally, fibb(4) asked for fibb(3) + fibb(2). 
    We just found out fibb(3) is $2$, and fibb(2) is $1$. 
    That is $2 + 1$.fibb(4) returns 3.    */


    /************************************************************************************************ */