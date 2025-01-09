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

    char word;
    cin >> word;

    char v = towlower(word);
    char V = toupper(word);

    if(isupper(word))
    {
        cout << v << endl;
    }
    else
    {
        cout << V << endl;
    }



    return 0;
}