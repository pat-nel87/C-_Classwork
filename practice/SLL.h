#include <iostream>
#include <string>

using namespace std;

class node
{
	private:
		int nxtNodeId;
		int Id;
	
	public:
		void setNext(int);
		int getId();
		int getNext();
		node() {
			cout << "node Created!" << endl;
			cout << "Enter the node ID#: ";
			cin >> Id;
		}
};

class headNode
{
	private:
		int nextNodeId;
	
	public:
		void setNextNode(int);
		headNode()
		{
			cout << "headNode created!";			
		}
		
};

int node::getId()
{
	
	return Id;
}

void headNode::setNextNode(int next)
{
	int booler;
	nextNodeId = next;
	cout << " next node is set to ID: " << nextNodeId << endl;
	cout << " Would you like to create another node(enter 0 or 1): ";
	cin >> booler;
	if (booler == 1)
	{
		// interested to learn more about "new"
		// need to also inspect textbook's implemenation of the Singlely linked list
		new node;	
			
	} 
	
}

void node::setNext(int nxt)
{
	nxtNodeId = nxt;
}

int node::getNext()
{
	return nxtNodeId;
}
		
