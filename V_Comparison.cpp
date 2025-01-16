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

    int a,b;
    char s;

    cin >> a >> s >> b;

    switch(s)
    {
        case '=':
            if(a==b) cout << "Right" << endl;
            else cout << "Wrong" << endl;
            break;
        case '>':
            if(a>b) cout << "Right" << endl;
            else cout << "Wrong" << endl;
            break;
        case '<':
            if(a<b) cout << "Right" << endl;
            else cout << "Wrong" << endl;
            break;      
    }

    return 0;
}