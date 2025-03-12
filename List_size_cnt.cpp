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
    while(tmp->Next != NULL)
    {
        tmp = tmp->Next;
    }
    tmp->Next = newnode;

}

int size_cnt(Node* Head)
{
    Node* tmp = Head;
    int cnt = 0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp = tmp->Next;
    }

    return cnt;
}

int main()
{

    FASTIO;

    Node* Head = NULL;
    int val;
    
    while(1)
    {
        cin >> val;
        if(val==-1) break;
        
        insert_it_tail(Head,val);
    }
    
    int result = size_cnt(Head);

    cout << result << endl;


    return 0;
}