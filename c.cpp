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