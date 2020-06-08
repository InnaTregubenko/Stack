#pragma once
#include<iostream>
using namespace std;

template <typename T>

class Node {

	T data;
	Node *pNext;
public:
	Node(const T& _data = T(), Node *_pNext = nullptr)
	{
		data = _data;
		pNext = _pNext;
	}
	void SetData(const T& _data) {
		data = _data;
	}
	T GetData()const {
		return data;
	}
	void SetpNext(Node *_pNext) {
		pNext = _pNext; //метод для изменения адреса, кот.хранится по указателю
	}
	Node* GetpNext() {
		return pNext;
	}
	const Node* GetpNext()const {
		return pNext;
	}
  };
