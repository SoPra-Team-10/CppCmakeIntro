int main() {
    int a = 0; // Liegt auf dem Stack
    int *aPtr = &a; // Zeigt auf den Stack

    int *bPtr = new int(); // Liegt auf dem Heap
    delete bPtr; // Speicher muss freigegeben werden
}
