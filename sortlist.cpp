#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next=nullptr;
    Node(int val){
        data=val;
    }
};

int createArray(Node* head){
    int n=0;
    Node* temp=head;

    while (temp!=nullptr)
    {
        n++;
        temp=temp->next;
    }
    return n;
    
}
int main()
{
    Node* head=new Node(10);
    head->next=new Node(40);
    head->next->next=new Node(20);
    head->next->next->next=new Node(5);
    head->next->next->next->next=nullptr;

    while(head!=nullptr){
        cout<<head->data<<" ";
        head=head->next;
    }

    int num=createArray(head);
    cout<<"\n"<<num;
    return 0;
}