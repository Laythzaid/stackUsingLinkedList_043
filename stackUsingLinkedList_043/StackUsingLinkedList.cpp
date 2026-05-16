#include <iostream>

using namespace std;

class Node{
public:
	int data;
	Node* next;
	Node()
	{
		next = NULL;
	}

    
};
class stack
{
private:
	Node* top;

public:
	stack()
	{
		top = NULL;
	}

	int push(int value)
	{
		Node* newNode = new Node();
		newNode->data = value;
		newNode->next = top;
		top = newNode;
		cout << "Push value: " << value << endl;
		return value;
	}

	void pop()
	{
		if (isEmpty()) {
			cout << "Stack is empty. Cannot pop." << endl;
		}
		Node* temp = top;
		top = top->next;
		cout << "Pop value: " << temp->data << endl;
	}
		bool isEmpty() {
			return top == NULL;
	    }
		void peek() {
			if (top == NULL) {
				cout << "List is empty. " << endl;
			}
			else
			{
				Node* current = top;
				while (current != NULL)
				{
					cout << current->data << " " << endl;
					cout << current->next;
				}
				cout << endl;
			}
	}

		int main() {
			stack stack;
			int choice = 0;
			 
			cout << "=== Main Menu===" << endl;
			cout << "\n1.Push" << endl;
			cout << "\n2.pop" << endl;
			cout << "\n3.peek" << endl;
			cout << "\n4.Exit" << endl;
			cin >> choice;

			while (choice != 5) {
				case 1:

			}
	}
	
	
	

};
