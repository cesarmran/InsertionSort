#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& vect) {
    int n = vect.size();
    for (int i=1; i<n; i++) {
        int key = vect[i];
        int j = i-1;
        while (j>=0 && vect[j]>key) {
            vect[j+1]=vect[j];
            j = j-1;
        }
        vect[j+1]=key;
    }
}



int main() {
    vector<int> vect = {5, 2, 4, 6, 1, 3};
    insertionSort(vect);
    for(int num:vect) {
        cout << num << " ";
    }
    return 0;
}
