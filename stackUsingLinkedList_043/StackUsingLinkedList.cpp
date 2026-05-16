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
		int value;
		cout << "=== Main Menu===" << endl;
		cout << "\n1.Push" << endl;
		cout << "\n2.pop" << endl;
		cout << "\n3.peek" << endl;
		cout << "\n4.Exit" << endl;

		cin >> choice;

		while (choice != 5) {
			switch (choice)
			{
			case 1:
				cout << endl << endl;
				cout << "Enter the value you want to push: " << endl;
				cin >> value;
				stack.push(value);
				break;
			case 2: 
				if (stack.isEmpty()) {
					cout << "Stack is empty, can't pop. " << endl;
				}
				else {
					stack.pop();
				}
				break;
			case 3: 
				if (!stack.isEmpty()) {
					stack.peek();
				}
				else {
					cout << "Stack is empty. " << endl;
				}
				break;
			case 4: 
				cout << "Exiting the program .. " << endl;
				break;
			default :
				cout << "Invalid choice ! choose an option from the main menu: " << endl;
				break;
			}

		}
	}

};
	


