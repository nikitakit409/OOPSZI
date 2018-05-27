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
