#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    cin.ignore();

    while(t--)
    {
        string word;
        cin >> word;

        string x;
        cin >> x;
        cin.ignore();

        while(word.find(x) != -1 )
        {
            word.replace(word.find(x),x.length(),"#");
        }

        cout << word << endl;
    }
    

    return 0;
}
