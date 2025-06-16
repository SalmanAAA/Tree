#ifndef TREE_H
#define TREE_H

#define MAX 100

typedef struct {
    int index;
    char info[100];
    int fs;  // first son
    int nb;  // next brother
    int pr;  // parent
} Node;

typedef struct {
    Node data[MAX];
    int size;
} Tree;

void initTree(Tree *t);
void addNode(Tree *t, int index, const char *info, int fs, int nb, int pr);
void printTree(Tree *t);
void printChild(Tree *t, int index);

#endif
