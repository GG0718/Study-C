//#include<stdio.h>
//头插法建立单链表的算法
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
// 封装;

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

////求表长
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

//static 修饰全局变量
//声明外部符号 extern
//extern int g_val;
//
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}

//static 修饰局不变量
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

////static 修饰函数
//extern int Add(int x, int y);//引用 外部函数
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
//	//寄存器变量register
//	register int num = 3;//建议：3存放在寄存中
//	return 0;
//}

////#define定义标识符常量
//#define NUM 100
////#define定义宏
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
//	int a = 10;//向内存申请4个字节  存储10
//	int* p = &a;// &取地址符  *说明p是指针变量  int是在说明p指向的对象是int型
//	
//	*p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
//	// 通过指针找到a，改变a的 值为20
//	printf("%d\n", a);
//	//不管是什么类型的指针，都是在创建指针变量
//	//指针变量是用来存放地址的
//	//指针变量的大小取决于一个地址存放的时候需要大多空间
//	//32位机器上的地址:32bit位-4byte，所以指针变量的大小是4个字节
//	//64位机器上的地址:64bit位-8byte，所以指针变量的大小是8个字节
//	printf("%zu\n", sizeof(char*));//8
//	printf("%zu\n", sizeof(int*));//8
//	printf("%zu\n", sizeof(double*));//8
//	printf("%zu\n", sizeof(short*));//8
//	printf("%zu\n", sizeof(float*));//8
//
//	return 0;
//}