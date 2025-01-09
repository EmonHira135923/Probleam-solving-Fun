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

    for(int i=1;i<=N;i++)
    {
        if(N%i==0)
        {
            cout << i << endl;
        }
    }

    return 0;
}