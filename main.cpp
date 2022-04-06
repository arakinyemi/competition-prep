#include <bits/stdc++.h>
#define ll long long
using namespace std;


void weirdAlgorithm(ll n){
    cout << n <<" ";
    if (n == 1){
        return;
    }
    if(n % 2 == 0){
        n /= 2;
    }
    else {
        n = (3 * n) + 1;
    }
    weirdAlgorithm(n);


}
int main()
{
    ll n;
    cin >> n;
    weirdAlgorithm(n);

    return 0;
}
