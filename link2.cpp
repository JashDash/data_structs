#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void insert(int, int);
void print();
int main(){
    head = NULL;
    insert(1, 1); //1
    insert(5, 1); //5 1
    insert(10, 2); //5 10 1
    insert(15, 3); //5 10 15 1
    insert(20, 5); //5 10 15 1 20
    print();
    return 0;
}
void insert(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(n == 1){
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i = 0; i<n-2; i++){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
}
void print(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<'\t';
        temp = temp->next;
    }
}