#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node *prev;
};

void tambahAkhir(Node*& head, Node*& tail, int nilai) {
    Node* baru = new Node();
    baru->data = nilai;
    baru->next = NULL;

	if (tail == NULL){
		tail = baru;
	}else{
        Node* tempt = tail;	
    	baru->prev = tail;
    	tail = baru;
    }
	
    if (head == NULL) {
        head = baru;
	} else {
        Node* temph = head;
        while (temph->next != NULL) {
            temph = temph->next;
        }
        temph->next = baru;
        
    }
}

void tambahAwal(Node*& head, Node*& tail, int nilai) {
    Node* baru = new Node();
    baru->data = nilai;
    baru->next = head;
    head = baru;
    if (tail == NULL) {
        tail = baru;
	} else {
        Node* temp = tail;
        while (temp->prev != NULL) {
            temp = temp->prev;
        }
        temp->prev = baru;
	}
}

void asc(Node* head) {
    Node* temp = head;
    cout << "Asc: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void desc(Node* tail) {
    Node* temp = tail;
    cout << "Desc: ";
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int n, nilai;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Masukkan nilai ke " << i+1 << ": ";
        cin >> nilai;
        tambahAkhir(head, tail, nilai);
    }
    cout <<endl;
    
    cout << "Masukkan data yang ditambahkan di awal: ";
    cin >> nilai;
    tambahAwal(head, tail, nilai);
    cout <<endl;

    cout << "Data setelah ditambah di awal: " <<endl;
    asc(head);
    
    desc(tail);

    return 0;
}
