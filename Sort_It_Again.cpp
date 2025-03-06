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
        int  Math; 
        int  English;       
};
bool total_mark(Student a,Student b)
{
    if(a.English == b.English)
    {
        if(a.Math == b.Math)
        {
            return a.id < b.id;
        }
        return a.Math > b.Math;
    }
    return a.English > b.English;
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
        cin >> Array[i].Math; 
        cin >> Array[i].English; 
    }
    sort(Array,Array+N,total_mark);
    for(int i=0;i<N;i++)
    {
        cout << Array[i].Name << " " << Array[i].Class << " " << Array[i].Section << " " << Array[i].id << " " << Array[i].Math  << " " << Array[i].English << endl;
    }

    delete[] Array;

    return 0;
}