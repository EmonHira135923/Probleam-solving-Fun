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

void cnt_duplicate(Node* Head)
{
    Node* tmp = Head;
    vector<int> freq(101,0);
    bool flag = false;
    while(tmp!=NULL)
    {
        freq[tmp->val]++;
        tmp = tmp->Next;
    }

    for(int i=0;i<freq.size();i++)
    {
        if(freq[i]!=0 && freq[i] >= 2 )
        {
           flag = true;
           break;
        }    
    }
    if(!flag) no
    else yes
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
    cnt_duplicate(Head);
    



    return 0;
}