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

    vector<int> array(3),value(3);
    for(int i=0;i<3;i++)
    {
        cin >> array[i];
        value[i] = array[i];
    }

    sort(array.begin(),array.end());
    for(int i=0;i<3;i++)
    {
        cout << array[i] << endl;
    }
    cout << endl;
    for(int i=0;i<3;i++)
    {
        cout << value[i] << endl;
    }


    

    return 0;
}