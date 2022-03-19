#pragma once
#include <iostream>
using namespace std;

const int MaxSize = 10;
typedef char ElemType;
typedef struct
{
	ElemType data[MaxSize];						//存放队中元素
	int front, rear;							//队头和队尾指针
} SqQueue;

void InitQueue(SqQueue*& q);					//初始化队列
void DestroyQueue(SqQueue*& q);					//销毁队列
bool QueueEmpty(SqQueue* q);					//判断队列是否为空
bool enQueue(SqQueue*& q, ElemType e);			//进队列
bool deQueue(SqQueue*& q, ElemType& e);			//出队列

void InitQueue(SqQueue*& q)						//初始化队列
{
	q = (SqQueue*)malloc(sizeof(SqQueue));
	if(q != NULL)
		q->front = q->rear = -1;
}

void DestroyQueue(SqQueue*& q)					//销毁队列
{
	free(q);
}

bool QueueEmpty(SqQueue* q)						//判断队列是否为空
{
	return(q->front == q->rear);
}

bool enQueue(SqQueue*& q, ElemType e)			//进队列
{
	if (q->rear == MaxSize - 1)					//队满上溢出
		return false;
	q->rear++;									//队尾增1
	q->data[q->rear] = e;						//rear位置插入元素e
	return true;
}

bool deQueue(SqQueue*& q, ElemType& e)			//出队列
{
	if (q->front == q->rear)						//队空下溢出
		return false;
	q->front++;
	e = q->data[q->front];
	return true;
}