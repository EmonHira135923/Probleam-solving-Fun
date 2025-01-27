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

    int N;
    cin >> N;

    int sp,st;
    sp = N-1;
    st = 1;

    for(int i=1;i<=2*N;i++)
    {
        for(int i=1;i<=sp;i++)
        {
            cout << " ";
        }
        for(int i=1;i<=st;i++)
        {
            cout << "*";
        }
        if(i==N)
        {
            sp+=0;
            st-=0;
        }
        else if(i>N)
        {
            sp++;
            st -= 2;
        }
        else
        {
            sp--;
            st += 2;
        }
        cout << endl;

    }

    return 0;
}

