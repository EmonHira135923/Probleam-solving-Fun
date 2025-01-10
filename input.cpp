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

    double a,b;
    cin >> a >> b;

    float x = a+1.50;
    float m = round(x);
    float y = b+1.50;
    float N  = round(y);

    int z = x/y;
    float Z = x/y;

    cout << z << " " << Z << endl;

    return 0;
}