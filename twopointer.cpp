//SUM OF ARRAY
#include<iostream>
using namespace std;

int main() {
    int arr[5] = {13, 24, 52, 20, 9};
    int i = 0, j = 4;
    int s1 = 0, s2 = 0;
    
    
    while(i < j) { 
        s1 = s1 + arr[i];
        s2 = s2 + arr[j];
        i++; 
        j--;
    }
    
    int sum = s1 + s2;
    if(i == j) {
        sum = sum + arr[i];
    }
    
    cout << "sum of array is " << sum;
    return 0;
}


//TWO SUM PROBLEM TO GE TTHE NUMBER WHICH SUM AND GIVE TARGET
#include<iostream>
using namespace std;
int sort(int arr[5],int si){/*sorting is important as it helps in two pointer method from first and last point expalined in phone*/
  int min=si;
  for(int i=si;i<5;i++){if(arr[i]<arr[min]){min=i;}}
  int temp=arr[min];
  arr[min]=arr[si];
  arr[si]=temp;
}

int main(){
   int arr[5]={13,24,52,20,9};
   int target;
   cin>>target;
   int q=5;
   int si=0;
while(q--) { sort(arr,si);
si++;}
for(int i=0;i<5;i++){cout<<arr[i]<<" "<<endl;}

int i=0,j=4;
while(i<j){
  if(arr[i]+arr[j]==target){cout<<arr[i]<<"+"<<arr[j];
  return 0;}

if(arr[i]+arr[j]>target){j--;}
else{i++;}
}
return -1;
}







//REVERSE AN ARRAY 
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






   //FIND DUPLICATES IN AN ARRAY
   #include<iostream>
using namespace std;
int main(){
    int arr[8]={1,1,1,2,2,3,3,3};
    int o=0;
     int co=o;
      int si=0;
    while(o<=2){
        cout<<arr[o];
       
      int co=si;
        while(co<=7){
             co++;

            if(arr[co]!=arr[o]){o++;
                si=co;
            arr[o]=arr[co];
            
        break;}
        else{continue;}
    }}
       
}




//SUM OF SQUARES
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={-5,-2,-1,2,3};
    vector<int>pos;
    vector<int>neg;
    /*seperating pos and neg eleements*/
    for(int i=0;i<5;i++){
        if(arr[i]>=0){pos.push_back (arr[i]);}
        else{neg.push_back (arr[i]);}
    }
    
/*square(for which we need size of neg and pos array to traverse it)*/
int ps=pos.size();
int ns=neg.size();
int prod=1;
for(int i=ns+1;i<ps;i++){
    prod=arr[i]*arr[i];
    pos.push_back (arr[i]);
cout<<arr[i]<<endl;}
cout<<endl;
for(int i=0;i<ns;i++){
    prod=arr[i]*arr[i];
    neg.push_back (arr[i]);
cout<<arr[i];}

/*in case of 0 positive or negative elements to print array as its is*/
if(ps==0){for(int i=0;i<5;i++){
    prod=arr[i]*arr[i];}}
    else{for(int i=0;i<5;i++){
    prod=arr[i]*arr[i];}}
  
 /*merge and sort two arrays*/
 vector<int>res;/*res for resultant array*/   
 int l=0;/*left pointer */
    int r=ns;/*right pointer*/
    while(l<ns && r<ps){
        if(arr[l]<arr[r]){res.push_back(arr[l]);
        l++;}
        else{res.push_back(arr[r]);
            r++;}
    }

    while(l<ns){
        {res.push_back(arr[l]);
        l++;}
    }
while(r<ps){
        {res.push_back(arr[r]);
        r++;}
    }

for(int i=0;i<5;i++){
    cout<<res[i];
}}




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

for(int i=0;i<n-2;i++){/*as iteration l<r and at last l=8,hence i would be 7(n-2)*/
  if(arr[i]==arr[i+1]){i++;}

  int l=i+1;
  int r=n-1;
  if(arr[l]==arr[i]||arr[l]==arr[r]){l++;}/*to ensure no duplicacy*/
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


  





//SORTING COLORS WITHOUT ACTYUALLY SORTING(dutch flag)
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
            co0--;/*co-- ho rha as pehl count kiya 2 times0 hai so co--  phir 2 baar print kiya */
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


// 3SUM SMALLEST
// Given an array of n integers and a target, find the number of index triplets i, j, k
// with 0 <= i < j < k < n that satisfy the condition: nums[i] + nums[j] + nums[k] < target
#include <vector>
#include <algorithm>
#include <iostream>

class Solution3SumSmallest {
public:
    int threeSumSmallest(std::vector<int>& nums, int target) {
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        int count = 0;
        
        for (int i = 0; i < n - 2; i++) {
            int l = i + 1;
            int r = n - 1;
            while (l < r) {
                if (nums[i] + nums[l] + nums[r] < target) {
                    // If nums[i] + nums[l] + nums[r] < target, then for all index k from l to r,
                    // nums[i] + nums[l] + nums[k] < target since the array is sorted.
                    count += (r - l);
                    l++;
                } else {
                    r--;
                }
            }
        }
        return count;
    }
};


// DUTCH NATIONAL FLAG ALGORITHM (One-pass Sort Colors using 3 Pointers)
// Classifies elements into three groups: 0s (red), 1s (white), and 2s (blue)
class SolutionDNF {
public:
    void sortColors(std::vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        
        while (mid <= high) {
            if (nums[mid] == 0) {
                std::swap(nums[low], nums[mid]);
                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { // nums[mid] == 2
                std::swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};




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