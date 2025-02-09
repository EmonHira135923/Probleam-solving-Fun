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
void solve()
{

    int N;
    cin >> N;

    int sp,st;
    sp = N-1,st=1;

    for(int i=1;i<=(2*N)-1;i++)
    {
        for(int j=1;j<=sp;j++)
        {
            cout << " ";
        }
        for(int j=1;j<=st;j++)
        {
            if(i%2==0)
            {
                cout << "-";
            }
        }
        for(int j=1;j<=st;j++)
        {
            if(i%2!=0)
            {
                cout << "#";
            }
        }
        if(i<=N-1)
        {
            sp--;
            st+=2;
            cout << endl;
        }
        else
        {
            sp++;
            st-=2;
            cout << endl;
        }
    }

}
int main()
{

    FASTIO;

    solve();

    return 0;
}