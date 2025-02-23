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
class Student
{
    public:
        int id;
        string Name;
        string section;
        int mark;
    Student(int id,string Name,string section,int mark)
    {
        this->id = id;
        this->Name = Name;
        this->section = section;
        this->mark = mark;
    }    
};

void solve()
{

    string name_a,name_b,name_c,section_a,section_b,section_c;
    int id_a,id_b,id_c,mark_a,mark_b,mark_c;
    
    cin >> id_a;
    cin.ignore();
    cin >> name_a;
    cin >> section_a;
    cin >> mark_a;
    Student *Emon = new Student(id_a,name_a,section_a,mark_a);

    cin >> id_b;
    cin.ignore();
    cin >> name_b;
    cin >> section_b;
    cin >> mark_b;
    Student *akib = new Student(id_b,name_b,section_b,mark_b);

    cin >> id_c;
    cin.ignore();
    cin >> name_c;
    cin >> section_c;
    cin >> mark_c;
    Student *sakib = new Student(id_c,name_c,section_c,mark_c);


    Student *mark_higest = Emon;
    Student *id = Emon;

    if(mark_higest->mark < akib->mark || (mark_higest->mark == akib->mark && mark_higest->id > akib->id))
    {
        mark_higest = akib;
    }
    if(mark_higest->mark < sakib->mark || (mark_higest->mark == sakib->mark && mark_higest->id > sakib->id ))
    {
        mark_higest = sakib;
    }


    cout << mark_higest->id << " " << mark_higest->Name << " " << mark_higest->section << " " << mark_higest->mark << endl;





}
int main()
{

    FASTIO;

    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}