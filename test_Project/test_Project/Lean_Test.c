//#include<stdio.h>
//ͷ�巨������������㷨
//LinkList List_HeadInsert(LinkList& L) {
//	LNode* s; int x;
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;
//	scanf("%d", &x);
//	while (x != 9999 )
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->data = x;
//		s->next = L->next;
//		L->next = s;
//		scanf("%d", &x);
//	}
//	return L;
//
//}
// 
// ��װ;

//void main{
//	bool InsertNextNode(LNode* p,ElemType e) {
//	if (p == NULL)
//		return false;
//	LNode* s = (LNode*)malloc(sizeof(LNode));
//	if (s == NULL)
//		return false;
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return true;
//
//		}
//	}

////���
//int Length(LinkList L) {
//	int len = 0;
//	LNode* p = L;
//	while (p->next != NULL)
//	{
//		p = p->next;
//		len++;
//	}
//	return len;
//}
//
//int main() {
//	int p;
//}

//static ����ȫ�ֱ���
//�����ⲿ���� extern
//extern int g_val;
//
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}

//static ���ξֲ�����
//void test() {
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//int main(){
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

////static ���κ���
//extern int Add(int x, int y);//���� �ⲿ����
//int main(){
//
//	int a = 10;
//	int b = 20;
//
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}



//int main() {
//	//�Ĵ�������register
//	register int num = 3;//���飺3����ڼĴ���
//	return 0;
//}

////#define�����ʶ������
//#define NUM 100
////#define�����
//#define ADD(x,y) ((x)+(y))
////int Add(int x, int y) {
////	return x + y;
////}
//int main() {
//	/*printf("%d\n", NUM);
//	int a = NUM;
//	printf("%d\n", a);
//
//	int arr[NUM] = { 0 };*/
//	int a = 30;
//	int b = 20;
//	int c = ADD(a, b);
//
//	printf("%d\n", c);
//	return  0;
//
//}

//int main() {
//	int a = 10;//���ڴ�����4���ֽ�  �洢10
//	int* p = &a;// &ȡ��ַ��  *˵��p��ָ�����  int����˵��pָ��Ķ�����int��
//	
//	*p = 20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����pָ��Ķ���
//	// ͨ��ָ���ҵ�a���ı�a�� ֵΪ20
//	printf("%d\n", a);
//	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
//	//ָ�������������ŵ�ַ��
//	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
//	//32λ�����ϵĵ�ַ:32bitλ-4byte������ָ������Ĵ�С��4���ֽ�
//	//64λ�����ϵĵ�ַ:64bitλ-8byte������ָ������Ĵ�С��8���ֽ�
//	printf("%zu\n", sizeof(char*));//8
//	printf("%zu\n", sizeof(int*));//8
//	printf("%zu\n", sizeof(double*));//8
//	printf("%zu\n", sizeof(short*));//8
//	printf("%zu\n", sizeof(float*));//8
//
//	return 0;
//}