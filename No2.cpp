#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void asc(struct Node *nodeSekarang);
void desc(struct Node *nodeSekarang);
void terbesar(struct Node *temp);
void terkecil (struct Node *temp);

int main(){

	Node *node1 = NULL;
	Node *node2 = NULL;
	Node *node3 = NULL;
	
	node1 = new Node;
	node2 = new Node;
	node3 = new Node;
	
	
	node1->data = 10;
	node1->next = node2;
	node1->prev = NULL;
	
	node2->data = 20;
	node2->next = node3;
	node2->prev = node1;
	
	node3->data = 30;
	node3->next = NULL;
	node3->prev = node2;
	
	cout <<"Ini Asc" <<endl;
	asc (node1);
	
	
	cout <<"Ini desc" <<endl;
	desc (node3);
	
	terbesar (node1);
	
	terkecil (node3);
	
	cin.get();
	return 0;
}

void asc(struct Node *nodeSekarang)
{
	int i = 1;
	while((nodeSekarang != NULL) && (i <= 3)){
		cout << "Data ke-"<<i<<": "<<nodeSekarang->data <<endl;
		nodeSekarang = nodeSekarang->next;
		i++;
	}
}

void desc(struct Node *nodeSekarang){
	int i = 1;
	while((nodeSekarang != NULL) && (i <= 3)){
		cout << "Data ke-"<<i<<": "<<nodeSekarang->data <<endl;
		nodeSekarang = nodeSekarang->prev;
		i++;
	}
}

void terkecil(struct Node *temp){
	int i = 1;
	int terkecil;
	while (temp != NULL)
	{
		if (temp > temp->prev)
		{
			terkecil = temp->data;
		}
		temp = temp->prev;
		i++;
	}
	cout << "Terkecil adalah: "<<terkecil <<endl;
}

void terbesar(struct Node *temp)
{
	int i = 1;
	int terbesar;
	while (temp != NULL)
	{
		if (temp > temp->next)
		{
			terbesar = temp->data;
		}
		temp = temp->next;
		i++;
	}
	cout << "Terbesar adalah: "<<terbesar <<endl;
}
