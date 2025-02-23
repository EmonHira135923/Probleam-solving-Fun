#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{

    int N;
    cin >> N;
    int array[N];
    int Array[N];
    int sum_array[N];
    for(int i = 0; i < N; i++)
    {
        cin >> array[i];
    }
    for(int i = 0; i < N; i++)
    {
        Array[i] = array[i];
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            if(Array[i]>Array[j])
            {
                int temp;
                temp = Array[i] ;
                Array[i] = Array[j];
                Array[j] = temp ;
            }
        }
    }

    for(int i = 0; i < N; i++)
    {
        sum_array[i] = abs(array[i]) - abs(Array[i]);
    }
    for(int i = 0; i < N; i++)
    {
        cout << abs(sum_array[i]) << " ";
    }
    cout << endl;

}

int main()
{

    FASTIO;
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}