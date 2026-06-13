#include <climits>
/*REVERSE AN INTEGER AND IT MUSTY NOT BE GREATER THAN [(2)^31 - 1] OR LESS THAN [2^-31] */
class SolutionReverse {
    public:
        int reverse(int x) {
       int ans=0;
       while(x!=0){int rem=x%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){return 0;}/*int max min ye inhi vlues of darshate hai 2 ki power 31-1 aur 2 pow -31 */
        /*/10 isliye kiye kyuki ans*10 ho rha hai na     ans*10>2^31-1
                                                         ans>(2^3-1/10)*/
       
       x=x/10; 
       ans=(ans*10)+rem;
          } 
        return ans;}
    };





/*Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2x.*/
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

        /*OR*/


        class SolutionPowerOfTwo {
            public:
                bool isPowerOfTwo(int n) {
                    if(n==0)return false;
                    
                    while(n>0){
                        if(n==1)return true;
                        if(n %2 !=0)break;
                        n /=2;
                    }
                    return false;
                }
            };




/*Given an integer number n, return the difference between the product of its digits and the sum of its digits.*/
            class SolutionSubtractProductAndSum {
                public:
                    int subtractProductAndSum(int n) {
                        int product = 1, sum = 0;
                        while (n > 0) {
                            int digit = n % 10;
                            product *= digit;
                            sum += digit;
                            n /= 10;
                        }
                        return product - sum;
                    }
                };
                