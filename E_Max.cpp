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

    vector<int> myvalue(N);
    for(int i=0;i<N;i++) cin >> myvalue[i];

    sort(myvalue.rbegin(),myvalue.rend());

    for(int i=0;i<N;i++)
    {
        cout << myvalue[0];
        break;
    }

    return 0;
}