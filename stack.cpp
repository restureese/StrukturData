#include <iostream>
using namespace std;

#define MAX_CAP 9
typedef int Element;
struct StackRecord{
	int tos;
	Element stack_array[MAX_CAP];
};

typedef struct StackRecord Stack;

void initStack(Stack &s);
bool isEmpty(Stack s);
bool isFull(Stack s);
void push(Stack &s, Element val);
Element pop(Stack &s);
int top(Stack s);
void printStack(Stack s);

int main()
{
	Stack A;
	Stack B;
	Stack C;

	initStack(A);
	initStack(B);
	initStack(C);
	push(A, 50);
	push(A, 75);
	push(A, 100);

	//awal
	cout<<"Menara A : "<<endl;
	printStack(A);


	return 0;
}

void initStack(Stack &s)
{
	s.tos = -1;
}

bool isEmpty(Stack s)
{
	return s.tos == - 1;
}

bool isFull(Stack s)
{
	return s.tos == MAX_CAP - 1;
}

void push(Stack &s, Element val)
{
	if (isFull(s))
		cout<<"penuh";
	else {
		s.tos++;
		s.stack_array[s.tos] = val;
	}
}

Element pop(Stack &s)
{
	Element temp;
	if (isEmpty(s))
		cout<<"kosong";
	else {
		temp = s.stack_array[s.tos];
		s.tos--;
		return temp;
	}
}

int top(Stack s)
{
	int tos;
	tos = s.tos;
	return tos;
}

void printStack(Stack s)
{
	if(isEmpty(s)){
		cout<<"Kosong";
	}else{
		while (top(s)!=-1)
		{
			Element val1 = pop(s);
			cout << val1 <<endl;
		}
	}
}