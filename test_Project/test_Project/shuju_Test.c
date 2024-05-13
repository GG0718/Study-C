#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//LinkList LinkList_TailInsert(){
//	LinkList L = NULL;// 初始化头指针为NULL  
//	LNode* r = NULL;// 尾指针也初始化为NULL
//	int x;
//	while (1)
//	{
//		scanf_s("%d", &x);
//		if (x != 9999)// 如果输入9999，则退出循环
//			break;
//
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		if (!s)
//		{
//			perror("ads");
//				exit(EXIT_FAILURE);
//		}
//		s->data = x;
//		s->next = NULL;// 新节点的next指针初始化为NULL  
//		if (!L)// 如果是第一个节点，则L和r都指向它 
//		{
//			L = s;
//			r = s;
//		}
//		else // 否则，将r的next指向新节点，并更新r 
//		{
//			r->next = s;
//			r = s;
//		}
//	}
//	return L;
//}

//尾插法建立单链表
// 带头
//typedef关键字，数据类型重命名  struct用户自定义的数据类型
//typedef struct LNode {						//定义单链表节点类型
//	int data;								//每个节点的数据类型为int型
//	struct LNode* next;						//指针指向下一个节点 
//}LNode, *LinkList;							//将struct LNode重命名为LNode,  LinkList表示指向struct LNode*的指针
//
//	LNode* List_TailInsert(LinkList L){		//LNode*等价LinkList，LNode*强调返回的是一个点，LinkList强调这是一个单链表
//		int x;								//声明一个int型的值x
//		L = (LinkList)malloc(sizeof(LNode));//创建一个头结点 赋值给L  sizeof(LNode)为计算新节点所需的空间大小
//		L->next = NULL;							//L的指针指向设置为空值，为了防止脏数据
//		LNode* s,*r = L;					//声明一个 指向单链表的指针s  声明一个指针指向头结点L
//		scanf_s("%d", &x);						//输入需要x值
//	while (x != 9999){						//while循环，当x不为9999时，无限循环，当x为9999终止循环
//		s = (LNode*)malloc(sizeof(LNode));	//创建一个新节点赋值给s  
//		s->data = x;						//将x的数据赋值给s节点储存
//		r->next = s;						//将s节点的位置赋值给r节点的next指针，让r节点的next指针指向s节点
//		r = s;								//将r指针指向s节点
//		scanf_s("%d", &x);					//在次输入一个值，要再次经过while循环，插入单链表
//	}										
//	//这个while循环实现创建一个新节点给s后，先将输入的数据给s储存，然后让r的next指针指向s节点，让r指针指向s节点
//	//在次输入一个值，进入while循环插入新的节点，在次循环中，会创建一个新的节点赋值给s指针，这样，原来的节点位置就让r指针指向了
//	//只要输入的值不为9999，就能一直插入新的节点
//	r->next = NULL;							//结束循环，让r指针指向NULL
//	return L;								//循环结束返回单链表L
//}


	//头插法建立单链表     
	// 带头
typedef struct LNode {						//定义单链表节点类型
	int data;								//每个节点的数据类型为int型
	struct LNode* next;						//指针指向下一个节点 
	}LNode, *LinkList;						//将struct LNode重命名为LNode,  LinkList表示指向struct LNode*的指针

	LinkList List_HeadInsert(LinkList L){	//逆向建立单链表
		LNode* s;							
		int x;
		L = (LinkList)malloc(sizeof(LNode));//设置头节点
		L->next = NULL;						//设置L的next指针指向NULL  这一句的作用就是防止next指针指向脏数据
		scanf_s("%d", &x);					//输入数值x
		while (x != 9999)					//设置while循环，x不等于9999
		{
			InsertNextNode(L, x);			//调用后插操作方法InsertNextNode
		}
		return L;							//循环结束返回单链表L
	}
	//后插操作的方法
	bool InsertNextNode(LNode* p, int x) {
		if (p == NULL)
			return false;
		LNode* s = (LNode*)malloc(sizeof(LNode));
		if (s == NULL)
			return false;
		s->data = x;
		s->next = p->next;
		p->next = s;
		return true;
	}
	//头插法的重要作用：链表的逆置   
	//第一种方法，设置一个指针循环扫描单链表的值，按次序取得节点当中的元素，创建一个新的单链表，在次使用头插法插入，实现链表的逆置
	//第二种方法，设置一个指针在头插法循环结束后进行第二次循环，按顺序取出来值，重新用头插法在循环一次，也能实现链表的倒置
	int main() {
		LinkList L = NULL;						// 初始化链表为空  
		L = List_Headinsert(L);					// 调用函数从头插入节点  

		// 这里可以添加代码来遍历链表并打印其内容 
		// 释放链表内存（这里只是一个示例，实际使用时可能需要更复杂的逻辑来遍历链表并释放每个节点）  
	LNode* current = L;
	LNode* temp;
	while (current != NULL) {
		temp = current;
		current = current->next;
		free(temp);
	}
	return 0;
}




//写出不带头节点实现头插和尾插法
1111
//写出头插法的逆置
