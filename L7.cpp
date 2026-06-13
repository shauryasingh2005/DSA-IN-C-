/*VECTORS*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{   /*SYNTAX*/
     vector<string/*dtatype*/> vecname ={"ALP","BET","GAM","SIG"};/*string and character is different datstype not same*/


     /*PRINTING INDEX ELEMETNS*/
     cout<<vecname[0];
cout<<vecname[1];
cout<<vecname[3]<<endl;

/*PRINTING VECTOR*/
for(string i:vecname){
    cout<<i;
}


/*LOOP THROUGH A VECTOR*/
vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

for (int i = 0; i < cars.size(); i++) {
  cout << cars[i] << "\n";
}   


/*INSERTING ELEMENTS IN VECTORS*/






}


