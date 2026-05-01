#include <iostream>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

void asc(struct Node *nodeSekarang);
void dec(struct Node *nodeSekarang);
void total (struct Node *nodeSekarang);

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
	
	
	cout <<"Ini Prev" <<endl;
	dec (node3);
	
	total (node1);
	
	cin.get();
	return 0;
}

void asc(struct Node *nodeSekarang)
{
	int i = 1;
	int jumlah = 0;
	while((nodeSekarang != NULL) && (i <= 3)){
		cout << "Data ke-"<<i<<": "<<nodeSekarang->data <<endl;
		nodeSekarang = nodeSekarang->next;
		i++;
		jumlah++;
	}
	cout << "Jumlah data: " << jumlah <<endl <<endl;
}

void dec(struct Node *nodeSekarang){
	int i = 1;
	int jumlah = 0;
	while((nodeSekarang != NULL) && (i <= 3)){
		cout << "Data ke-"<<i<<": "<<nodeSekarang->data <<endl;
		nodeSekarang = nodeSekarang->prev;
		i++;
		jumlah++;
	}
	cout << "Jumlah data: " << jumlah <<endl;
}

void total (struct Node *nodeSekarang)
{
	int i = 1;
	int total = 0;
	while (nodeSekarang != NULL)
	{
		total += nodeSekarang->data;
		nodeSekarang = nodeSekarang->next;
		i++;
	}
	cout << "Total nilai adalah: "<<total <<endl;
}
