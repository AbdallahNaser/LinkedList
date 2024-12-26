#include <iostream>

using namespace std;

class linkedList
{
    struct Node
    {
        int item;
        Node* next;
    };
    Node* first;
    Node* last;
    int length;

public:
    linkedList()
    {
        first = last = NULL;
        length = 0;
    }

    bool isEmpty()
    {
        return length == 0;
    }

    void insertFirst(int element)
    {
        Node* newNode = new Node;
        newNode->item = element;
        if (length == 0)
        {
            first = last = newNode;
            newNode->next = NULL;
        }
        else
        {
            newNode->next = first;
            first = newNode;
        }
        length++;
    }

    void insertLast(int element)
    {
        Node* newNode = new Node;
        newNode->item = element;
        newNode->next = NULL;
        if (length == 0)
        {
            first = last = newNode;
        }
        else
        {
            last->next = newNode;
            last = newNode;
        }
        length++;
    }

    void insertAtPos(int pos, int element)
    {
        if (pos < 0 || pos > length)
        {
            cout << "Out of Range" << "\n";
            return;
        }

        Node* newNode = new Node;
        newNode->item = element;

        if (pos == 0)
        {
            insertFirst(element);
        }
        else if (pos == length)
        {
            insertLast(element);
        }
        else
        {
            Node* Cur = first;
            for (int i = 1; i < pos; i++)
            {
                Cur = Cur->next;
            }
            newNode->next = Cur->next;
            Cur->next = newNode;
            length++;
        }
    }

    void print()
    {
        Node* Cur = first;

        while (Cur != NULL)
        {
            cout << Cur->item << " ";
            Cur = Cur->next;
        }
        cout << "\n";
    }

    void removeFirst()
    {
        if(length==0)
        {
            cout<<"Empty List Can't Remove"<<"\n";
        }
        else if(length==1)
        {
            delete first;
            last=first=NULL;
            length--;
        }
        else
        {
            Node*Current=first;
            first=first->next;
            delete Current;
            length--;
        }
    }
    void removeLast()
    {
        if(length==0)
        {
            cout<<"Empty List Can't Remove"<<"\n";
        }
        else if(length==1)
        {
            delete last;
            last=first=NULL;
            length--;
        }
        else
        {
            Node*curr=first->next;
            Node*prev=first;

            while(curr !=last)
            {
                prev=curr;
                curr=curr->next;
            }
            delete curr;
            prev->next=NULL;
            last=prev;
            length--;
        }
    }


    void removeE(int element)
    {
        if (isEmpty())
        {
            cout << "Empty List, Can't Remove" << "\n";
            return;
        }

        Node* curr = first;
        Node* prev = nullptr;

        while (curr != NULL)
        {
            if (curr->item == element)
            {
                if (curr == first)
                {
                    first = first->next;
                    delete curr;
                    curr = first;
                    length--;

                    if (length == 0)
                    {
                        last = NULL;
                    }
                }
                else
                {
                    prev->next = curr->next;
                    if (curr == last)
                    {
                        last = prev;
                    }
                    delete curr;
                    curr = prev->next;
                    length--;
                }
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
    }

    void reverse()
    {
        Node*prev,*next,*curr;
        prev=NULL;
        curr=first;
        next=curr->next;

        while(next!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        first=prev;
    }


    int Search(int element)
    {
        Node *curr=first;
        int pos=0;
        while(curr!=NULL)
        {
            if(curr->item==element)
            {
                return pos;
            }
            curr=curr->next;
            pos++;
        }
        return -1;
    }



};

int main()
{
    linkedList l;

    l.insertFirst(10);
    l.insertLast(30);
    l.insertLast(40);
    l.insertAtPos(1, 20);
    l.insertFirst(0);
    l.insertLast(50);
    l.print();
    cout<<"\n";

    l.removeFirst();
    l.print();

    cout<<"\n";

    l.removeLast();
    l.print();

    cout<<"\n";

    l.removeE(20);
    l.print();

    l.reverse();

    l.print();

    cout<<"\n"<<l.Search(40);



    return 0;
}
