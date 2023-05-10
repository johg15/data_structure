#pragma once
#include <cstdio>
const int MAX_STACK_SIZE = 20;
// #define MAX_STACK_SIZE 20

class ArrayStack
{
	int top; 
	int data[MAX_STACK_SIZE];	// 자료형이 int (정수형)

public:
	ArrayStack() { top = -1; }
	~ArrayStack() {}
	bool isEmpty() {
		return top == -1;		// top과 -1이 같으면 True, 다르면 False 반환 (bool 자료형)
	}
	bool isFull() {
		return top == MAX_STACK_SIZE - 1;
	}
	void push(int e) {
		if (isFull())
			printf("스택 포화 에러");
		else
			data[++top] = e;

	}

	int pop() {
		if (isEmpty())
			printf("스택 공백 에러");
		
		return data[top--];
	}

	int peek() {
		if (isEmpty())
			printf("스택 공백 에러");

		return data[top];
	}

	void display() {
		printf("[스택 항목의 수 = %2d ==> ", top + 1);
		for (int i = 0; i <= top; i++)
			printf("<%2d>", data[i]);

		printf("\n");
	}
};