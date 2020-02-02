#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* link;
};
Node* head;
void insert(int); //at end
void print();
void del(int);
int main(){
    head = NULL;
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    print(); //2 4 6 8
    int n;
    cin>>n;
    del(n);
    print();
}
void insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = NULL;
    if(head == NULL) head = temp;
    else{
        Node* temp1 = head;
        while(temp1->link != NULL){
            temp1 = temp1->link;
        } 
        temp1->link = temp; 
    } 
}
void print(){
    Node* temp = head;
    while(temp != NULL){    //will become when last element reached since last link = NULL
        cout<<temp->data<<'\t';
        temp = temp->link;
    }cout<<'\n';
}
void del(int n){
    Node* temp1 = head;
    if(n == 1){
        head = temp1->link; //hesd 
        delete temp1;
        return;
    }
    for(int i = 0; i<n-2; i++){
        temp1 = temp1->link; //points to n-1th node
    }
    Node* temp2 = temp1->link;
    temp1->link = temp2->link; //n-1th node points to n+1th node i.e. link broken for nth node
    delete temp2;
}

