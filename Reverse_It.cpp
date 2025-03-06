#include<bits/stdc++.h>
#include<string.h>
#include<string>
using namespace std;
class Student
{
    public:
        string Name;
        int Roll;
        string Section;
        int Mark;
};
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
        cin >> Array[i].Roll;
        cin >> Array[i].Section;
        cin >> Array[i].Mark;
    }
    for(int i=0;i<N-1;i++)
    {
        for(int j=i+1;j<N;j++)
        {
            swap(Array[i].Section,Array[j].Section);
        }
    }
    for(int i=0;i<N;i++)
    {
        cout << Array[i].Name << " " << Array[i].Roll << " " << Array[i].Section << " " << Array[i].Mark << endl;
    }
    delete[] Array;
    
    return 0;
}