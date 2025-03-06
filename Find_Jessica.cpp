#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string word;
    getline(cin,word);

    stringstream value_word(word);
    string value;

    bool found = false;

    while(value_word >> value)
    {
        if(value == "Jessica")
        {
            found = true;
            break;
        }
    }
    if(found) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}