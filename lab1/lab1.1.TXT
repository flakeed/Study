#include<iostream>

struct Node
{
	Node* next;
	int data;
};

void ANode(Node*& start, Node*& current, int data)
{
	if (start == NULL)
	{
		current = (start = new Node);
	}
	else 
	{
		current = (current->next = new Node);
	}
	current->next = NULL;
	current->data = data;
}

void PList(Node* start) 
{
	int c = 0;
	std::cout << "List: " << '\n';
	for (Node* i = start; i; i = i->next) 
	{
		std::cout << i->data << " ";
		c++;
	}
	std::cout << "Sum nodes is: " << c << std::endl;
}

void DList(Node* start) 
{
	Node* tmp;
	for (Node* i = start; i; i = tmp) 
	{
		tmp = i->next;
		delete i;
	}
}

int main()
{
	int count = 0;
	Node* start = NULL;
	Node* current;
	int data{};
	Node* cur{};
	int k = 0;
	while (true)
	{
		std::cout << "Print " << count + 1 << " element: ";
		std::cin >> data;
		if (data != 999)
		{
			ANode(start, current, data);
			count++;
		}
		else break;
	}
	PList(start);
	for (Node* cur = start; cur != NULL; cur = cur->next)
	{
		if (cur->data < 20 && cur->data >0)
		{
			k++;
		}
	}
	std::cout << "Counting of positive numbers are : " << k;
	DList(start);
	return 0;
}
