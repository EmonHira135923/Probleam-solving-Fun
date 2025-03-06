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

void insert_it_pos(Node* Head,int pos,int val)
{
    Node* newnode = new Node(val);
    Node* tmp = Head;
    for(int i=1;i<=pos-1;i++)
    {
       tmp = tmp->Next; 
    }
    newnode->Next = tmp->Next;
    tmp->Next = newnode;
}
void insert_it_head(Node*& Head,int val)
{
    Node* newnode = new Node(val);
    newnode->Next = Head;
    Head = newnode;
}

void delete_it_pos(Node* Head,int pos)
{
    Node* tmp = Head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp = tmp->Next;
    }
    Node* deletenode = tmp->Next;
    tmp->Next = tmp->Next->Next;
    delete deletenode;
}

void delete_it_head(Node*& Head)
{
    Node* deletehead = Head;
    Head = Head->Next;
    delete deletehead;
}

void print_linked_list(Node* Head)
{
    cout << "My Linked List : ";
    Node* tmp = Head;
    while(tmp!=NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->Next;
    }
    cout << endl;
}

int main()
{

    FASTIO;

    Node* Head = NULL;

    while(true)
    {
        int op;
        cin >> op;

        if(op==1)
        {
            int val;
            cin >> val;
            insert_it_tail(Head,val);
        }
        else if(op==2) print_linked_list(Head);
        else if(op==3)
        {
            int pos,val;
            cin >> pos >> val;
            if(pos==0) insert_it_head(Head,val);
            else insert_it_pos(Head,pos,val);
        }
        else if(op==4)
        {
            int val;
            cin >> val;
            insert_it_head(Head,val);
        }
        else if(op==5)
        {
            int pos;
            cin >> pos;
            if(pos==0) delete_it_head(Head);
            else delete_it_pos(Head,pos);
        }
        else if(op==6) delete_it_head(Head);
        else if(op==7) break;
    }


    // Node* Head = new Node(5);
    // Node* a = new Node(7);
    // Node* b = new Node(1);
    // Node* c = new Node(14);
    // Node* d = new Node(3);
    // Node* e = new Node(11);

    // Head->Next = a;
    // a->Next = b;
    // b->Next = c;
    // c->Next = d;
    // d->Next = e;

    // int sum = 0;
    // Node* tmp = Head;

    // while(tmp->Next != d)
    // {
    //     sum += tmp->val;
    //     tmp = tmp->Next;
    // }
    // sum -=  tmp->val;
    // cout << sum << endl;

    // Node* Head = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(30);
    // Node* c = new Node(40);
    // Node* d = new Node(50);

    // Head->Next = a;
    // a->Next = b;
    // b->Next = c;
    // c->Next = d;

    // Node* tmp = Head;

    // while(tmp!=NULL)
    // {
    //     cout << tmp->val << " ";
    //     tmp = tmp->Next;
    // }
    // cout << endl;

    

    return 0;
}