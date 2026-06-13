/*PRINTING NEGATIVE NUMERICAL*/
#include <iostream>
using namespace std;

int main() {
    char a = -5;  // Stored in two's complement form
    cout << "Negative number (-5) in memory: " << a << endl;
    return 0;
}

/*CHECK WHETHER GIVEN INPUT UPR LOWR OR NUM*/
#include <iostream>
using namespace std;

int main() {
    char alpha;
    cout<<"enter any num,char:\n"<<alpha;
    cin>>alpha;
    if(alpha>='a' && alpha<='z'){
        cout<<"lowercase";
     }

           else if(alpha>='A' && alpha<='Z'){
                cout<<"uprcase";
        
} else if(alpha>='0' && alpha<='9'){
    cout<<"num";
}}


/*FIND SUM TILL N EVEN*/
#include <iostream>
using namespace std;

int main() {
int sum=0;
int n;
cout<<"enter n";
cin>> n;
int i=0;
while(i<=n && i>=0){
sum=sum+i;
i=i+2;
}cout<<"\n\nsum is "<<sum;
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

