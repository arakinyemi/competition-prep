#include <bits/stdc++.h>
#include <set>
using namespace std;

int main()
{
   set<int>d;
   int n, elem;
   cout<<"How many numbers? ";
   cin >> n;
   cout<<"The numbers \n";
   for(int i = 0; i < n; i++){
    cin >> elem;
    d.insert(elem);
   }
   for(auto u : d){
    cout << u << " ";
   }
    return 0;
}
