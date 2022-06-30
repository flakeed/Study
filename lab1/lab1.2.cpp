#include<iostream>

struct Node
{
    Node* next;
    double data;
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
    }
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
    double sum = 0, arif = 0;
    while (true)
    {
        if (count != 10 )
        {
            std::cout << "Print " << count + 1 << " element: ";
            std::cin >> data;
            ANode(start, current, data);
            count++;
        }
        else break;
    }
    PList(start);
    for (Node* cur = start; cur != NULL; cur = cur->next)
    {
        sum += cur->data;
        arif = sum / count;
    }
    for (Node* cur = start; cur != NULL; cur = cur->next)
    {
        if (cur->data > arif)
        {
            k++;
        }
    }
    std::cout << "\nCounting of elements whis bigger thnn arifmetic element in these list: " << k;
    DList(start);

    return 0;
}
