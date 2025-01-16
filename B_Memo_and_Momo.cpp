#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

int main()
{
    FASTIO;

    ll a,b,K;
    cin >> a >> b >> K;

    if(a%K==0 && b%K!=0) cout << "Memo" << endl;
    else if(b%K==0 && a%K !=0) cout << "Momo" << endl;
    else if(a%K==0 && b%K==0) cout << "Both" << endl;
    else if(a%K !=0 && b%K!=0) cout << "No One" << endl;

    return 0;
}