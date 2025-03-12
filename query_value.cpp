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

void insert_it_pos(Node*& Head,int pos,int val,bool& flag)
{
    Node* newnode = new Node(val);
    Node * tmp = Head;

    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->Next;
        if(tmp==NULL)
        {
            cout << "Invalid" << endl;
            delete newnode;
            flag = false;
            return;
        }
    }
    newnode->Next = tmp->Next;
    tmp->Next = newnode;
    flag = true;
}

void insert_it_Head(Node*& Head,int val)
{
    Node* newnode = new Node(val);
    newnode->Next = Head;
    Head = newnode;    
}

void print_it(Node* Head)
{
    Node* tmp = Head;

    while(tmp!=NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->Next;
    }
    cout << endl;
}

void solve()
{

   Node* Head = NULL;
   int val;
   
   while(true)
   {
        cin >> val;
        if(val == -1) break;

        insert_it_tail(Head,val);
   }
   int q;
   cin >> q;
   while(q--)
   {
        int pos,v;
        cin >> pos >> v;
        bool flag = true;

        if(pos==0) insert_it_Head(Head,v);
        else insert_it_pos(Head,pos,v,flag);
        if(flag) print_it(Head);
   }
//    print_it(Head);
   

}
int main()
{

    FASTIO;

    solve();

    return 0;
}