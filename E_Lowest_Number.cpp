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

    vector<int> value(N);
    for(int i=0;i<N;i++)
    {
        cin >> value[i];
    }

    int index = 1;
    int mn_value = INT_MAX;

    for(int i=0;i<N;i++)
    {
        if(value[i]<mn_value)
        {
            mn_value = value[i];
            index = i+1;
        }
    }

    cout << mn_value << " " << index << endl;

    return 0;
}