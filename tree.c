#include <stdio.h>
#include <string.h>
#include "tree.h"

void initTree(Tree *t) {
    t->size = 0;
}

void addNode(Tree *t, int index, const char *info, int fs, int nb, int pr) {
    t->data[index].index = index;
    strcpy(t->data[index].info, info);
    t->data[index].fs = fs;
    t->data[index].nb = nb;
    t->data[index].pr = pr;
    if (index > t->size) t->size = index;
}

void printSubTree(Tree *t, int index, int level) {
    if (index == 0) return;

    for (int i = 0; i < level; i++) printf("  ");  // indentasi
    printf("- [%d] %s (fs: %d, nb: %d, pr: %d)\n",
        t->data[index].index,
        t->data[index].info,
        t->data[index].fs,
        t->data[index].nb,
        t->data[index].pr);

    // print son
    if (t->data[index].fs != 0) {
        printSubTree(t, t->data[index].fs, level + 1);
    }

    // print brother
    if (t->data[index].nb != 0) {
        printSubTree(t, t->data[index].nb, level);
    }
}

void printTree(Tree *t) {
    printf("Isi Tree (struktur pohon):\n");
    printSubTree(t, 1, 0);  // mulai dari root index 1
}

void printChild(Tree *t, int index) {
    if (t->data[index].fs == 0) {
        printf("Node [%d] %s tidak memiliki anak.\n", index, t->data[index].info);
        return;
    }

    printf("Anak dari [%d] %s:\n", index, t->data[index].info);
    int child = t->data[index].fs;
    while (child != 0) {
        printf("- [%d] %s\n", child, t->data[child].info);
        child = t->data[child].nb;
    }
}
