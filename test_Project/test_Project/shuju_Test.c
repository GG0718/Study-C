#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//LinkList LinkList_TailInsert(){
//	LinkList L = NULL;// ��ʼ��ͷָ��ΪNULL  
//	LNode* r = NULL;// βָ��Ҳ��ʼ��ΪNULL
//	int x;
//	while (1)
//	{
//		scanf_s("%d", &x);
//		if (x != 9999)// �������9999�����˳�ѭ��
//			break;
//
//		LNode* s = (LNode*)malloc(sizeof(LNode));
//		if (!s)
//		{
//			perror("ads");
//				exit(EXIT_FAILURE);
//		}
//		s->data = x;
//		s->next = NULL;// �½ڵ��nextָ���ʼ��ΪNULL  
//		if (!L)// ����ǵ�һ���ڵ㣬��L��r��ָ���� 
//		{
//			L = s;
//			r = s;
//		}
//		else // ���򣬽�r��nextָ���½ڵ㣬������r 
//		{
//			r->next = s;
//			r = s;
//		}
//	}
//	return L;
//}

//β�巨����������
// ��ͷ
//typedef�ؼ��֣���������������  struct�û��Զ������������
//typedef struct LNode {						//���嵥����ڵ�����
//	int data;								//ÿ���ڵ����������Ϊint��
//	struct LNode* next;						//ָ��ָ����һ���ڵ� 
//}LNode, *LinkList;							//��struct LNode������ΪLNode,  LinkList��ʾָ��struct LNode*��ָ��
//
//	LNode* List_TailInsert(LinkList L){		//LNode*�ȼ�LinkList��LNode*ǿ�����ص���һ���㣬LinkListǿ������һ��������
//		int x;								//����һ��int�͵�ֵx
//		L = (LinkList)malloc(sizeof(LNode));//����һ��ͷ��� ��ֵ��L  sizeof(LNode)Ϊ�����½ڵ�����Ŀռ��С
//		L->next = NULL;							//L��ָ��ָ������Ϊ��ֵ��Ϊ�˷�ֹ������
//		LNode* s,*r = L;					//����һ�� ָ�������ָ��s  ����һ��ָ��ָ��ͷ���L
//		scanf_s("%d", &x);						//������Ҫxֵ
//	while (x != 9999){						//whileѭ������x��Ϊ9999ʱ������ѭ������xΪ9999��ֹѭ��
//		s = (LNode*)malloc(sizeof(LNode));	//����һ���½ڵ㸳ֵ��s  
//		s->data = x;						//��x�����ݸ�ֵ��s�ڵ㴢��
//		r->next = s;						//��s�ڵ��λ�ø�ֵ��r�ڵ��nextָ�룬��r�ڵ��nextָ��ָ��s�ڵ�
//		r = s;								//��rָ��ָ��s�ڵ�
//		scanf_s("%d", &x);					//�ڴ�����һ��ֵ��Ҫ�ٴξ���whileѭ�������뵥����
//	}										
//	//���whileѭ��ʵ�ִ���һ���½ڵ��s���Ƚ���������ݸ�s���棬Ȼ����r��nextָ��ָ��s�ڵ㣬��rָ��ָ��s�ڵ�
//	//�ڴ�����һ��ֵ������whileѭ�������µĽڵ㣬�ڴ�ѭ���У��ᴴ��һ���µĽڵ㸳ֵ��sָ�룬������ԭ���Ľڵ�λ�þ���rָ��ָ����
//	//ֻҪ�����ֵ��Ϊ9999������һֱ�����µĽڵ�
//	r->next = NULL;							//����ѭ������rָ��ָ��NULL
//	return L;								//ѭ���������ص�����L
//}


	//ͷ�巨����������     
	// ��ͷ
typedef struct LNode {						//���嵥����ڵ�����
	int data;								//ÿ���ڵ����������Ϊint��
	struct LNode* next;						//ָ��ָ����һ���ڵ� 
	}LNode, *LinkList;						//��struct LNode������ΪLNode,  LinkList��ʾָ��struct LNode*��ָ��

	LinkList List_HeadInsert(LinkList L){	//������������
		LNode* s;							
		int x;
		L = (LinkList)malloc(sizeof(LNode));//����ͷ�ڵ�
		L->next = NULL;						//����L��nextָ��ָ��NULL  ��һ������þ��Ƿ�ֹnextָ��ָ��������
		scanf_s("%d", &x);					//������ֵx
		while (x != 9999)					//����whileѭ����x������9999
		{
			InsertNextNode(L, x);			//���ú���������InsertNextNode
		}
		return L;							//ѭ���������ص�����L
	}
	//�������ķ���
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
	//ͷ�巨����Ҫ���ã����������   
	//��һ�ַ���������һ��ָ��ѭ��ɨ�赥�����ֵ��������ȡ�ýڵ㵱�е�Ԫ�أ�����һ���µĵ������ڴ�ʹ��ͷ�巨���룬ʵ�����������
	//�ڶ��ַ���������һ��ָ����ͷ�巨ѭ����������еڶ���ѭ������˳��ȡ����ֵ��������ͷ�巨��ѭ��һ�Σ�Ҳ��ʵ������ĵ���
	int main() {
		LinkList L = NULL;						// ��ʼ������Ϊ��  
		L = List_Headinsert(L);					// ���ú�����ͷ����ڵ�  

		// ���������Ӵ���������������ӡ������ 
		// �ͷ������ڴ棨����ֻ��һ��ʾ����ʵ��ʹ��ʱ������Ҫ�����ӵ��߼������������ͷ�ÿ���ڵ㣩  
	LNode* current = L;
	LNode* temp;
	while (current != NULL) {
		temp = current;
		current = current->next;
		free(temp);
	}
	return 0;
}




//д������ͷ�ڵ�ʵ��ͷ���β�巨

//д��ͷ�巨������