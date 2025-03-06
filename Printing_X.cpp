#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve()
{

    int N;
    cin >> N;

    for (int i = 0; i < N / 2; i++) 
    {
        for (int j = 0; j < i; j++) 
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < N - 2 * (i + 1); j++) 
        {
            cout << " ";
        }
        cout << "/" << endl;
    }
    for (int i = 0; i < N / 2; i++) {
        cout << " ";
    }
    cout << "X" << endl;
    for (int i = N / 2 - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < N - 2 * (i + 1); j++) {
            cout << " ";
        }
        cout << "\\" << endl;
    }

}
int main()
{

    FASTIO;

    solve();

    return 0;
}