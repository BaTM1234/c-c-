#include <iostream>

using namespace std;

struct List{
	int data;
	List *next;
};

List *init (int dt);
List *add (List *lt, int data);
List *search (List *lt, int data);
List *del (List *lt, int data);

List *init (int dt){
	List *l;
	l = new List;
	if (l == NULL)
	{
		cerr << "Khong cap phat duoc bo nho"<<endl;
		return NULL;
	}
	l->data = dt;
	l->next = NULL;
	return l;
}

List *add (List *lt, int dt){
	List *p;
	p = init(dt);
	List *temp = lt;
	if (temp == NULL) return p;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = p;
	return lt;
}

List *search (List *lt, int dt){
	
}

List *del (List *lt, int dt){
	
}

void display(List *lt)
{
	List *temp = lt;
	while (temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main ()
{
	List *p;
	p = init(3);
	display(p);
	p = add(p, 10);
	display(p);
	
	
	
	return 0;
}
