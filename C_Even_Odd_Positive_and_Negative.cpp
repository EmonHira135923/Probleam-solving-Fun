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

    int N;
    cin >> N;

    int a;

    int even,odd,pos,neg;
    even = 0,odd = 0,pos = 0,neg = 0;

    for(int i=1;i<=N;i++)
    {
        cin >> a;

        if(a%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if(a>0) pos++;
        else if(a<0) neg++;


    }

    cout << "Even: " << even << endl << "Odd: " << odd << endl << "Positive: " << pos << endl << "Negative: " << neg << endl;


    return 0;
}