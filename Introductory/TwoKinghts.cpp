#include <bits/stdc++.h>
using namespace std;

int main() {
    
        long long int y ;
        cin >> y ;
        long long int ans = 0 ;
        
        for(int i=1;i<y;i++){
            long long int possi_combi = ((i*i*i*i)-(i*i))/2 ;  //total possible combination
            long long int possi_attact = 4*(i-1)*(i-2) ;    //Attacking possiblity for kinights (movement in 2*3)
            cout<<possi_combi -possi_attact<<endl;
        }
    return 0;
}





