#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

int main(){
    lli n ;
    cin >> n;
    lli a[n] ;
    for(int i = 0;i<n;i++){
        cin >>a[i] ;
    }
    sort(a,a+n) ;
    int count = 0;
    for(int i= 0;i<n;i++){
        if(a[i]!=a[i-1]){
            count++ ;
        }
    }
    cout<<count<<endl;
}