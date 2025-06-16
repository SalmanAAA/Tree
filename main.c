#include <stdio.h>
#include "tree.h"

int main() {
    Tree t;
    initTree(&t);

    // Menambahkan node ke dalam pohon
    addNode(&t, 1, "root", 2, 0, 0);
    addNode(&t, 2, "Q", 4, 3, 1);
    addNode(&t, 3, "C", 6, 0, 1);
    addNode(&t, 4, "W", 8, 5, 2);
    addNode(&t, 5, "E", 10, 0, 2);
    addNode(&t, 6, "R", 12, 7, 3);
    addNode(&t, 7, "T", 14, 0, 3);
    addNode(&t, 8, "U", 16, 9, 4);
    addNode(&t, 9, "I", 18, 0, 4);
    addNode(&t, 10, "A", 20, 11, 5);
    addNode(&t, 11, "S", 22, 0, 5);
    addNode(&t, 12, "Y", 24, 13, 6);
    addNode(&t, 13, "F", 26, 0, 6);
    addNode(&t, 14, "G", 28, 15, 7);
    addNode(&t, 15, "H", 30, 0, 7);
    addNode(&t, 16, "O", 32, 17, 8);
    addNode(&t, 17, "P", 0, 0, 8);
    addNode(&t, 18, "9", 0, 19, 9);
    addNode(&t, 19, "B", 33, 0, 9);
    addNode(&t, 20, "L", 34, 21, 10);
    addNode(&t, 21, "Z", 0, 0, 10);
    addNode(&t, 22, "X", 35, 23, 11);
    addNode(&t, 23, "D", 36, 0, 11);
    addNode(&t, 24, "J", 0, 25, 12);
    addNode(&t, 25, "N", 0, 0, 12);
    addNode(&t, 26, "I", 37, 27, 13);
    addNode(&t, 27, "M", 0, 0, 13);
    addNode(&t, 28, "5", 0, 29, 14);
    addNode(&t, 29, "6", 0, 0, 14);
    addNode(&t, 30, "2", 38, 31, 15);
    addNode(&t, 31, "3", 0, 0, 15);
    addNode(&t, 32, "spasi", 0, 0, 16);
    addNode(&t, 33, "V", 0, 0, 19);
    addNode(&t, 34, "4", 0, 0, 20);
    addNode(&t, 35, "0", 0, 0, 23);
    addNode(&t, 36, "K", 0, 0, 24);
    addNode(&t, 37, "7", 0, 0, 27);
    addNode(&t, 38, "8", 0, 0, 31);

    printTree(&t);

    return 0;
}
