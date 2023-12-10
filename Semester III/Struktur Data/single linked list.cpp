#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama, npm;
    int usia;
    Mahasiswa *next;
};

Mahasiswa *head, *tail, *cur, *newNode, *del;

void createSLL(string nama, string npm, int usia) {
    head = new Mahasiswa();
    head->nama = nama;
    head->npm = npm;
    head->usia = usia;
    head->next = NULL;
    tail = head;
}

void addFirst(string nama, string npm, int usia) {
    newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->npm = npm;
    newNode->usia = usia;
    newNode->next = head;
    head = newNode;
}

void addLast(string nama, string npm, int usia) {
    newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->npm = npm;
    newNode->usia = usia;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

void changeFirst(string nama, string npm, int usia) {
    if (head != NULL) {
        head->nama = nama;
        head->npm = npm;
        head->usia = usia;
    } else {
        cout << "List Kosong." << endl;
    }
}

void changeLast(string nama, string npm, int usia) {
    if (tail != NULL) {
        tail->nama = nama;
        tail->npm = npm;
        tail->usia = usia;
    } else {
        cout << "List Kosong." << endl;
    }
}

void deleteFirst() {
    if (head != NULL) {
        del = head;
        head = head->next;
        delete del;
    } else {
        cout << "List Kosong." << endl;
    }
}

void deleteLast() {
    if (head != NULL) {
        del = tail;
        cur = head;
        while (cur->next != tail) {
            cur = cur->next;
        }
        tail = cur;
        tail->next = NULL;
        delete del;
    } else {
        cout << "List Kosong." << endl;
    }
}

void addMiddle(string nama, string npm, int usia, int position) {
    if (position < 1) {
        cout << "Posisi Tidak Valid." << endl;
        return;
    }

    newNode = new Mahasiswa();
    newNode->nama = nama;
    newNode->npm = npm;
    newNode->usia = usia;
    cur = head;

    for (int i = 1; i < position - 1 && cur != NULL; ++i) {
        cur = cur->next;
    }

    if (cur == NULL) {
        cout << "Position out of Bounds." << endl;
        return;
    }

    newNode->next = cur->next;
    cur->next = newNode;
}

void changeMiddle(string nama, string npm, int usia, int position) {
    if (position < 1) {
        cout << "Posisi Tidak Valid." << endl;
        return;
    }

    cur = head;
    for (int i = 1; i < position && cur != NULL; ++i) {
        cur = cur->next;
    }

    if (cur == NULL) {
        cout << "Position out of Bounds." << endl;
        return;
    }

    cur->nama = nama;
    cur->npm = npm;
    cur->usia = usia;
}

void deleteMiddle(int position) {
    if (position < 1) {
        cout << "Posisi Tidak Valid." << endl;
        return;
    }

    if (head == NULL) {
        cout << "List Kosong." << endl;
        return;
    }

    cur = head;
    Mahasiswa *prev = NULL;
    for (int i = 1; i < position && cur != NULL; ++i) {
        prev = cur;
        cur = cur->next;
    }

    if (cur == NULL) {
        cout << "Position out of Bounds." << endl;
        return;
    }

    if (prev == NULL) {
        // Deleting the first node
        head = cur->next;
    } else {
        prev->next = cur->next;
    }

    delete cur;
}

void cetakSLL() {
    cur = head;
    while (cur != NULL) {
        cout << "Nama Mahasiswa : " << cur->nama << endl;
        cout << "NPM Mahasiswa : " << cur->npm << endl;
        cout << "Usia Mahasiswa : " << cur->usia << endl;
        cur = cur->next;
    }
}

int main() {
    cout << "----- CREATE SLL -----" << endl;
    createSLL("Yusron", "22081010001", 19);

    cetakSLL();
    cout << "\n";

    cout << "----- ADD FIRST -----" << endl;
    addFirst("Sarah", "22081010002", 19);
    cetakSLL();
    cout << "\n";

    cout << "----- ADD LAST -----" << endl;
    addLast("Vendy", "220810100003", 19);
    cetakSLL();
    cout << "\n";

    cout << "----- CHANGE FIRST -----" << endl;
    changeFirst("Putri", "220810100004", 19);
    changeLast("Sandy", "220810100005", 19);
    cetakSLL();
    cout << "\n";

    cout << "----- ADD MIDDLE -----" << endl;
    addMiddle("Deva", "220810100006", 19, 2);
    cetakSLL();
    cout << "\n";

    cout << "----- CHANGE MIDDLE -----" << endl;
    changeMiddle("Maftuhah", "220810100007", 19, 3);
    cetakSLL();
    cout << "\n";

    cout << "----- DELETE FIRST -----" << endl;
    deleteFirst();
    cetakSLL();
    cout << "\n";

    cout << "----- DELETE MIDDLE -----" << endl;
    deleteMiddle(2);
    cetakSLL();
    cout << "\n";

    return 0;
}
