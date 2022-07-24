#include <bits/stdc++.h>
using namespace std;
//time limit excedded
/*
int main() {
  long long int n ;
  cin >> n; 
  long long int value = 1 ;
  for(int i=n;i>1;i--){
    value  = value *i ;
  } 
  int zero = 0;
  while(value%10==0){
    zero = zero+1 ;
    value = value/10 ;
  }
  cout<<zero <<endl;
}
*/
int main(){
    int n  ;
    cin >> n;
    long int ans = 0 ;
    for(int i = 5 ;n/i>=1;i=i*5){
          ans = ans + n/i;
    }
    cout<<ans <<endl;
}




