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

    bool flag = true;
    int i,j;
    i = 0;j=N-1;

    while(i<j)
    {
        if(value[i]!=value[j])
        {
            flag = false;
            break;
        }
        i++;
        j--;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}