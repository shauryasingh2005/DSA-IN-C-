//MAXIMUM SUM IN SUBARRAY OF LENGTH K
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n=10;
  int num[n]={1,0,8,2,6,3,4,10,9,5};
int k;
cout<<"enter k";
  cin>>k;
 int sum=0;
  int l=0,h=k-1;
  for(int i=0;i<k;i++){
    sum=sum+num[i];}
int max=sum;
  int ns=0;
  int j=1;
  while(h<n-1){
   /* if(h==n-1){l--;   h--;}
    l++; h++;*///mistake is that it turns itno infinit eloop as again and again it becomes 9 then l-- 8 then l++ 9 then agian condition applies and l--
l++;h++;

if(h==n-1){ns=sum+num[h]-num[l-1];}
    else{ns=sum+num[h]-num[l-1];}
    sum=ns;
  if(max<ns){max=ns;}
cout<<max<<endl;    
  }


}





//SMALLEST SUBARRAY WHICH IS GREATER THAN OR EQUAL TO SUM



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