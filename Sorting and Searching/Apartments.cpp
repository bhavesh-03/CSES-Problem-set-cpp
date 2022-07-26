#include <bits/stdc++.h>
#define lli long long int
#define li long int
#define ld long double
using namespace std;

int main(){
    lli n , m , k ;
    cin >> n>>m>>k ;
    vector <lli> a(n), b(m);
    for(int i = 0;i<n;i++){
        cin >>a[i];
    } 
    for(int i = 0 ;i<m;i++){
        cin >>b[i] ;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    lli count = 0 ;
    int i=0,  j = 0 ;
    while (i < n && j < m)
    {
        if (abs(a[i] - b[j]) <= k)
        {
            count++;
            i++;
            j++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    cout <<count<<endl ;
    
}