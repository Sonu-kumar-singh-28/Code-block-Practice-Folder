#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(){
    this->data = 0;
    this->next = NULL;
  }

  Node(int data){
    this->data =data;
    this->next = NULL;
  }
};

void insertathead(Node* &head, Node* &tail, int data){
  Node* newnode = new Node(data);
  if(head== NULL){
    head = newnode;
    tail= newnode;
  }else{
    newnode->next = head;
    head = newnode;
  }
}

void insertattail(Node* &head, Node* &tail, int data){
  Node* newNode = new Node(data);
  if(tail ==NULL){
    head = newNode;
    tail = newNode;
  }else{
    tail->next = newNode;
    tail = newNode;
  }
}

// function for find length for last node insert

int findlength(Node* &head){
    int len =0 ;
    Node*temp  = head;
    while(temp!=NULL){
        temp= temp->next;
        len++;
    }
    return len;
}
void insertatposition(int position, Node* &head, Node* &tail, int data){
Node* newnode = new Node(data);
if(head == NULL){
    head = newnode;
    tail = newnode;
    return;
}
if(position == 0){
        insertathead(head, tail, data);
        return;
    }

    // last node insert
    int len = findlength(head);
    if(position >= len){
        insertattail(head, tail, data);
        return;
    }

// insert at middle
int i=1;
Node* prev = head;
while(i<position){
    prev = prev->next;
    i++;
}
Node* curr = prev->next;

newnode->next = curr;
prev->next = newnode;
}



void print(Node* head){
  Node* temp = head;
  while(temp!= NULL){
    cout<<temp->data<< " " << endl;
    temp = temp->next;
  }
}

int main(){
  Node* head = NULL;
  Node* tail = NULL;
  insertathead(head,tail,10);
  insertathead(head,tail,10);
  insertathead(head,tail,10);
  insertathead(head,tail,10);
  insertattail(head, tail,100);
  print(head);
  insertatposition(4,head,tail,115);
  print(head);
}
