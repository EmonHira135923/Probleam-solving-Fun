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

    vector<int> freq(26,0);

    for(int i=0;i<word.size();i++)
    {
        freq[word[i]-'a']++;
    }

    for(int i=0;i<word.size();i++)
    {
        if(freq[i]!=0)
        {
            cout << char(i+'a')  << " : " << freq[i] << endl;
        }
    }


         

    return 0;
}