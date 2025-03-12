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
class Node
{
    public:
        int val;
        Node* Next;
        Node* Prev;
    Node(int val)
    {
        this->val = val;
        this->Next = NULL;
        this->Prev = NULL;
    }    
};

void insert_it_tail(Node*& Head,int val)
{
    Node* newnode = new Node(val);

    if(Head==NULL)
    {
        Head = newnode;
        return;
    }

    Node* tmp = Head;

    while(tmp->Next!=NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = newnode;

}

void print_it(Node* Head)
{
    Node* tmp = Head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->Next;
    }
    cout << endl;
}

int cnt_value(Node* Head)
{
    Node* tmp = Head;
    int cnt = 0;

    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->Next;
    }
    return cnt;
}

void find_middle_value(Node* Head)
{
    int cnt_val = cnt_value(Head);
    int mid_val = cnt_val/2;
    
    Node* tmp = Head;
    Node* prev = Head;

    for(int i=0;i<mid_val;i++)
    {
        prev = tmp;
        tmp = tmp->Next;

        //     cout << "Tmp : ->" <<  tmp->val << " " << "Prev : ->" << prev->val << endl;
    
    }

    if(cnt_val%2==0)
    {    
        cout << prev->val  << " " << tmp->val << endl;

    }
    else
    {
        cout << tmp->val << endl;
    }

}



void solve()
{

    Node* Head = NULL;
    while(true)
    {
        int val;
        cin >> val;

        if(val == -1) break;
        
        insert_it_tail(Head,val);
    }

    find_middle_value(Head);

    

}
int main()
{

    FASTIO;

    solve();

    return 0;
}