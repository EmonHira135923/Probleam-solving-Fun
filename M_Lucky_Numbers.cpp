#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

bool solve(int N)
{
    while(N>0)
    {
        int digit = N%10;
        if(digit != 4 && digit != 7) return false;
        N /= 10;
    }
    return true;
}

int main()
{

    FASTIO;

    ll a,b;
    cin >> a >> b;

    bool flag = false;

    for(int i=a;i<=b;i++)
    {
        if(solve(i))
        {
            flag = true;
            cout << i << " ";
        }
    }
    
    if(!flag) cout << "-1" << endl;

    return 0;
}