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
                





    //3 SUM OF UNIQUE TRIPLETS SUCH THAT THEIR SUM IS 0
#include<iostream>
using namespace std;

int sort(int arr[],int n){
  for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){int temp=arr[i+1];
    arr[i+1]=arr[i];
arr[i]=temp;}
  }  

}



/*Basic idea is;  arr[i]+arr[b]+arr[c]=0,arr[b]+arr[c]=-arr[i]   ,two sum of b and c=-arr[i]*/
int main(){
    int n=10;
    int arr[10]={3,-4,2,1,-1,-3,5,-4,1,5};
 int q=n;
    while(q>=0){
    sort(arr,n-1);
q--;}

for(int i=0;i<n-2;i++){
  if(arr[i]==arr[i+1]){i++;}

  int l=i+1;
  int r=n-1;
  if(arr[l]==arr[i]||arr[l]==arr[r]){l++;}
if(arr[l]==arr[i]||arr[l]==arr[r]||arr[r]==arr[r-1]){r--;}
while(l<r){int sum=arr[l]+arr[r];
int trg=-arr[i];

if(sum==trg){cout<<arr[i]<<arr[l]<<arr[r]<<endl;
l++;
r--;}
if(sum<trg){l++;}
if(sum>trg){r--;}}
}



}








//3SUM CLOSEST
#include<iostream>
#include<vector>
using namespace std;

int sort(int arr[],int n){
  for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]){int temp=arr[i+1];
    arr[i+1]=arr[i];
arr[i]=temp;}
  }  

}


int main(){
    int n=3;
    int arr[3]={0,0,0};

/*sorting*/    int q=n;
 while(q>=0){
    sort(arr,n-1);
q--;}

/*twosum*/
int trg;
cout<<"enter;"<<endl;
cin>>trg;
int diff=0;
/*created two vectors as one has difference to find min difference then other has all the sums so kepeing index values same and moving the min pointer we get coinciding index for faja and aja*/
vector<int>faja;
vector<int>aja;

for(int i=0;i<n-2;i++){
  cout<<i<<"batch"<<endl;
 
  int l=i+1;
  int r=n-1;
  

while(l<r){int sum=arr[i]+arr[l]+arr[r];

  if(sum==trg){
  diff=trg-sum;
  faja.push_back(diff);
   aja.push_back(sum);

l++;
r--;}

if(sum<trg){
  diff=trg-sum;
  faja.push_back(diff);
 aja.push_back(sum);

  l++;}

  if(sum>trg){
  diff=sum-trg;
  faja.push_back(diff);
  aja.push_back(sum);

  r--;}}
}

for(int i=0;i<faja.size();i++){cout<<faja[i]<<" ";}

int min=0;
for(int i=0;i<faja.size();i++){
  
  if(faja[i]<faja[min]){min=i;}
}
cout<<endl<<"min sum"<<aja[min];
}


  



//SORTING COLORS WITHOUT ACTYUALLY SORTING PART 1(DOUBLE PASS)
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int co0 = 0, co1 = 0, co2 = 0;
        
        /*Pass 1: Walk the array ONCE and tally all the numbers*/
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) co0++;
            else if(nums[i] == 1) co1++;
            else if(nums[i] == 2) co2++;
        }

        /* Pass 2: Overwrite the original array in-place*/
        int i = 0;
        
        while(co0 > 0){
            nums[i] = 0;
            i++;
            co0--;
        }
        
        while(co1 > 0){
            nums[i] = 1;
            i++;
            co1--;
        }
        
        while(co2 > 0){
            nums[i] = 2;
            i++;
            co2--;
        }
    }
};


//SORITNG COLORS PART 2 (SINGLE PASS)DUTCH NATIONAL FLAG ALGORITHM (ON PHONE IN NOTES)

#include<iostream>
using namespace std;



int main(){
  int n=9;
  int a[n]={2,0,2,1,2,0,1,2,1};
  int low=0,mid=0;
  int high=n-1;
  while(mid<=high){
if(a[mid]==2){swap(a[mid],a[high]);
high--;}

else if(a[mid]==0){swap(a[mid],a[low]);
low++;
mid++;}

else{mid++;} 
  }  
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
}
cout << endl;}




//PALINDROME NUMBER CHECK WITHOUT STIRNG
#include<iostream>
using namespace std;
int main(){
  int num;
  cout<<"enter";
  cin>>num;
  int i=0;
  int ori=num;
  int count =0;
  while(ori>0){
    count++;
    ori=ori/10;
   
  }

 
int nm=num;
int rem=0;
long nnm=0;
int arr[count];
while(nm>0){
  rem=nm%10;
  nnm=nnm*10+rem;
  
nm=nm/10;
}

if(nnm==num){cout<<"yes";}
else{cout<<"no";}

}






