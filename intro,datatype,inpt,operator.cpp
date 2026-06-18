#include<iostream>
/*this is PREPROCESSOR DIRECTIVE isse likhna always imp*/
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <queue>          // queue and priority_queue
#include <stack>
#include <deque>
#include <algorithm>      // sort, lower_bound, reverse, etc.
#include <climits>        // INT_MAX, INT_MIN, LLONG_MAX
#include <numeric>        // accumulate, iota, gcd
#include <functional>     // greater<>, function<>
#include <sstream>        // stringstream for parsing
#include <cmath>          // sqrt, abs, pow, ceil, floor

using namespace std;/*this is s*/
int main(){

    cout <<"eko aham dwitio nasti"<<endl;/*for output just like printf*/
return 0;}
/*..................................................................................*/


/*............................................................................................*/
#include<iostream>
using namespace std;
int main(){
    int aage=456;
    cout <<sizeof(aage);/*it would print 4 bytes which is length of integer type*/
}
/*...............................................................................................*/
#include<iostream>
using namespace std;
int main(){
    float PI=3.14f;/*we add "f" for float or it would consider it double by default*/
    cout <<PI;
}
/*...................................................................................... */
#include<iostream>
using namespace std;
int main(){
    double PI=3.14;/*we add "f" for float or it would consider it double by default*/
    cout <<PI;
    char a='f';/*single bracket for 1 char only*/
    cout <<a;
}
/*........................................................................................ */
#include<iostream>
using namespace std;
int main(){
    bool isgood=true;/*true-1   false-0*/ 
    cout <<isgood;
}


/*..............INPUT..................................*/
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"enter agr";
    cin>>age;
    cout <<"age is"<<age;
}

/*..................INPUT OUTPUT..............................*/
#include <iostream>
using namespace std;

int main() {
    int age1;
    cout << "Enter age1: ";
    cin >> age1;

    int age2, age3;
    cout << "Enter age2 and age3: ";
    cin >> age2 >> age3;

    cout << "age2 = " << age2 << "\n";
    cout << "age3 = " << age3 << "\n";

    cout << "Total age sum is: " << (age1 + age2 + age3) << endl;

    return 0;
}
