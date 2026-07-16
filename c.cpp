#include<iostream>
#include<climits>
#include<unordered_map>
using namespace std;
int main(){

string s = "bbbbb";
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