#include <iostream>
#define ll unsigned long long
using namespace std;


ll factorial(int n){
    if (n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n-1);

}


ll combination(int n, int k){
    ll com = factorial(n) / (factorial(k)* factorial(n-k));
    return com;
}

void printPascal(int n){
    cout << 1 << endl;

    for (int line = 1; line <= n-1; line++){
        for (int i = 0; i <= line; i++){
            cout << combination(line, i)<<" ";
        }
    cout<<endl;
    }

}
int main()
{
    int numRows;
    cin>>numRows;
    printPascal(numRows);
    return 0;
}
