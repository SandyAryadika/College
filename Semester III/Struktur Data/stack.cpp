#include <iostream>
using namespace std;

struct orderDetails {
    string nomorOrder;
    int hargaOrder;
    orderDetails* prev;
    orderDetails* next;
};

orderDetails* head, * tail, * cur, * newNode, * del;
int maksimalOrder = 5;

void createOrder(string nomorOrder, int hargaOrder) {
    head = new orderDetails();
    head->nomorOrder = nomorOrder;
    head->hargaOrder = hargaOrder;
    head->prev = NULL;
    head->next = NULL;
    tail = head;
}

int countOrder() {
    if (head == NULL) {
        return 0;
    }
    else {
        int banyak = 0;
        cur = head;
        while (cur != NULL) {
            cur = cur->next;
            banyak++;
        }
        return banyak;
    }
}

bool isFullOrder() {
    if (countOrder() == maksimalOrder) {
        return true;
    }
    else {
        return false;
    }
}

bool isEmptyOrder() {
    if (countOrder() == 0) {
        return true;
    }
    else {
        return false;
    }
}

void pushOrder(string nomorOrder, int hargaOrder) {
    if (isFullOrder()) {
        cout << "Stack Full!!" << endl;
    }
    else {
        if (isEmptyOrder()) {
            createOrder(nomorOrder, hargaOrder);
        }
        else {
            newNode = new orderDetails();
            newNode->nomorOrder = nomorOrder;
            newNode->hargaOrder = hargaOrder;
            newNode->prev = tail;
            tail->next = newNode;
            newNode->next = NULL;
            tail = newNode;
        }
    }
}

void popOrder() {
    del = tail;
    tail = tail->prev;
    if (tail != NULL) {
        tail->next = NULL;
    }
    delete del;
}

void displayOrder() {
    if (isEmptyOrder()) {
        cout << "Data Order kosong" << endl;
    }
    else {
        cout << "\n\nData Order : " << endl;
        cur = tail;
        while (cur != NULL) {
            cout << "Data Order : " << cur->nomorOrder << " - Rp." << cur->hargaOrder << endl;
            cur = cur->prev;
        }
    }
}

void peekOrder(int posisi) {
    if (isEmptyOrder()) {
        cout << "Data Order kosong" << endl;
    }
    else {
        int nomor = 1;
        cur = tail;
        while (nomor < posisi && cur != NULL) {
            cur = cur->prev;
            nomor++;
        }
        if (cur != NULL) {
            cout << "Data Order Posisi ke-" << posisi << " : " << cur->nomorOrder << " - Rp." << cur->hargaOrder << endl;
        }
        else {
            cout << "Data Order tidak ditemukan pada posisi " << posisi << endl;
        }
    }
}

void changeOrder(string nomorOrder, int hargaOrder, int posisi) {
    if (isEmptyOrder()) {
        cout << "Data Order kosong" << endl;
    }
    else {
        int nomor = 1;
        cur = tail;
        while (nomor < posisi && cur != NULL) {
            cur = cur->prev;
            nomor++;
        }
        if (cur != NULL) {
            cur->nomorOrder = nomorOrder;
            cur->hargaOrder = hargaOrder;
        }
        else {
            cout << "Data Order tidak ditemukan pada posisi " << posisi << endl;
        }
    }
}

void destroyOrder() {
    cur = head;
    while (cur != NULL) {
        del = cur;
        head = head->next;
        delete del;
        cur = cur->next;
    }
}

int main() {
    createOrder("002 Mouse", 100000);
    displayOrder();

    pushOrder("004 Keyboard", 200000);
    displayOrder();

    pushOrder("001 Laptop", 19000000);
    displayOrder();

    pushOrder("003 MousePad", 50000);
    displayOrder();

    pushOrder("005 Haedset", 99000);
    displayOrder();

    pushOrder("007 Chip Processor", 21000000);

    cout << endl;
    peekOrder(2);
    cout << endl;

    changeOrder("008 CPU", 190000, 2);
    displayOrder();

    cout << endl;
    popOrder();
    int orderCount = countOrder();
    cout << "Number of orders: " << orderCount << endl;

    // Destroy the orders if needed
    // destroyOrder();

    cout << endl;
    displayOrder();

    return 0;
}