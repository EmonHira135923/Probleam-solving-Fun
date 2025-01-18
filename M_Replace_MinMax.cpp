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

    int mn_value,mx_value;
    mn_value = INT_MAX,mx_value = INT_MIN;
    int mn_index,mx_index;
    mn_index = 0,mx_index = 0;

    for(int i=0;i<N;i++)
    {
        if(value[i]<mn_value)
        {
            mn_value = value[i];
            mn_index = i;
        }
        if(value[i]>mx_value)
        {
            mx_value = value[i];
            mx_index = i;
        }
    }

    swap(value[mx_index],value[mn_index]);

    for(int i=0;i<N;i++)
    {
        cout << value[i] << " ";
    }
    cout << endl;
    

    return 0;
}