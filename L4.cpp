/*BITWISE OPERATORS(AND &,OR |,NOT ~,XOR ^)*/
#include <iostream>
using namespace std;

int main() {
    int a=4;
    int b=6;

    cout << "a & b : " << (a&b) << endl;
    cout << "a | b : " << (a|b) << endl;
    cout << " ~ b : " << ~b << endl;
    cout << "a ^ b : " << (a^b) << endl;
    return 0;
}



/*INCREMENT DECREMENT OPERATORS*/
#include <iostream>
using namespace std;

int main() {
    int a=4;
    int b=6;

    cout << "pre inc" << (++a) << endl;/*first increases the value and then print it*/
    cout << "post inc " << (a++) << endl;/*first exceutes the present value and then increases it then prints it*/
    cout << "pre inc " << (--b) << endl;
    cout <<"pst dec"<<(b--);
    return 0;
}