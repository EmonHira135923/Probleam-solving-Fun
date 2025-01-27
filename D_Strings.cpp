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

    string word,Word;
    cin >> word >> Word;

    cout << word.length() << " " << Word.size() << endl;
    cout << word << Word << endl;
    
    swap(word[0],Word[0]);

    cout << word << " " << Word << endl;
    


    return 0;
}