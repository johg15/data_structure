#include "ArrayStack.h"

int main()
{
	// ArrayStack Ŭ������ stack ��ü ���� = stack�� ArrayStack�� �ν��Ͻ�
	ArrayStack stack;		
	for (int i = 1; i < 10; i++)
		stack.push(i);

	stack.display();
	return 0;
}
