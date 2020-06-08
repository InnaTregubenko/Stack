#pragma once
#include"Node.h"
template <typename T>

class Stack {
	Node<T> *pTop;
	size_t size;
public:
	Stack() {
		Node<T>* pTop = nullptr;
		size_t size = 0;
	}

	~Stack() {   
		while (pTop != nullptr) {
			Pop();
		}
	}

	bool IsEmpty() {
		if (pTop == nullptr) {
			cout << "Is empty\n";
			return true;
		}
		else { 
			cout << "Is not empty\n"; 
			return false; }

	}
	size_t Size() {
		return size;
	}
	void Push(char Symbol) {
		size++;
		Node<T> *pNew = new Node<T>(Symbol);
		pNew->SetpNext(pTop);
		pTop = pNew;
	}
	T Top() {
		return pTop->GetData();
	}
	void Pop() {
		size--;
		Node<T> *pDel;
		pDel = pTop;
		pTop = pTop->GetpNext();
		delete pDel;
	}
};
