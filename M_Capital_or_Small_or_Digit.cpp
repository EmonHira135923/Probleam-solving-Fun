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

    char x;
    cin >> x;

    char digit = isdigit(x);
    char small = islower(x);
    char capital = isupper(x);

    if(isdigit(x)) cout << "IS DIGIT" << endl;
    else
    {
        cout << "ALPHA" << endl;
        
        if(isupper(x)) cout << "IS CAPITAL" << endl;
        else cout << "IS SMALL" << endl;
    }

    return 0;
}