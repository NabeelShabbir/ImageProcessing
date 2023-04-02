#ifndef TASK4_H
#define TASK4_H

#include <iostream>
using namespace std;

struct Node
{
	int Data = NULL;
	Node* Next = NULL;

	Node(int V)
	{
		Data = V;
		Next = NULL;
	}
};

class List
{
private:
	Node* Head;
public:
	List()
	{
		Head = NULL;
	}
	List(float** arr, int rows, int cols)
	{
		bool flag = false;

		Head = new Node(rows);
		Head->Next = new Node(cols);
		Node* ptr = Head->Next;

		for (int i = 0; i < rows; i++)
		{
			flag = false;

			for (int j = 0; j < cols; j++)
			{
				if (arr[i][j] != 0 && flag == false)
				{
					flag = true;
					ptr->Next = new Node(j+1);
					ptr = ptr->Next;
				}
				else if (arr[i][j] == 0 && flag == true)
				{
					flag = false;
					ptr->Next = new Node(j);
					ptr = ptr->Next;
				}
				else if (j == cols - 1 && arr[i][j] != 0 && flag == true)
				{
					flag = false;
					ptr->Next = new Node(j+1);
					ptr = ptr->Next;
				}
			}
			ptr->Next = new Node(-1);
			ptr = ptr->Next;
		}
	}

	void Display_List()
	{
		Node* ptr = Head;
		int rows = ptr->Data;
		int cols = ptr->Next->Data;

		cout << rows << " " << cols << endl << endl;

		ptr = ptr->Next->Next;

		while (ptr != NULL)
		{
			cout << ptr->Data << " ";

			if (ptr->Data == -1)
			{
				cout << endl;
			}

			ptr = ptr->Next;
		}
	}
};


#endif