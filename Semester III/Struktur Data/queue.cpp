#include <iostream>
using namespace std;

struct antrianTiket{
  // data / member
string nama;
int umur;

  // pointer next
  antrianTiket *next;
};

int maksimalAntrianLL = 3;
antrianTiket *head, *tail, *cur, *del, *newNode;

// count Linked List
int countLL()
{
if( head == NULL ){
    return 0;
}else{
    int banyak = 0;
    cur = head;
    while( cur != NULL ){
        cur = cur->next;
        banyak++;
    }
    return banyak;
    }
}

// isFull Linked List
bool isFullLL()
{
if( countLL() == maksimalAntrianLL ){
    return true;
}else{
    return false;
}
}

// isEmpty Linked List
bool isEmptyLL()
{
if( countLL() == 0 ){
    return true;
}else{
    return false;
}
}

// enqueue / penambahan
void enqueueLL( string nama, int umur ){

if( isFullLL() ){
    cout << "Antrian Penuh!" << endl;
}else{
    
    if( isEmptyLL() ){
        head = new antrianTiket();
        head->nama = nama;
        head->umur = umur;
        head->next = NULL;
        tail = head;
    }else{
        newNode = new antrianTiket();
        newNode->nama = nama;
        newNode->umur = umur;
        newNode->next = NULL;
        tail->next = newNode;
        tail = newNode;
        }
    }
}

// dequeue Linked List
void dequeueLL()
{
if( isEmptyLL() ){
    cout << "Data Antrian Kosong!" << endl;
}else{
    del = head;
    head = head->next;
    del->next = NULL;
    delete del;
    }
}

// destroy / clear
void clearLinkedList()
{
if( isEmptyLL() ){
    cout << "Data Antrian Kosong!!" << endl;
}else{
    cur = head;
    while( cur != NULL ){
        del = cur;
        cur = cur->next;
        del->next = NULL;
        delete del;
    }
    head = NULL;
    tail = NULL;
    }
}

// displayLL Linked List
void displayLL()
{
cout << "Data Antrian : " << endl;
if( isEmptyLL() ){
    cout << "Data Antrian Kosong!!" << endl;
    }else{
    cout << "Banyak data antrian : " << countLL() << endl;
    cur = head;
    int nomor = 1;
    while( nomor <= maksimalAntrianLL ){
        
        if( cur != NULL ){
        cout << nomor << ". " << cur->nama << " - " << cur->umur << " tahun." << endl;
        cur = cur->next;
        }else{
        cout << nomor << ". " << "(kosong)" << endl;
        }
        nomor++;
    }
    }
    cout << "\n" << endl;
}

int main() {

enqueueLL("Sandy", 19);
enqueueLL("Aryadika", 19);
enqueueLL("Widodo", 19);

displayLL();

dequeueLL();

displayLL();

clearLinkedList();

displayLL();

return 0;
}
