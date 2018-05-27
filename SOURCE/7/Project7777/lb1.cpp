#include <iostream>

using namespace std;

class OverflowException {

public:

	OverflowException() {

		cout << "#ERROR# stack overflow!" << endl;

	}

};

class NoElementsException {

public:

	NoElementsException() {

		cout << "#ERROR# Stack contains no elements!" << endl;

	}

};

template<typename T>

struct Node {

	T x;

	Node *next;

};

template<typename T>

class AbstractStack {

protected:

	virtual int GetSize(void) const = 0;

	virtual void Push(const T &element) = 0;

	virtual void Pop(T &element) = 0;

	virtual void Peek(T &element) = 0;

};
template<typename T>

class Stack : public AbstractStack<T> {

private:

	Node<T> *top;

	int size;

public:

	Stack();

	Stack(int size);

	Stack(const Stack &other);

	Stack(Stack &&other);

	~Stack();

	Stack &operator=(const Stack &other);

	Stack &operator=(Stack &&other);

	friend ostream& operator<<(ostream &out, const Stack &rv) {

		Node<T> *cur = rv.top;

		while (cur != NULL) {

			out << cur->x << " ";

			cur = cur->next;

		}

		return out;

	}
	int GetSize(void) const override;

	void Push(const T &element) override;

	void Pop(T &element) override;

	void Peek(T &element) override;

	bool EmptyStack(void) { return (top ? false : true); }

	void StackCopy(const Stack &other);

};
template<typename T>

Stack<T>::Stack() {

	Stack::size = 0;

	top = nullptr;

}

template<typename T>

Stack<T>::Stack(int size) {

	Stack::size = size;

	top = nullptr;

}

template<typename T>

Stack<T>::Stack(const Stack &other) {

	StackCopy(other);

}

template<typename T>

Stack<T>::Stack(Stack &&other) {

	StackCopy(other);

	other.top = nullptr;

}
template<typename T>

Stack<T>::~Stack(void) {

	while (top != NULL) {

		Node<T> *cur = top->next;

		delete top;

		top = cur;

	}

}

template<typename T>

Stack<T> &Stack<T>::operator=(const Stack &other) {

	if (this == &other) {

		return *this;

	}

	StackCopy(other);

	return *this;

}

template<typename T>

Stack<T> &Stack<T>::operator=(Stack &&other) {

	if (this == &other) {

		return *this;

	}

	StackCopy(other);

	other.top = nullptr;

	return *this;

}

template<typename T>

void Stack<T>::StackCopy(const Stack &other) {

	top = NULL;

	size = other.size;

	Node<T> *cur = other.top;

	while (cur != NULL) {

		Push(cur->x);

		cur = cur->next;

	}

}
template<typename T>

int Stack<T>::GetSize(void) const {

	int count = 0;

	Node<T> *cur = top;

	while (cur != NULL) {

		cur = cur->next;

		count++;

	}

	return count;

}
template<typename T>

void Stack<T>::Push(const T &element) {

	try {

		if (GetSize() >= size) throw OverflowException();

	}

	catch (OverflowException& ex) { return; }

	Node<T> *np = new Node<T>;

	np->x = element;

	np->next = top;

	top = np;

}

template<typename T>

void Stack<T>::Pop(T &element) {

	try {

		if (EmptyStack()) throw NoElementsException();

	}
	catch (NoElementsException& ex) { return; }

	element = top->x;

	Node<T> *cur = top;

	top = top->next;

	delete cur;

}

template<typename T>

void Stack<T>::Peek(T &element) {

	try {

		if (EmptyStack()) throw NoElementsException();

	}

	catch (NoElementsException& ex) { return; }

	element = top->x;

}

int main(int argc, char **argv) {

	Stack<double> sd(2);

	Stack<char> sc(6);

	for (int i = 0; i<2; i++) {

		sd.Push(1.5);

	}

	cout << "Stack type <double> = " << sd << endl;

	sc.Push('c');

	sc.Push('e');

	sc.Push('n');

	sc.Push('o');

	sc.Push('G');

	sc.Push('L');

	cout << "Stack type <char> = " << sc << endl;

	char element;

	sc.Pop(element);

	cout << "\nPop() Stack<char> = " << element << endl;

	cout << "Stack <char> = " << sc << endl;

	return 0;

}
