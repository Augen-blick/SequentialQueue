#include <iostream>
#include "SqQueue.h"
using namespace std;

int main()
{
	//�������
	SqQueue* Q;

	//��ʼ������
	InitQueue(Q);

	//�ж��Ƿ�����Ƿ�Ϊ��
	if (QueueEmpty(Q))
		cout << "Q����Ϊ��" << endl;
	else
		cout << "Q���в�Ϊ��" << endl;

	//������
	for (int i = 0; i < 10; i++)
	{
		enQueue(Q, 'a' + i);
	}

	cout << "Ԫ�ؽ�����֮��" << endl;
	//�ж϶����Ƿ�Ϊ��
	if (QueueEmpty(Q))
		cout << "Q����Ϊ��" << endl;
	else
		cout << "Q���в�Ϊ��" << endl;

	//������
	char e;
	for (int i = 0; i < 10; i++)
	{
		deQueue(Q, e);
		cout << e << " ";
	}
	cout << endl;
	cout << "Ԫ�س�����֮��" << endl;

	//�ж϶����Ƿ�Ϊ��
	if (QueueEmpty(Q))
		cout << "Q����Ϊ��" << endl;
	else
		cout << "Q���в�Ϊ��" << endl;

	//���ٶ���
	DestroyQueue(Q);

	return 0;
}