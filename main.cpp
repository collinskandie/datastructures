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
void printNodeValues(Node *Q); //A function Iterate through the list printing out the values
Node * searchNode(Node *T,int xam); //A function that searches for the node with that value xam. If the node is found it returns the pointer if not it returns NULL
int searchNode2(Node *T,int xam);
void insertNode(Node *T,int val,int xam);
void deleteFirstNode(Node *T, Node *H); //A function to delete the first node.The T node must be pointing to the first node ( Head) at the point of calling the function
void insertNodeAtBeginning(Node *Head,Node *H,int val); //A function to insert a node in the beginning.
void insertNodeAtEnd(Node *V,Node *T,int val); //A function to insert a node in the end.

void menufunction(){
cout<<"System function (Options)"<<endl;
cout<<"\t 1.Create the first node"<<endl;
cout<<"\t 2.Populate the link list"<<endl;
cout<<"\t 3.Print the Linked List Length"<<endl;
cout<<"\t 4.Print the node values"<<endl;
cout<<"\t 5.Search for a value in the list"<<endl;
cout<<"\t 6.Insert a value in the middle in Linked List"<<endl;
cout<<"\t 7.Insert a value in at the beginning of the Linked List"<<endl;
cout<<"\t 8.Insert a value in at the End of the Linked List"<<endl;
cout<<"\t 9.Deleting First Node of Linked List"<<endl;
cout<<"\t 10.Deleting Last Node of Linked List"<<endl;
cout<<"\t 11.Deleting In the Middle of Linked List"<<endl;
cout<<"\t 12.View This Menu"<<endl;
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
case 3:
     // Printing the Length of the Linked List
     mymk=Head->next;
     numOfnodes=getListLength(mymk);
     cout<<"THe length of the list is : "<<numOfnodes<<endl;
     break;
case 4:
    cout<<"Printing out Node values"<<endl;
    mymk=Head->next;
    printNodeValues(mymk);
    break;
case 5:
    //SERCHING FOR THE PRESCENCE OF A NODE
    cout<<"Searching for a node with a given values"<<endl;
    cout<<"Enter the node value you are searching for"<<endl;
    cin>>nval;
    Q=Head->next;
    searchNode2(Q,nval);
    break;
case 6:
    //INSERTING A NODE AT THE MIDDLE
    cout<<"Inserting a new node in the middle: Enter the value to insert"<<endl;
    nval;
    cin>>nval;
    cout<<"Enter the value to insert before"<<endl;
    cin>>valbf;
    Q->next=Head;
    insertNode(Q,nval,valbf);
    break;
case 7:
    //INSERTING A NODE AT THE Beginning
    cout<<"Inserting a new node at the beginning: Enter the value to insert"<<endl;
    cin>>nval;
    Q=Head->next;
    insertNodeAtBeginning(Head,Q,nval);
    break;
case 8:
    //INSERTING A NODE AT THE End
    cout<<"Inserting a new node the End"<<endl;
    cout<<"Enter the value to insert"<<endl;
    cin>>nval;
    Q=Head->next;
    P=Head->next;
    insertNodeAtEnd(P,Q,nval);
    break;
case 9:
    //DELETING THE FIRST NODE
    cout<<"Deleting The First Node"<<endl;
    Q=Head->next;
    deleteFirstNode(Q,Head);
    break;
case 10:
case 11:
case 12:

case 13:
    exit(0);
    break;
    //end of case section.
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
        cout<<"Enter the new node exam value"<<endl;
        exam=10+rand()%90;
        T=createNode(exam);
        T->next=Head->next;
        Head->next=T;
 }
}
//A function Iterate through the list printing out the values
void printNodeValues(Node *Q){
    int count=0;
    cout<<"Count\t Exam Value"<<endl;//Outputting Q data
    while(Q!=0){
            count++;
            cout<<count<<"\t"<<Q->exam<<endl;//Outputting Q data
            Q=Q->next; //moving to the next node
}}
//A function that searches for the node with that value xam. If the node is found it returns the pointer if not it returns NULL
Node * searchNode(Node *T,int xam){
    while(T->next){
            if(T->exam==xam){
                return T;
    break;
    }
    T=T->next;
    if(T->next==NULL){
            return NULL;
    break;
    }
}// end of while
}// end of function
//A simple search routine. It returns " a statement if the node is found or not"
int searchNode2(Node *T,int xam){
    // Note T is always set to the first node ( check with "cout<<T->exam<<endl;" after this comment
    while(T!=0){
            if(T->exam==xam){
                    cout<<"A Node with the value " <<xam<<" is found in the list"<<endl;
            break;
            }
            T=T->next;
            if(T->next==NULL){
                    if(T->exam==xam)
                    cout<<"A Node with the value " <<xam<<" is found in the list"<<endl;
            }else
            cout<<"No Node is found in the list"<<endl;
            break;}
}// end of function
/*A function to insert a node in the middle . The T node must be pointing to the first node ( Head) at the point of
calling the function
*/
void insertNode(Node *T,int val,int xam){
    Node * W=searchNode(T,xam);
    cout<<"Pointer node position"<< W->exam<<endl;
    if(W->next){
            Node * X=new Node;
            X->exam=val;
            X->next=W->next;
            W->next=X;
            cout<<"node Inserted Successfully"<<endl;
            }
            else{
                    cout<<"No node with tha value is found"<<endl;
            }
}// end of function
//A function to insert a node in the beginning.
void insertNodeAtBeginning(Node *Head,Node *H,int val){
    cout<<H->exam<<endl;
    if(H->next){
            Node * X=new Node;
            X->exam=val;
            X->next=Head->next;
            Head->next=X;
            cout<<"Node Inserted Successfully"<<endl;
            }
}// end of function
//A function to insert a node in the end.
void insertNodeAtEnd(Node *V,Node *T,int val){
    while(V->next){
            // If you replace this with T->next it will give you fragmentation error
            V=V->next; // Adjust point V first
            //T=T->next;//T must follow V
            if(V->next==NULL){
                // Adjust pointer V is at the last
                Node * X=new Node;
                X->exam=val;
                X->next=NULL;
                V->next=X;
                cout<<"Node Inserted Successfully"<<endl;
                break;
                }
                T=T->next;//T must follow V
        }// end of while
}// end of function

//A function to delete the first node.The T node must be pointing to the first node ( Head) at the point of calling the function
void deleteFirstNode(Node *T, Node *H){
    if(H->next){
            H->next=T->next;
            T->next=NULL;
            cout<<"Node to be deleted has an exam value of \t"<<T->exam<<endl;
            cout<<"Node deleted successfully"<<endl;
            delete T;
            }
}// end of function
int main(){
srand(time_t(0));
menu();
return 0;
}





