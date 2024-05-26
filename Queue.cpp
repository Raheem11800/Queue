#include<iostream>
using namespace std;
#define n 5

class queue
{
public:
	int arr[n];
	int front = -1;
	int back = -1;

	void enqueue(int v)
	{
		if (back == n - 1)
		{
			cout << "Queue overflow" << endl;
			return;
		}
		else
		{
			back++;
			arr[back] = v;
		}
		if (front == -1)
		{
			front++;
		}
	}

	void dequeue()
	{
		if (front == -1)
		{
			cout << "Queue is underflow" << endl;
			return;
		}
		else
		{
			front++;
		}
	}

	int peak()
	{
		if (front == -1)
		{
			cout << "Queue is underflow" << endl;
			return -1;
		}
		else
		{
			return arr[front];
		}
	}

	void display()
	{
		if (front == -1)
		{
			cout << "Queue is underflow" << endl;
			return;
		}
		else
		{
			for (int i = front; i <= back; i++)
			{
				cout << arr[i] << " ";
			}
		}
	}
};

void main()
{
	queue Q;
	Q.enqueue(1);
	Q.enqueue(2);
	Q.enqueue(3);
	Q.enqueue(4);
	Q.enqueue(5);

	cout << "Queue Elements: ";
	Q.display();

	cout << endl;

	Q.dequeue();
	cout << "Queue after Deqeueing Elements: ";
	Q.display();

	cout << endl;

	cout << "Queue Top Elements " << Q.peak() << endl;
}