#include<bits/stdc++.h>
using namespace std;


class Node{
public:
	int data;
	Node* next;

	Node(int n){
		data=n;
		next=NULL;
	}
};

void insertAtHead(Node * &head ,int n){
	Node * temp=head;
	Node *newNode=new Node(n);
	newNode->next=temp;

	head=newNode;

}


void display(Node* &head){
	Node*temp= head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp=temp->next;
	}
}

void insertAtTail(Node* &head ,int data){
	Node *temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	Node* newNode=new Node(data);
	temp->next=newNode;

}

int main(){

	Node *head=NULL;

	insertAtHead(head,5);
	insertAtHead(head,6);
	insertAtHead(head,7);
	insertAtHead(head,8);

	insertAtTail(head,10);
	insertAtTail(head,12);
	display(head);


}