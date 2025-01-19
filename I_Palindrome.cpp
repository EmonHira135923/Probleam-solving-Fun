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

    string word;
    cin >> word;

    int i,j;
    i = 0,j=word.size()-1;
    bool flag = true;

    while(i<j)
    {
        if(word[i]!=word[j])
        {
            flag = false;
        }
        i++;
        j--;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}