#include<bits/stdc++.h>
#include<string.h>
#include<string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
#define FASTIO ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
// vector<int> value(vector<int>& ans,int N)
// {
//     for(int i=0;i<N;i++)
//     {
//         cout << ans[i] << " ";
//     }
//     cout << endl;

//     return ans;
// }

// class student
// {
//     public:
//         string Name;
//         int roll;
//         float mark;

//     student(string Name,int roll,int mark)
//     {
//         this->Name = Name;
//         this->roll = roll;
//         this->mark = mark;
//     }    
// };

// student solve()
// {

//     student emon("Emon Hossain Hira",189123,25);
//     return emon;

// }

// student *solve()
// {
//     student *Emon = new student("Emon Hossain Hira",189123,25);

//     return Emon;
// }



int main()
{

    FASTIO;

    // string word;
    // cin >> word;

    // int pos;
    // cin >> pos;

    // int ans;
    // cin >> ans;

    // cout << word.erase(pos,ans) << endl;
    






    //  Crate Class 

    // student ans = solve();
    // student ans("Emon Hossain Hira",189123,50);

    // cout << ans.Name << " " << ans.roll << " " << ans.mark << endl;

    
    //  Create Dynamic Class


    // student *Emon = new student("Emon Hossain Hira",189123,25);

    // cout << Emon->Name << " " << Emon->roll << " " << Emon->mark << endl;

    // student *Emon = solve();

    // cout << Emon->Name << " " << Emon->roll << " " << Emon->mark << endl;

    // delete Emon;





    // Create Dynamic Array 

    // int N;
    // cin >> N;
    // int *a = new int [N];
    // for(int i=0;i<N;i++)
    // {
    //     cin >> a[i];
    // }
    // for(int i=0;i<N;i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    




    // int N;
    // cin >> N;
    // vector<int> val(N);
    // for(int i=0;i<N;i++) cin >> val[i];

    // value(val,N);


    // int N,M;
    // cin >> N >> M;

    // vector<vector<int>> value(N,vector<int>(M));
    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<M;j++)
    //     {
    //         cin >> value[i][j];
    //     }
    // }

    // Zero Matrix ::->

    // int element = N*M;
    // int cnt = 0;

    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<M;j++)
    //     {
    //        if(value[i][j]==0) cnt++; 
    //     }
    // }
    
    // if(element==cnt) cout << "YES" << endl;
    // else cout << "NO" << endl;



    // row ->

    // int x;
    // cin >> x;

    // for(int i=0;i<M;i++)
    // {
    //     cout << value[x][i] << " ";
    // }
    // cout << endl;


    // coluem ->

    // int x;
    // cin >> x;

    // for(int i=0;i<N;i++)
    // {
    //     cout << value[i][x] << " ";
    // }
    // cout << endl;

    // Primary Diagonal Matrix ::->

    // bool flag = true;
    // if(N != M)
    // {
    //     flag = false; 
    // }

    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<M;j++)
    //     {
    //         if(i==j)
    //         {
    //             continue;
    //         }
    //         if(value[i][j] != 0)
    //         {
    //             flag = false;
    //         }
    //     }
    // }

    // if(flag) cout << "Primary Matrix" << endl;
    // else cout << "No Primary Matrix" << endl;


    // Secendary Matrix :: ->

    // bool flag = true;
    // if(N!=M)
    // {
    //     flag = false;
    // }

    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<M;j++)
    //     {
    //         if(i+j==N-1)
    //         {
    //             continue;
    //         }
    //         if(value[i][j] != 0)
    //         {
    //             flag = false;
    //         }
    //     }
    // }

    // if(flag) cout << "Secendary Matrix" << endl;
    // else cout << "No Secendary Matrix" << endl;
    
    // Scaler Matrix :: ->

    // bool flag = true;

    // if(N!=M) flag = false;

    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<M;j++)
    //     {
    //         if(i==j)
    //         {
    //             if(value[i][j]!=value[0][0]) flag = false;
    //         }
    //         else if(value[i][j] != 0) flag = false;
    //     }
    // }

    // if(flag) cout << "Scaler Matrix" << endl;
    // else cout << "Not Scaler Matrix" << endl;

    // Unit Matrix :: ->

    // bool flag = true;
    // if(N!=M) flag = false;

    // for(int i=0;i<N;i++)
    // {
    //     for(int j=0;j<M;j++)
    //     {
    //         // if(i==j)
    //         // {
    //         //     if(value[i][j] != 1) flag = false;
    //         // }

    //         if(i+j==N-1)
    //         {
    //             if(value[i][j] != 1) flag = false;
    //         }
    //         else if(value[i][j] != 0) flag = false;
    //     }
    // }

    // if(flag) cout << "Unit Matrix" << endl;
    // else cout << "Not Unit Matrix" << endl;





    


    return 0;
}