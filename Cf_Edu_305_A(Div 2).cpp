#include<bits/stdc++.h>
#define ll long long
#define mn 10000007
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);
  string s;int n;
  cin>>s>>n;int val=n;
  if(s.length()%n!=0){
    cout<<"NO"<<endl;}
  else{
  int len=s.length()/n;int count(0),count2(0),koli;
  while(n--)
  {
  string p=s.substr(count,len);
    count+=len;
    if( equal(p.begin(), p.begin() + p.size()/2, p.rbegin()) ){
    count2++;}
}
if(count2==val){cout<<"YES"<<endl;}
else cout<<"NO"<<endl;}
 
return 0;
 
}