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

    string reversed_word = word;  

    reverse(reversed_word.begin(),reversed_word.end());

    while(i<j)
    {
        if(word[i]!=word[j])
        {
            flag = false;
            break;
        }
        i++;
        j--;
    }


    int start = 0;
    while (start < reversed_word.size() && reversed_word[start] == '0') {
        start++;
    }
    reversed_word = reversed_word.substr(start);

    cout << reversed_word << endl;

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}