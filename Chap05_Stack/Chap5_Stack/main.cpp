#include "ArrayStack.h"

int main()
{
	// ArrayStack 클래스로 stack 객체 생성 = stack은 ArrayStack의 인스턴스
	ArrayStack stack;		
	for (int i = 1; i < 10; i++)
		stack.push(i);

	stack.display();
	return 0;
}
