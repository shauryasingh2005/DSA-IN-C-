//HASHING EXPALINED IN NOTES(PRECOMPUTAITON,FETCHING)

#include <iostream>
using namespace std;

int main(){
  int arr[4];
  for(int i=0;i<4;i++){
    cin>>arr[i];
}
/*precomputation*/
int hash[100000]={0};
/*hashing*/
for(int i=0;i<4;i++){
int j=arr[i];
hash[j]=hash[j]+1;
}
/*fetching*/
for(int i=0;i<100000;i++){
  if(hash[i]>0){
    cout<<i<<" "<<hash[i]<<endl;
  }
}}





//CHARACTER HASHING (ASCII VALUE,)
//HASHING EXPALINED IN NOTES(PRECOMPUTAITON,FETCHING)

#include <iostream>
using namespace std;

int main(){
  char arr[6];
for(int i=0;i<6;i++){
    cin>>arr[i];

}
/*precomputation*/
int hash[1000]={0};
int j;
/*hashing*/
for(int i=0;i<6;i++){
  j=arr[i]-'a';  
hash[j]++;   }
/*fetching*/
for(int i=0;i<6;i++){
    cout<<i<<" "<<hash[i]<<endl;}
  
  }




/************************************************************************************ */


// MAPPING
#include <iostream>
#include <map>/*requred for using maps for unordered just #include<unordered_map>*/
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  /*precomputation*/
  map<int, int> mpp; /*declaraction ;map<number,frequency>mapname       for unordered just wirte unordered_map<int, int> mpp;*/
  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }
  /*fetching*/
  int q;
  cin >> q;
  while (q--) {
    int key;
    cin >> key;
    cout << mpp[key] << endl; /*fetching the frequency of key from map*/
  }
}

/*
 * ======================================================================================
 * PRE-COMPUTATION LOGIC: Building the Frequency Map (The "Notebook")
 * ======================================================================================
 * We are using 'mpp' as a frequency counter to store occurrences of each
 * number. The operation 'mpp[arr[i]]++' performs two distinct logical steps in
 * one go:
 *
 * 1. THE SEARCH:
 * The '[]' operator looks for the current array number (arr[i]) in our map.
 * - If the number IS NOT in the map:
 * The map automatically creates a new row (a key-value pair) for it.
 * It initializes the frequency (value) to 0, then immediately applies the '++'.
 * - If the number IS ALREADY in the map:
 * The map fetches the existing frequency value stored at that key.
 *
 * 2. THE INCREMENT:
 * The '++' operator takes the value fetched (either the default 0 or the
 * existing tally) and increases it by 1.
 *
 * STEP-BY-STEP TRACE (Example: [1, 2, 3, 1, 3, 2, 12]):
 * --------------------------------------------------------------------------------------
 * i=0, arr[0]=1  | mpp[1]++ | 1 is new. Create row 1, set to 0, increment to 1.
 * i=1, arr[1]=2  | mpp[2]++ | 2 is new. Create row 2, set to 0, increment to 1.
 * i=2, arr[2]=3  | mpp[3]++ | 3 is new. Create row 3, set to 0, increment to 1.
 * i=3, arr[3]=1  | mpp[1]++ | 1 exists. Fetch 1, increment to 2.
 * i=4, arr[4]=3  | mpp[3]++ | 3 exists. Fetch 1, increment to 2.
 * i=5, arr[5]=2  | mpp[2]++ | 2 exists. Fetch 1, increment to 2.
 * i=6, arr[6]=12 | mpp[12]++| 12 is new. Create row 12, set to 0, increment
 * to 1.
 * --------------------------------------------------------------------------------------
 * Result: {1: 2, 2: 2, 3: 2, 12: 1}
 * ======================================================================================
 */