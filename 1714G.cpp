#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <iostream>

const int MAX_LEN = 100005;

typedef struct node
{
    int p;
    int a;
    int b;
    int A;
    int B;
    int r;
    int d;
    int tmpNode;
    int childNum;
    struct node *childs[MAX_LEN];
}Node;

void forNode(Node*);

int main () {
    int t, n, tmpB, h;
    Node **nodes = (Node**)malloc(sizeof(Node*)*MAX_LEN);
    std::queue<Node*> nodeQue;
    Node *tmpNode, *preNode;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++) {
            nodes[i] = (Node*)malloc(sizeof(Node));
            nodes[i]->p = nodes[i]->A = nodes[i]->B = nodes[i]->r = nodes[i]->d = nodes[i]->childNum = 0;
        }
        for (int i = 2; i <= n; i++) {
            scanf("%d %d %d", &nodes[i]->p, &nodes[i]->a, &nodes[i]->b);
            Node* preNode = nodes[nodes[i]->p];
            preNode->childs[preNode->childNum++] = nodes[i];
        }
        nodeQue.push(nodes[1]);
        while (!nodeQue.empty()) {
            tmpNode = nodeQue.front();
            nodeQue.pop();
            preNode = nodes[tmpNode->p];
            if (tmpNode->p != 0) {
                tmpNode->A = tmpNode->a + preNode->A;
                tmpNode->B = tmpNode->b + preNode->B;
                tmpNode->r = tmpNode->d = preNode->d + 1;
                std::cout << tmpNode->A << " " << tmpNode->B << std::endl;
            }
            tmpB = tmpNode->B;
            h = tmpNode->p;
            while (tmpB > tmpNode->A) {
                tmpB -= nodes[h]->b;
                tmpNode->r--;
                h = nodes[h]->p;
            }
            for (int i = 0; i < tmpNode->childNum; i++) {
                nodeQue.push(tmpNode->childs[i]);
            }
        }
        for (int i = 2; i <= n; i++) {
            if (i > 2) {
                printf(" ");
            }
            printf("%d", nodes[i]->r);
        }
        printf("\n");
    }
    return 0;
}