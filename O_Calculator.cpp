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
    char C;

    cin >> A >> C >> B;

    switch(C)
    {
        case '+':
            cout << A+B << endl;
            break;
        case '-':
            cout << A-B << endl;
            break;
        case '*':
            cout <<  A*B << endl;
            break;
        default:
            cout << A/B << endl;
            break;    

    }

    return 0;
}