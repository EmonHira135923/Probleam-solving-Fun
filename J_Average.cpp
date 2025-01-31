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
double solve(vector<double>&value,double N)
{

    double sum = 0;
    for(int i=0;i<N;i++)
    {
        sum += value[i];
    }

    return sum/N;

}
int main()
{

    FASTIO;

    double N;
    cin >> N;

    vector<double> value(N);
    for(int i=0;i<N;i++) cin >> value[i];

    double ans = solve(value,N);

    cout << fixed << setprecision(7) << ans << endl;

    return 0;
}