//SMALLEST SUBARRAY WHICH HAS SUM EQUAL TO OR GREATER THAN TARGET
#include<iostream>
#include<climits>
using namespace std;
int main(){
int l=0,h=0;
int n=5;
int ar[n]={1,2,4,4,5};
int sum=0;
int min=INT_MAX;
int trg;
cout<<"enter trg";
cin>>trg;
while(h<n)
{
    sum=sum+ar[h];
    while(sum>=trg){
        int len=h-l+1;
        if(len<min)/*basically int max is infinity so anyhting len give will b e smaller that infinity*/
        {min=len;}
        sum=sum-ar[l];
        l++;
    }
    h++;
}

}







//LONGEST SUBSTRING WHICH HAS K UNIQUE ELEMETNS

#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std; // <-- ADD THIS LINE

int main(){
    char s[8] ="ecedcae";/*ik yha pr 7 letters h but sitll 8 ka size dikha rha as ek /0 value hoti h*/
    unordered_map<char,int> f;
    int k; cout<<"enter k"; cin>>k;
int h=0,l=0;

int max=INT_MIN;
    for(int h=0;h<7;h++){

f[s[h]]++;//what its doing is h:1(frequency),e;1,c;1 till now f.size is 3 let say k=3 then it count a;1,now f.zie =4 enters while(f.zie>k)loop

while(f.size()>k){f[s[l]]--;
if(f[s[l]]==0){f.erase(s[l]);}//window hits for k=3 heca then erases h and then ecae but f.size is still =k then ecaef ,now size>k hence erase e then caef ,size greater erase c and htis continues

l++;}

if(f.size()==k){
    int len=h-l+1;
    if(len>max){
        max=len;}} }

        cout<<max;
}






//FRUITS INTO BASKET{Longes tsubarray which has atmost 2 baskets for max numbe rof fruits,mtlb 1 ya 2 baskets possible h}

#include<iostream>
#include<unordered_map>
#include<climits>
using namespace std;
int main(){
int max=INT_MIN;
int arr[5]={1,2,1,3,2};
int k=2;/*as quesiton mein we have 2 baskets only*/
int h=0,l=0;
unordered_map<int,int>f;
while(h<5){
    f[arr[h]]++;
    while(f.size()>k){
        f[arr[l]]--;
        if(f[arr[l]]==0){f.erase(arr[l]);}
        l++;
    }

/*MISTKAE    if(f.size()==k){  this would not be needed as exactly 2 nahi 2 ya 2 s ekm baskets me cover ho jaaye*/
int len=h-l+1;
if(len>max){max=len;}


h++;}



cout<<max;



}





//LONGEST SUBSTIRNG WHICH HAS NO REPEATED CHARACTERS
#include<iostream>
#include<climits>
#include<unordered_map>
using namespace std;
int main(){

string s = "abcbad";
int l=0,h=0;
int max=INT_MIN;
unordered_map<char,int>f;
while(h<5){
f[s[h]]++;

while(f.size()<(h-l+1)){
    f[s[l]]--;
    if(f[s[l]]==0){f.erase(s[l]);}
    l++;}

    if(f.size()==(h-l+1)){
        if((h-l+1)>max){max=(h-l+1);}
    }
h++;

}
cout<<max;
}





//MOVE ZEROES AT LAST WITHOUT FUCKING UP THE ORDER 

#include<iostream>
using namespace std;

int main() {
    int arr[5] = {0, 1, 0, 3, 12};
    int l = 0, h = 0;
    
    while(h < 5) {
        // The Reader only cares if it found a non-zero!
        if(arr[h] != 0) {
            // Swap them. (You can also just use the built-in C++ swap)
            swap(arr[l], arr[h]);
            
            // Writer moves forward, ready for the next non-zero
            l++;
        }
        h++; // Reader always moves forward
    }

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}





//SQUARES OF SORTED ARRAY
#include<iostream>
using namespace std;

int main(){
    int n=5;
int orgn=n;
    int arr[n]={-4,-3,1,2,5};
//squaring
for(int i=0;i<n;i++){
arr[i]=arr[i]*arr[i];
}

int arr2[n]={0};

int l=0,h=n-1;
while(n>=0){
if(arr[l]<arr[h]){
    n--;
arr2[n]=arr[h];
h--;

}

else{
    n--;
    arr2[n]=arr[l];
l++;}

}



for(int i=0;i<orgn;i++){cout<<arr2[i]<<" ";}

}