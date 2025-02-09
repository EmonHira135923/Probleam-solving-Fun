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
int count_before_one(int arr[],int N)
{
    int cnt = 0;

    for(int i=0;i<N;i++)
    {
        if(arr[i]==1)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }
    return cnt;

}
int main()
{

    FASTIO;

    int N;
    cin >> N;

    int  value[N];
    for(int i=0;i<N;i++) cin >> value[i];

    int ans = count_before_one(value,N);

    cout <<  ans << endl;

    return 0;
}