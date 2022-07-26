#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >>t;
    while(t--){
        long long int y , x;
        cin >> y>>x ;
        long long int ans = 0 ;
        
        //row greater
        
        if(y>x){
            if(y%2==0){
                ans=(y*y)-(x-1);
            }else{
               long long int newr = ((y-1)*(y-1))+1;
               ans = newr + (x-1) ; 
            }
        }

        //column greater
        if(x>y){
            if(x%2==0){
                long long int newy = ((x-1)*(x-1))+1  ;
                ans = newy + (y-1) ;
            }else{
                ans = (x*x) - (y-1) ;
            }
        }
        
        if(x==y){
                ans = (x*x)-(x-1) ;

        } 
        cout<<ans<<endl; 
    
    }
    return 0;
}





