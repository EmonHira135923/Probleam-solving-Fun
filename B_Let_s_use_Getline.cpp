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
    getline(cin,word);


    for(int i=0;word[i]!='\\';i++)
    {
        cout << word[i];
    }
    cout << endl;

    return 0;
}