/*   *****
     ***** 
     *****  */
#include <iostream>
using namespace std;
int main() {
    int r;
    cout<<"enter no of rows\n";
    cin>>r;
for(int i=1;i<=r;i++){   //OUTER LOOP FOR NO OF LINES   INNER FOR NO OF CHARACTERS TO BE PRINTED
    cout<<"\n";/*next line diya fir se r times character print*/
    for(int j=1;j<=r;j++){/*iska dry run kiya to pta chala ye sirf characters print kr rha hai r times and then loop ends*/
        cout<<"+ ";
    }/*after this point outer loop another value to i=2.... */
}

    return 0;
}

/*   *****
     ***
     **
     *  */
    #include <iostream>
    using namespace std;
    int main() {
        int r;
        cout<<"enter no of rows\n";
        cin>>r;
    for(int i=1;i<=r;i++){/*DRY RUN GIVEN ON WHATSAPP*/
        cout<<"\n";
        for(int j=r;j>=i;j--){
            cout<<"+ ";
        }
    }
    
        return 0;
    }    



/*    
1
12
123
1234*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int num=1;
    for(int i=1;i<=n;i++){cout<<"\n";
    for(int j=1;j<=i;j=j+1){
        cout<<j;
    }
}
        
        }








    /*
  1
  1 3
  1 3 5
  */
 #include <iostream>
 using namespace std;
 int main(){
     int n;
     cout<<"enter n";
     cin>>n;
     int num=1;
     for(int i=1;i<=n;i=i+2){cout<<"\n";
     for(int j=1;j<=i;j=j+2){
         cout<<j;
     }
 }
         
         }







/*     1
       22
       333   */
       #include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << i;     /*as inhe next row me poori common chahiye thi inhone i krva diyaaa*/
        }
        cout << endl;
    }

    return 0;
}






/*1
  23
  456
  78910  */
  #include <iostream>
  using namespace std;
  
  int main() {
      int rows;
      cout << "Enter the number of rows: ";
      cin >> rows;
  int n=1;
      for (int i = 1; i <= rows; ++i) {
          for (int j = 1; j <= i; ++j) {
              cout << n; 
              n=n+1;    /*as inhe next row me poori common chahiye thi inhone i krva diyaaa*/
          }
          cout << endl;
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



/* STAR   PYRAMID  */

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
