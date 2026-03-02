#include <iostream>
#include <ctime>

using namespace std;

//Simple Basic Linked List Generator using struct and for loop
struct Node{
    int data;
    Node* Link;

};

int main(){
    srand(time(NULL));
    Node* A = new Node();
    A->data = 5;
    A->Link = NULL;
    Node* temp1 = A;
    for(int i=0;i<=6;i++){
        Node* temp = new Node();
        temp->data = (rand()%7)+1;
        temp->Link = NULL;
        temp1->Link = temp;
        temp1 = temp;
    }
    Node* temp = A;
    while(temp->Link!=NULL){
        cout<<temp->data<<endl;
        temp = temp->Link;
    }
}