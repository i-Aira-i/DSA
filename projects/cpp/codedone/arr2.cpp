#include <iostream>
#include <cstdlib>

using namespace std;

class Array {
private:
    int total_size;
    int used_size;
    int* ptr;

public:
    Array(int tsize, int usize) {
        total_size = tsize;
        used_size = usize;
        ptr = (int*)malloc(tsize * sizeof(int));
    }

    void setVal() {
        int n;
        for (int i = 0; i < used_size; i++) {
            cout << "Enter element " << i << ": ";
            cin >> n;
            ptr[i] = n;
        }
    }

    void show() {
        for (int i = 0; i < used_size; i++) {
            cout << ptr[i] << "\n";
        }
    }

    int get(int index) {
        if (index < 0 || index >= used_size) {
            cerr << "Error: Index out of bounds" << endl;
            return 0;
        }
        return ptr[index];
    }

    void set(int index, int value) {
        if (index < 0 || index >= used_size) {
            cerr << "Error: Index out of bounds" << endl;
            return;
        }
        ptr[index] = value;
    }

    ~Array() {
        free(ptr);
    }
};

int main() {
    Array marks(100, 10);
    marks.setVal();
    marks.show();

    cout << "\nElement at index 3: " << marks.get(3) << endl;
    marks.set(3, 42);
    cout << "Element at index 3 after setting: " << marks.get(3) << endl;

    return 0;
}
