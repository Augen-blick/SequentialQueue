#include <iostream>
#include "SqQueue.h"
using namespace std;

int main()
{
	//定义队列
	SqQueue* Q;

	//初始化队列
	InitQueue(Q);

	//判断是否队列是否为空
	if (QueueEmpty(Q))
		cout << "Q队列为空" << endl;
	else
		cout << "Q队列不为空" << endl;

	//进队列
	for (int i = 0; i < 10; i++)
	{
		enQueue(Q, 'a' + i);
	}

	cout << "元素进队列之后" << endl;
	//判断队列是否为空
	if (QueueEmpty(Q))
		cout << "Q队列为空" << endl;
	else
		cout << "Q队列不为空" << endl;

	//出队列
	char e;
	for (int i = 0; i < 10; i++)
	{
		deQueue(Q, e);
		cout << e << " ";
	}
	cout << endl;
	cout << "元素出队列之后" << endl;

	//判断队列是否为空
	if (QueueEmpty(Q))
		cout << "Q队列为空" << endl;
	else
		cout << "Q队列不为空" << endl;

	//销毁队列
	DestroyQueue(Q);

	return 0;
}