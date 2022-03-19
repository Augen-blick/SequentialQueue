#pragma once
#include <iostream>
using namespace std;

const int MaxSize = 10;
typedef char ElemType;
typedef struct
{
	ElemType data[MaxSize];						//��Ŷ���Ԫ��
	int front, rear;							//��ͷ�Ͷ�βָ��
} SqQueue;

void InitQueue(SqQueue*& q);					//��ʼ������
void DestroyQueue(SqQueue*& q);					//���ٶ���
bool QueueEmpty(SqQueue* q);					//�ж϶����Ƿ�Ϊ��
bool enQueue(SqQueue*& q, ElemType e);			//������
bool deQueue(SqQueue*& q, ElemType& e);			//������

void InitQueue(SqQueue*& q)						//��ʼ������
{
	q = (SqQueue*)malloc(sizeof(SqQueue));
	if(q != NULL)
		q->front = q->rear = -1;
}

void DestroyQueue(SqQueue*& q)					//���ٶ���
{
	free(q);
}

bool QueueEmpty(SqQueue* q)						//�ж϶����Ƿ�Ϊ��
{
	return(q->front == q->rear);
}

bool enQueue(SqQueue*& q, ElemType e)			//������
{
	if (q->rear == MaxSize - 1)					//���������
		return false;
	q->rear++;									//��β��1
	q->data[q->rear] = e;						//rearλ�ò���Ԫ��e
	return true;
}

bool deQueue(SqQueue*& q, ElemType& e)			//������
{
	if (q->front == q->rear)						//�ӿ������
		return false;
	q->front++;
	e = q->data[q->front];
	return true;
}