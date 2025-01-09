#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

pair<int,int> solve(int a,int b,int c)
{
    int mx_value = max({a,b,c});
    int mn_value = min({a,b,c});

    return {mx_value,mn_value};
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x,y,z;
    cin >> x >> y >> z;

    pair<int,int> solve_value = solve(x,y,z);;


    cout << solve_value.second << " " << solve_value.first  << endl;


    return 0;
}