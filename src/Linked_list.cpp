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
	int num = 0;
	int counter = 1;
	int userData = 0;
	typedef struct node {
                        int data;
                        struct node* nextPtr;
        }nodestruct;
	nodestruct *head = NULL, *tmp = NULL;

public:
	Nodes(){
		cout << "Constructor called" << "\n";
	}

	~Nodes(){
	        delete head, tmp,
		cout << "Destructor called"<< "\n";
	}

	void linkedListGenerator(){
                cout << "Enter the numbers you wanna add to Linked list --> ";
                cin >> num;
                head = (nodestruct*)malloc(sizeof(nodestruct));
                cout << " Enter the value --> ";
                cin >> userData;
                head->data = userData;
                head->nextPtr = NULL;
                for (; counter < num; counter++){
                    tmp = (nodestruct*)malloc(sizeof(nodestruct));
                    cout << " Enter the value --> ";
                    cin >> userData;
                    tmp->data = userData;
                    tmp->nextPtr = head;
                    head = tmp;
                }

	}

        void linkedListPublisher(){
                nodestruct *current = head;
                while(current->nextPtr != NULL){
                                cout << "---|" << current->data <<"|"<< current->nextPtr << "|--";
                                current = current->nextPtr;
                        }
                cout << "---|" << current->data <<"|"<< current->nextPtr << "|--" << endl;

        }
};


int main(void) {

	Nodes *classObj = new Nodes();
	classObj->linkedListGenerator();
	classObj->linkedListPublisher();
	delete classObj;
	return 0;

}
/*
 * END OF PROGRAM
*/


