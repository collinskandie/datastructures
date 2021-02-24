#include <stdlib.h>
#include<iostream>
using namespace std;
//FUNCTION PROTOTYPES
//Anode to hold marks and create a linked list
struct Node{
int exam;
Node *next;//Note the use of * to create a pointer
};
//A function to Create and return a node with a value passed
Node * createNode(int xam);
//A function that inserts a node in a linked list at the middle. It first calles the function serchNode() with serches for the
//prescence of the node
void insertNode(Node *,int a ,int b);
//A function that searches for the node with that values. If the node is found it returns the pointer if not it returns NULL
Node * searchNode(Node *T,int xam);
//A simple search routine. It returns " a statement if the node is fopund or not"
int searchNode2(Node *T,int xam);
//A Function to print out Node values
void printNodeValues(Node *Q);
//A function to delete the first node.The T node must be pointing to the first node ( Head) at the point of calling the function
void deleteFirstNode(Node *T, Node *L);
/*A function to delete the last node.The T node must be pointing to the first node ( Head)
at the point of calling the function and V must be one point ahead of T
*/
void deleteLastNode(Node *T,Node *V);
/*A function to delete the the node after the node whose value is given.T must be pointing to the first node ( Head)
at the point of calling the function and V must be one point ahead of T and is pointing at the node to be deleted
*/
void deleteMiddleNode(Node *T,Node *V,int val);
// A function to return the lenbgth of the linked list
int getListLength(Node *Q);
// A function to Insert A node at the Beginning
void insertNodeAtBeginning(Node *Head,Node *H,int val);
// A function to Insert A node at the End
void insertNodeAtEnd(Node *V,Node *T,int val);
//A function to print system menus
void menufunctions();
//A function to populate the list with more nodes
void populateList(Node * Head);
// The menu functions that drives all the functionalities
void menu();