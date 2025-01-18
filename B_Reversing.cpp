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
    for(int i=0;i<N;i++) cin >> value[i];

    for(int i=0;i<N;i++)
    {
        if(value[i]==0) reverse(value.begin(),value.begin()+i);
    }


    for(int ans : value)
    {
        cout << ans << " ";
    }
    cout << endl;



    return 0;
}