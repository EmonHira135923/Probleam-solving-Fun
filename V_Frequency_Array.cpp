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

    int N,M;
    cin >> N >> M;

    vector<int> value(N);
    for(int i=0;i<N;i++)
    {
        cin >> value[i];
    }

    vector<int> freq(M+1,0);
    for(int i=0;i<N;i++)
    {
        freq[value[i]]++;
    }

    for(int i=1;i<=M;i++)
    {

        cout << freq[i] << endl;

    }

    return 0;
}