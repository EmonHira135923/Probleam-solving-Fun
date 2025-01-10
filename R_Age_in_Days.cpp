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

    int N;
    cin >> N;

    int years,months,days;

    years = 0,months = 0,days = 0;

    for(int i=1;i<=N;i++)
    {
        if(N>=1 || N>=30 )
        {
            days++;
            if(days==30)
            {
                months++;
                days -= 30;
                if(months>=12)
                {
                    days -= 5;
                    months -= 12;
                    years++;
                }
            }
        }
    }

    cout << years << " " << "years" << endl << months << " " << "months" << endl << days << " " << "days" << endl;

    return 0;
}