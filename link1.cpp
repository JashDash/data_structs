#include <iostream>
using namespace std;
struct Node{    //can be placed in a class
    int data;
    Node* link;
};
 void insert(int);
 void print();
Node* head; //global head so that it can be used without passing as an argument
int main(){
    head = NULL;
    int N;
    cout<<"Enter the no of elements in the list: ";
    cin>>N;
    for(int i = 0; i<N; i++){
        int x;
        cout<<"Enter element: ";
        cin>>x;
        insert(x);
        print();
        cout<<'\n';

    }
    
    return 0;
}
void insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = head;  //link points to where the head is pointing i.e. first element
    head = temp;    //new head of list
}
void print(){
    Node* temp = head;
    while(temp != NULL){    //will become when last element reached since last link = NULL
        cout<<temp->data<<" ";
        temp = temp->link;
    }
}
