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