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

    if(x>=0 && x<=25.00) cout << "Interval [0,25]" << endl;
    else if(x>=25.01 && x<=50.00) cout << "Interval (25,50]" << endl;
    else if(x>75.01 && x<=100.00) cout << "Interval (75,100]" << endl;
    else if(x>=101.01 && x<=2000.00) cout << "Out of Intervals" << endl;
    else if(x<0) cout << "Out of Intervals" << endl;
    else cout << "Interval (50,75]" << endl;

    return 0;
}