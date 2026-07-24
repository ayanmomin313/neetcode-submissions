class DynamicArray {
    private:
    int* arr;      // Pointer to the array
    int size;      // Number of elements currently stored
    int capacity;  // Maximum elements the array can hold
public:

    DynamicArray(int capacity) {//constructor
        this->capacity=capacity;
        size=0;
        arr= new int[capacity];
    }

    int get(int i) {
        return arr[i];

    }

    void set(int i, int n) {
              arr[i]=n;
    }

    void pushback(int n) {
                    if(capacity==size   ){
                        resize();


                    }
                    arr[size]=n;
                    size++;


    }

    int popback() {
            size--;
           return  arr[size];
    }

    void resize() {
          capacity = capacity * 2;
              int* newArr = new int[capacity];
              for (int i = 0; i < size; i++) {
    newArr[i] = arr[i];
}
delete[] arr;
arr = newArr;

    }

    int getSize() {
            return size;
    }

    int getCapacity() {
       return capacity;
    }
};
