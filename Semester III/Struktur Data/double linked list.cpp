#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama, npm;
    int usia;
    Mahasiswa* next, *prev;
};

Mahasiswa* head, *tail, *cur, *newNode, *del, *afterNode;

void createDLL(string nama, string npm, int usia) {
    head = new Mahasiswa();
    head->nama = nama;
    head->npm = npm;
    head->usia = usia;
    head->prev = NULL;
    head->next = NULL;
    tail = head;
}

void addFirst(string nama, string npm, int usia) {
    newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->npm = npm;
    newNode->usia = usia;
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void addLast(string nama, string npm, int usia) {
    newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->npm = npm;
    newNode->usia = usia;
    newNode->prev = tail;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void addMiddle(string nama, string npm, int usia, int posisi) {
    newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->npm = npm;
    newNode->usia = usia;
    cur = head;
    int seq = 1;
    while (seq < posisi - 1) {
        cur = cur->next;
        seq++;
    }
    afterNode = cur->next;
    newNode->prev = cur;
    newNode->next = afterNode;
    cur->next = newNode;
    afterNode->prev = newNode;
}

void changeFirst(string newNama, string newNpm, int newUsia) {
    if (head != NULL) {
        head->nama = newNama;
        head->npm = newNpm;
        head->usia = newUsia;
    }
}

void changeLast(string newNama, string newNpm, int newUsia) {
    if (tail != NULL) {
        tail->nama = newNama;
        tail->npm = newNpm;
        tail->usia = newUsia;
    }
}

void changeMiddle(string newNama, string newNpm, int newUsia, int posisi) {
    cur = head;
    int seq = 1;
    while (seq < posisi && cur != NULL) {
        cur = cur->next;
        seq++;
    }
    if (cur != NULL) {
        cur->nama = newNama;
        cur->npm = newNpm;
        cur->usia = newUsia;
    }
}

void deleteMiddle(int posisi) {
    cur = head;
    int seq = 1;
    while (seq < posisi - 1) {
        cur = cur->next;
        seq++;
    }
    del = cur->next;
    afterNode = del->next;
    cur->next = afterNode;
    afterNode->prev = cur;
    delete del;
}

void deleteFirst() {
    del = head;
    head = head->next;
    head->prev = NULL;
    delete del;
}

void deleteLast() {
    del = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete del;
}

void printDLL() {
    cur = head;
    while (cur != NULL) {
        cout << "Nama Mahasiswa: " << cur->nama << endl;
        cout << "NPM Mahasiswa: " << cur->npm << endl;
        cout << "Usia Mahasiswa: " << cur->usia << endl;
        cur = cur->next;
    }
}

int main() {
    cout << "==== Create Double Linked List ===" << endl;
    createDLL("Sarah", "2008180014", 17);
    printDLL();
    cout << "=============================" << endl;

    cout << "==== ADD FIRST ===" << endl;
    addFirst("Yusron", "2008180004", 20);
    printDLL();
    cout << "=============================" << endl;

    cout << "==== ADD LAST ===" << endl;
    addLast("Yudo", "2008180024", 19);
    printDLL();
    cout << "=============================" << endl;

    cout << "=== DELETE FIRST ===" << endl;
    deleteFirst();
    printDLL();
    cout << "=============================" << endl;

    cout << "=== DELETE LAST ===" << endl;
    deleteLast();
    printDLL();
    cout << "=============================" << endl;

    cout << "==== ADD FIRST ===" << endl;
    addFirst("Sandy", "2008180044", 20);
    printDLL();
    cout << "=============================" << endl;

    cout << "==== ADD LAST ===" << endl;
    addLast("Widodo", "2008180094", 21);
    printDLL();
    cout << "=============================" << endl;

    cout << "==== ADD MIDDLE ===" << endl;
    addMiddle("Aryadika", "2008180064", 22, 3);
    printDLL();
    cout << "=============================" << endl;

    cout << "=== DELETE MIDDLE ===" << endl;
    deleteMiddle(3);
    printDLL();
    cout << "=============================" << endl;

    cout << "==== CHANGE FIRST ===" << endl;
    changeFirst("Diki", "2008180074", 19);
    printDLL();
    cout << "=============================" << endl;

    cout << "==== CHANGE LAST ===" << endl;
    changeLast("Dika", "2008180074", 17);
    printDLL();
    cout << "=============================" << endl;

    cout << "==== CHANGE MIDDLE ===" << endl;
    changeMiddle("Diko", "2008180004", 19, 3);
    printDLL();
    cout << "=============================" << endl;

    return 0;
}

