#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
class Student
{
    public:
        string Name;
        int Class;
        string Section;
        int  id;
        int  English; 
        int  Math;       
};
bool total_mark(Student a,Student b)
{
    int total_mark_a =  a.English+a.Math;

    int total_mark_b = b.English+b.Math;

    if(total_mark_a == total_mark_b)
    {
        return a.id < b.id;
    }
    return total_mark_a > total_mark_b;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;

    Student *Array = new Student[N];

    for(int i=0;i<N;i++)
    {
        cin >> Array[i].Name;
        cin >> Array[i].Class;
        cin >> Array[i].Section;
        cin >> Array[i].id;
        cin >> Array[i].English;
        cin >> Array[i].Math; 
    }
    sort(Array,Array+N,total_mark);
    for(int i=0;i<N;i++)
    {
        cout << Array[i].Name << " " << Array[i].Class << " " << Array[i].Section << " " << Array[i].id << " " << Array[i].English << " " << Array[i].Math << endl;
    }

    delete[] Array;

    return 0;
}