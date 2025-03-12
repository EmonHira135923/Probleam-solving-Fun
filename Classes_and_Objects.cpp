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

class Student
{
    public:
        int val;

    Student(int val)
    {
        this->val = val;
    }    
};

int main()
{

    FASTIO;


    int t;
    cin >> t;

    vector<Student> value;

    for(int i=0;i<5;i++)
    {
        int val;
        cin >> val;
        value.push_back(Student(val));
    }

    int cnt = 0;
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum += value[i].val;
    }

    for(int j=1;j<t;j++)
    {
        int score = 0;
        for(int i=0;i<5;i++)
        {
            int v;
            cin >> v;
            score += v;
        }

        if(score > sum)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    

    



    // for(int i=0;i<5;i++)
    // {
    //     cout << value[i].val << " "; 
    // }
    // cout << endl;
        

    return 0;
}