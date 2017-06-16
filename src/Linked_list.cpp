//============================================================================
// Name        : Linked_list.cpp
// Author      : Sourav Mukherjee
// Version     : 0.1
// Copyright   : Your copyright notice
// Description : Linked List creation
//============================================================================

#include <iostream>
using namespace std;

class Nodes{
	int num = 0, counter = 1, userData = 0 ;
	typedef struct node {
						int data;
						struct node* nextPtr;
				}nodestruct;
	nodestruct *head ,*middle, *temp, *tail;
public:
	Nodes(){
		cout << "Constructor called" << "\n";
	}
	~Nodes(){
		cout << "Destructor called"<< "\n";
	}
	void linkedListGenerator(){
			cout << "Enter the numbers you wanna add to Linked list";
			cin >> num;
			head = (nodestruct*) malloc(sizeof(nodestruct));
			temp = (nodestruct*) malloc(sizeof(nodestruct));
			middle = (nodestruct*) malloc(sizeof(nodestruct));
			tail = (nodestruct*) malloc(sizeof(nodestruct));
			temp = 0 ;
			for ( ; counter <= num ; counter++){
				if (counter == 1){
					cout << "Please enter the" << counter << "data you want to add to the Linked List >> ";
					cin >> userData;
					head->data = userData;
					head->nextPtr = NULL;
				}
				else{
					cout << "Please enter the" << counter << "data you want to add to the Linked List >> ";
					cin >> userData;
					temp->data = userData;
					temp->nextPtr = head;
					//head = temp;
				}
			}
	}
		void linkedListPublisher(){
			nodestruct *current = head;
			while (current->nextPtr != NULL){
					cout << "---|" << current->data <<"|"<< current->nextPtr << "|--";
					current = current->nextPtr;
				}
		}
};


int main(void) {
	//cout << " Please enter the number of nodes to be created"<< endl;
	//cin >> num;
	Nodes classObj;
	classObj.linkedListGenerator();
	classObj.linkedListPublisher();
	return 0;
}
/*
 * END OF PROGRAM
*/


