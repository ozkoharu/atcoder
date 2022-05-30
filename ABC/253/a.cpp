#include <bits/stdc++.h>
using namespace std;
 
int main(){
 int a, b, c;
  cin >> a >> b >> c;
  int sum = a + b + c;
  int max_i = max(max(a,b),c);
  int min_i = min(min(a,b),c);
  int med = sum-min_i-max_i;
  if ( med == b ){
       cout<<"Yes"<<endl;
  }else {
       cout<<"No"<<endl;
  }
return 0;
}