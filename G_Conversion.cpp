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

    for(size_t i=0;i<word.size();i++)
    {
        if(isupper(word[i])) cout << char(tolower(word[i]));
        else if(word[i]==',') cout << " ";
        else if(islower(word[i])) cout << char(toupper(word[i]));
        else cout << word[i];
    }
    cout << endl;

    return 0;
}