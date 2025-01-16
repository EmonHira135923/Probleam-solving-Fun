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

    ll a,b,c;
    cin >> a >> b >> c;

    ll cnt = 0;
    ll mn_value_frist = min({a,b,c});

   

    cnt += mn_value_frist;
    
    a -= mn_value_frist;
    b -= mn_value_frist;
    c -= mn_value_frist;


    ll mn_value_secend = min(a/2,c);

    cnt += mn_value_secend;

    cout << cnt << endl;



    return 0;
}