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

    int N;
    cin >> N;

    int sp,st;
    sp = N-1,st=1;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            cout << " ";
        }
        for(int j=1;j<=st;j++)
        {
            cout << "*";
        }
        sp--;
        st += 2;
        cout << endl;
    } 

    return 0;
}