#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};

struct Node *head=NULL;

void insertAtBeginning(int data)
{
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
	
	new_node->data=data;
	new_node->next=head;
	head=new_node;
}

void insertAfter(int nodeafter,int data)
{
	struct Node *temp;
	temp=head;
	
	if (head==NULL){
		cout<<"list can't be inserted"<<endl;
	}
	else
	{
		while(temp->data!=nodeafter){
			temp=temp->next;
			if(temp==NULL){
				cout<<"list can't be inserted"<<endl;
				return;
			}
		}
		struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
		new_node->data=data;
		new_node->next=temp->next;
		temp->next=new_node;		
	}
}

void insertAtEnd(int data)
{
	struct Node *temp;
	temp=head;
	
	struct Node *new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->next=NULL;
	
	if(head==NULL)
	{
		head=new_node;
	}
	else{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=new_node;
	}
}

void printList(){
	struct Node*ptr;
	ptr=head;
	
	while(ptr!=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl;
}

int main() {

   insertAtBeginning(1);
   cout<<"After Inserting at Beginning: ";
   printList();

   insertAtBeginning(7);
   cout<<"After Inserting at Beginning: ";
   printList();

   insertAtEnd(14);
   cout<<"After Inserting at End: ";
   printList();

   insertAfter(7, 15);
   cout<<"After Inserting after node 7: ";
   printList();

   insertAfter(1, 20);
   cout<<"After Inserting after node 1: ";
   printList();
   return 0;

}


