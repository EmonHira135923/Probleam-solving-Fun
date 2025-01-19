#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
using namespace std;

void solve()
{
    string word;
    cin >> word;

    if(word.size()<=10) cout << word << endl;
    else cout << word[0] << word.size()-2 << word[word.size()-1] << endl;
}

int main()
{

    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}