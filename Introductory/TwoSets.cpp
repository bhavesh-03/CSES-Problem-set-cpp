#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;


int main(){
    int n  ;
    cin >> n;
    lli total ;
    total = (n*(n+1))/2 ;
    //cout<<total<<endl;
   //total = total / 2 ;
    if(!(total&1)){
        cout<<"YES"<<endl;
        total = total /2LL ;
        vector<lli> arr1 , arr2 ;
        while(n){
            if(total - n >= 0){
                arr1.push_back(n) ;
                total = total - n ;
            }else{
                arr2.push_back(n) ;
            }
            n-- ;
        }

        cout<<arr1.size()<<endl;
        for(lli x : arr1){
            cout<<x<<" " ;    
        }cout<<endl;
        cout<<arr2.size()<<endl;
        for(lli x :arr2){
            cout<<x<<" ";
        }cout<<endl;
        
    }else{
        cout<<"NO"<<endl;
    }
    return 0 ;

}




