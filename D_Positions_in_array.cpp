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
        if(value[i]<=10)
        {
            cout << "A" << "[" << i << "]" << " " << "=" << " " << value[i] << endl;
        }
        
    }

    

    return 0;
}