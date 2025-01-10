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

    float a,b;
    cin >> a >> b;

    if(a>0 && b<0)
    {
        cout << "Q4" << endl;
    }
    else if(a>0 && b>0)
    {
        cout << "Q1" << endl;
    }
    else if(a==0 || b==0)
    {
        if(a==0 && b==0) cout << "Origem" << endl;
        else if(a>0 || a<0 && b==0) cout << "Eixo X" << endl;
        else cout << "Eixo Y" << endl;
    }
    else if(a<0 && b<0)
    {
        cout << "Q3" << endl;
    }
    else
    {
        cout << "Q2" << endl;
    }

    return 0;
}