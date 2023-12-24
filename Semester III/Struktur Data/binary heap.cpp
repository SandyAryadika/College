#include <iostream>
using namespace std;

class BinaryHeap {
private:
    const static int MAX_SIZE = 15;
    int heap[MAX_SIZE];
    int size;

public:
    BinaryHeap() {
        size = 0;
    }

    // returns the index of the parent node
    static int parent(int i) {
        return (i - 1) / 2;
    }

    // return the index of the left child 
    static int leftChild(int i) {
        return 2 * i + 1;
    }

    // return the index of the right child 
    static int rightChild(int i) {
        return 2 * i + 2;
    }

    static void swap(int *x, int *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

    // insert the item at the appropriate position
    void insertMaxHeap(int data) {
        if (size >= MAX_SIZE) {
            cout << "Heap penuh. Tidak dapat menyisipkan" << endl;
            return;
        }

        // pertama-tama sisipkan elemen di posisi terakhir array 
        // dan pindahkan ke atas
        heap[size] = data;
        size = size + 1;

        // gerakkan ke atas sampai properti heap terpenuhi
        int i = size - 1;
        while (i != 0 && heap[parent(i)] < heap[i]) {
            swap(&heap[parent(i)], &heap[i]);
            i = parent(i);
        }
    }

    void insertMinHeap(int data) {
        if (size >= MAX_SIZE) {
            cout << "Heap penuh. Tidak dapat menyisipkan" << endl;
            return;
        }

        // pertama-tama sisipkan elemen di posisi terakhir array 
        // dan pindahkan ke atas
        heap[size] = data;
        size = size + 1;

        // gerakkan ke atas sampai properti heap terpenuhi
        int i = size - 1;
        while (i != 0 && heap[parent(i)] > heap[i]) {
            swap(&heap[parent(i)], &heap[i]);
            i = parent(i);
        }
    }

    // pindahkan elemen pada posisi i dari array ke posisi yang sesuai
    void maxHeapify(int i) {
        // temukan node anak kiri
        int left = leftChild(i);

        // temukan node anak kanan
        int right = rightChild(i);

        // temukan yang terbesar di antara ketiga node
        int largest = i;

        // periksa apakah node kiri lebih besar dari node saat ini
        if (left < size && heap[left] > heap[largest]) {
            largest = left;
        }

        // periksa apakah node kanan lebih besar dari node saat ini 
        // dan node kiri
        if (right < size && heap[right] > heap[largest]) {
            largest = right;
        }

        // tukar node terbesar dengan node saat ini 
        // dan ulangi proses ini sampai node saat ini lebih besar dari 
        // node kanan dan kiri
        if (largest != i) {
            swap(&heap[i], &heap[largest]);
            maxHeapify(largest);
        }
    }

    // pindahkan elemen pada posisi i dari array ke posisi yang sesuai
    void minHeapify(int i) {
        // temukan node anak kiri
        int left = leftChild(i);

        // temukan node anak kanan
        int right = rightChild(i);

        // temukan yang terkecil di antara ketiga node
        int smallest = i;

        // periksa apakah node kiri lebih kecil dari node saat ini
        if (left < size && heap[left] < heap[smallest]) {
            smallest = left;
        }

        // periksa apakah node kanan lebih kecil dari node saat ini 
        // dan node kiri
        if (right < size && heap[right] < heap[smallest]) {
            smallest = right;
        }

        // tukar node terkecil dengan node saat ini 
        // dan ulangi proses ini sampai node saat ini lebih kecil dari 
        // node kanan dan kiri
        if (smallest != i) {
            swap(&heap[i], &heap[smallest]);
            minHeapify(smallest);
        }
    }

    // mengembalikan item maksimum dari heap
    int getMax() {
        return heap[0];
    }

    // mengembalikan item minimum dari heap
    int getMin() {
        return heap[0];
    }

    // menghapus item maksimum dan mengembalikan nilainya
    int extractMax() {
        int maxItem = heap[0];

        // ganti item pertama dengan item terakhir
        heap[0] = heap[size - 1];
        size = size - 1;

        // mempertahankan properti heap dengan menjalankan maxHeapify pada
        // item pertama
        maxHeapify(0);
        return maxItem;
    }

    // menghapus item minimum dan mengembalikan nilainya
    int extractMin() {
        int minItem = heap[0];

        // ganti item pertama dengan item terakhir
        heap[0] = heap[size - 1];
        size = size - 1;

        // mempertahankan properti heap dengan menjalankan minHeapify pada
        // item pertama
        minHeapify(0);
        return minItem;
    }

    // mencetak heap
    void printHeap() {
        for (int i = 0; i < size; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    BinaryHeap maxHeap;
    BinaryHeap minHeap;

    maxHeap.insertMaxHeap(3);
    maxHeap.insertMaxHeap(2);
    maxHeap.insertMaxHeap(15);
    maxHeap.insertMaxHeap(5);
    maxHeap.insertMaxHeap(4);
    maxHeap.insertMaxHeap(45);

    minHeap.insertMinHeap(3);
    minHeap.insertMinHeap(2);
    minHeap.insertMinHeap(15);
    minHeap.insertMinHeap(5);
    minHeap.insertMinHeap(4);
    minHeap.insertMinHeap(45);
    minHeap.insertMinHeap(90);
    minHeap.insertMinHeap(50);
    minHeap.insertMinHeap(31);
    

    cout << "Max Heap: ";
    maxHeap.printHeap();

    cout << "Max Item: " << maxHeap.extractMax() << endl;

    cout << "Max Heap setelah ekstraksi: ";
    maxHeap.printHeap();

    cout << "Min Heap: ";
    minHeap.printHeap();

    cout << "Min Item: " << minHeap.extractMin() << endl;

    cout << "Min Heap setelah ekstraksi: ";
    minHeap.printHeap();

    return 0;
}
