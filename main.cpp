#include <stdlib.h>
#include <iostream>

using namespace std;
//function prototypes.
//a node holds marks and creates a linked list

//node structure
struct Node{
int exam;
Node *next; //create link to the next node.
}; //node to hold marks and create linked list

//functions and there uses.
int getListLength(Node *Q); //function to return the length of the list.
Node * createNode(int xam); //function that creates a node and returns it.
void populateList(Node *Head); //populate list.


void menufunction(){
cout<<"System function (Options)"<<endl;
cout<<"\t 1.Create the first node"<<endl;
cout<<"\t 2.Populate the link list"<<endl;
//other options to be added.
cout<<"\t 13. exit system"<<endl;
}
void menu(){
Node *mymk=new Node; //to be used to navigate to the other nodes together.
Node *Head= new Node; //creating the head node.
Node *Q= new Node;
Node *P =new Node;

//declaring system variables
int exam;
int nval,valbf; //variables to manipulate values
int numOfnodes=0; //initial value set to zero.
int length;
int options; //used for menu item selection.

//create message to prompt user to choose an option on the menu.
cout<<"Enter the option you want yo carry out"<<endl;
menufunction();
while(cin>>options)
{
switch(options){
case 1:
//checking if the first node is already created.
P=Head->next;
length=getListLength(P);
if(length>1){
cout<<"First node exist"<<endl;
break;
}
//create node..
P=createNode(10); //10 is the exam value to be passed to function create node.
Head->next=P;
cout<<"Node created successfully"<<endl;

break;
//second case.
case 2:
//populating new node.
populateList(Head);

    break;
case 13:
    exit(0);
    break;
}
}
}
//A function that creates a node and returns it.
Node * createNode(int xam){
Node *P;
P= new Node;
P->exam=xam;
P->next=NULL; //first Node -> next field set to NULL.
return P;
}
int getListLength(Node *Q){
//print Q
int listcount=0;
while(Q !=0){
listcount++;
Q=Q->next; //moving Q to the node.
}
return listcount;
}
//function to populate the list with random number of nodes.
void populateList(Node *Head){
//checking whether the list is already populated
Node *P=new Node;
P=Head->next;
int length=getListLength(P);
int exam;
int len=15+rand()%10;

//a loop to create 5 nodes and has them inserted at the beginning at a time
for(int i;i<=len;i++){
    if(length>1){
        //Using the length to check whether it is already populated
        cout<<"List is already populated"<<endl;
        break;
        }
        Node *T=new Node;
        //cout<<"Enter the new node exam value"<<endl;
        exam=10+rand()%90;
        T=createNode(exam);
        T->next=Head->next;
        Head->next=T;
 }
}
int main(){
//srand(time(0));
menu();
return 0;
}





