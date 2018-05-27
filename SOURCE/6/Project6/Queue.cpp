#include "queue.h"
Queue::Queue(int count)
	: count(count)
{
	arr = new int[count];
}
Queue::~Queue()
{
	delete[] arr;
}
Queue::Queue(const Queue &other)
{
	arr = new int[other.count];
	count = other.count;
	end = other.end;
	start = other.start;
	size = other.size;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}
Queue &Queue::operator=(const Queue &other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] arr;
	arr = new int[other.count];
	count = other.count;
	for (int i = 0; i < count; ++i)
	{
		arr[i] = other.arr[i];
	}
}
Queue &Queue::operator=(Queue &&other)
{
	if (this == &other)
	{
		return *this;
	}
	delete[] arr;
	arr = other.arr;
	count = other.count;
	other.arr = nullptr;
}
Queue::Queue(Queue &&other)
{
	arr = other.arr;
	count = other.count;
	other.arr = nullptr;
}
int Queue::GetSize()
{
	return this->size;
}

void Queue::Push(int element)
{
	if (size < count)
	{
		arr[end] = element;
		end = (end + 1) % count;
		size++;
	}
}
int Queue::Pop()
{
	if (size > 0)
	{
		int element = arr[start];
		start = (start + 1) % count;
		size--;
		return element;
	}
	return 0;
}
int Queue::Peek()
{
	return arr[start];
}
bool Queue::CheckNoEmptyQueue()
{
	return (size > 0);
}
ostream & operator << (ostream & stream, const Queue &a)
{
	Queue b = a;
	stream << "=====\n";
	for (int i = 0; i < b.count; i++)
	{
		stream << "| " << b.Pop() << "\n";
	}
	stream << "=====\n";
	return stream;
}
