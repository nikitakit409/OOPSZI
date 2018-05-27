//Листинг 1. queue.h
#pragma once
#include "iostream"
#include "conio.h"
using namespace std;
class Queue
{
	int *arr;
	int count;
	int end = 0, start = 0, size = 0;
public:
	Queue(int count); //инициализация
	Queue(const Queue &other);  //копирование
	Queue(Queue &&other); //перемещение
	Queue &operator=(const Queue &other); //присваивание
	Queue &operator=(Queue &&other); //присваивание с перемещением
	~Queue(); //деструктор
	int GetSize();
	void Push(int element); //добавление элемента
	int Pop(); //удаление элемента
	int Peek(); //просмотр элемента
	bool CheckNoEmptyQueue(); //проверка наличия элементов
	friend ostream & operator << (ostream & stream, const Queue &a); //вывод
};


//Листинг 2. Queue.cpp
#include "Queue.h"
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
