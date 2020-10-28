// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* addTwoLists(struct Node* first, struct Node* second);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
// } Driver Code Ends


/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

Node* revList(struct Node* h){
    if(h == NULL || h->next == NULL){
        return h;
    }
    Node* resList = revList(h->next);
    h->next->next = h;
    h->next = NULL;
    return resList;
}

int countNode(struct Node* h){
    int c= 0;
    while(h){
        c++;
        h = h ->next;
    }
    return c;
}

struct Node* addTwoLists(struct Node* first, struct Node* second)
{
    int c1 = countNode(first);
    int c2 = countNode(second);
    Node* f = first;
    Node* s = second;
    while(c1 > c2){
        Node* temp = new Node(0);
        temp->next = s;
        s = temp;
        c1--;
    }
    while(c2 > c1){
        Node* temp = new Node(0);
        temp->next = f;
        f = temp;
        c2--;
    }
    Node* revFirst = revList(f);
    Node* revSecond = revList(s);
    Node* res = NULL;
    int c = 0;
    while(revFirst && revSecond){
        int s = revFirst->data + revSecond->data + c;
        if(s>=10){
            s = s%10;
            c=1;
        } else {
            c=0;
        }
        Node* newNode = new Node(s);
        if(res == NULL){
            res = newNode;
        } else {
            newNode->next = res;
            res = newNode;
        }
        revFirst = revFirst -> next;
        revSecond = revSecond -> next;
    }
    if( c== 1){
        Node* newNode = new Node(1);
        newNode -> next = res;
        res = newNode;
    }
    return res;
    // Reverse the linkedList
    // insert from fromt in the resultant list
}
