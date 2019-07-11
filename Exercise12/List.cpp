#include"List.h"
#include<iostream>
#include <cstring>
#include <fstream> 
struct node
{
	string data;
	node *next;
};
typedef struct node node, *list;

// ����������
node *creat(vector<string> datas)
{
	node *head, *p;
	head = new node;
	head->next = new node;
	p = head->next;//�����ƶ�ָ��  �ʼָ��ͷ���

	for (int i = 0; i < datas.size(); i++)
	{
		if (datas[i].length() > 0) {
			node *s = new node;
			s->data = datas[i];
			p->next = s;//���˽ڵ���ͷ�ڵ�����
			p = s;//����ƶ�ָ��,�Ա���һ������   pһֱָ����������һ���ڵ�
		}
	}
	head = head->next;
	p->next = NULL;
	return head;
}

// ������ⳤ
int length(node *head)
{
	int n = 0;
	node *p = head;

	while (p != NULL)
	{
		p = p->next;
		n++;
	}

	return n;
}

// �������ӡ
void printL(node *head)
{
	node *p = head;

	while (p != NULL)
	{
		cout << "Single Linker data is " << p->data << endl;
		p = p->next;
	}
}

// ���������
node *insert(node *head, char* data)
{
	node *p0, *p1, *p2;
	p1 = head;

	p2 = new node;
	p0 = new node; // ����ڵ�
	p0->data = data;// ��������

	while (p0->data > p1->data && p1->next != NULL)
	{
		p2 = p1;
		p1 = p1->next;// p0,p1��p2λ��: p2->p1->p0
	}

	if (p0->data <= p1->data)
	{
		if (p1 == head)
		{// ͷ��ǰ�β��� p0��p1λ��: p0->p1->...
			head = p0;
			p0->next = p1;
		}
		else
		{// �����м�ڵ� p0,p1��p2λ��: p2-> p0 -> p1
			p2->next = p0;
			p0->next = p1;
		}
	}
	else
	{   // β������ڵ� p0,p1��p2λ��: p2->p1->p0->NULL
		p1->next = p0;
		p0->next = NULL;
	}
	return head;
}
int length_list(node *pHeader) {
	node *p = pHeader->next;
	int i = 0;
	while (p != NULL) {
		++i;
		p = p->next;
	}
	return i;

}
//=============��������====================
void insertSort(node *pHeader)
{
	node *p;
	node *r;
	if (pHeader == NULL) {
		return;
	}
	int i, j;
	string temp;
	int len = length_list(pHeader);
	for (i = 0, p = pHeader->next; i < len - 1; ++i, p = p->next) {
		for (j = i + 1, r = p->next; j < len; ++j, r = r->next) {
			string pvalue = p->data.substr(3, 1);
			string rvalue = r->data.substr(3, 1);
			if ( (int)pvalue[0] > (int)rvalue[0]) {
				temp = p->data;
				p->data = r->data;
				r->data = temp;
			}
		}
	}

}



List::List() {
	this->root = NULL;
}

void List::insert_Person(Person *node)
{
	char key[20];
	strcpy(key, node->name);
	Person *curr_node = root;
	Person *previous = 0;
	while (curr_node != 0 && strcmp(curr_node->name, key) < 0)
	{
		previous = curr_node;
		curr_node = curr_node->Next;
	}
	node->insert();
	node->ptr->Next = curr_node;
	if (previous == 0)
		root = node->ptr;
	else previous->Next = node->ptr;
}

void List::remove(char *name)
{
	Person * curr_node = root;
	Person * previous = 0;
	while (curr_node != 0 && strcmp(curr_node->name, name) != 0)
	{
		previous = curr_node;
		curr_node = curr_node->Next;
	}
	if (curr_node != 0 && previous == 0)
	{
		root = curr_node->Next;
		delete curr_node;
	}
	else if (curr_node != 0 && previous != 0)
	{
		previous->Next = curr_node->Next;
		delete curr_node;
	}
}

void List::print_List()
{
	Person *cur = root;
	while (cur != 0)
	{
		cur->print();
		cur = cur->Next;
	}
}
vector<string> List::split(const string& str, const string& delim) {
	vector<string> res;
	if ("" == str) return res;
	//�Ƚ�Ҫ�и���ַ�����string����ת��Ϊchar*����  
	char * strs = new char[str.length() + 1]; //��Ҫ����  
	strcpy(strs, str.c_str());

	char * d = new char[delim.length() + 1];
	strcpy(d, delim.c_str());

	char *p = strtok(strs, d);
	while (p) {
		string s = p; //�ָ�õ����ַ���ת��Ϊstring����  
		res.push_back(s); //����������  
		p = strtok(NULL, d);
	}

	return res;
}
node *head;
void List::ReadFiles()
{
	char name[255];
	cout << "�������ȡ���ļ�����" << endl;
	cin >> name;
	ifstream readFile(name);
	readFile.is_open() ? void() : exit(404);
	string res((istreambuf_iterator<char>(readFile)), istreambuf_iterator<char>());
	vector<string> AllStr = split(res, "\n");
	//string* strs = new string[AllStr.size()];
	for (int i = 0; i < AllStr.size(); i++) {
		if (AllStr[i].find("xx") != AllStr[i].npos) {
			AllStr[i].erase();
		}
	}
	head = creat(AllStr);

	insertSort(head);

	readFile.close();
}

