#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A,B;
    cin >> A >> B;

    if(A%B==0) cout << "Multiples" << endl;
    else if(B%A==0) cout << "Multiples" << endl;
    else cout << "No Multiples" << endl;

    return 0;
}