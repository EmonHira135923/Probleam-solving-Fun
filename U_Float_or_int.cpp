#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
#include<string.h>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    float x;
    cin >> x;

    if(x==int(x)) cout << "int" << " " << int(x) << endl;
    else  cout << "float" << " " << int(x) << " " << fixed << setprecision(3) << float(x-int(x)) << endl;

    return 0;
}