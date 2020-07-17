#include <cstdio>

#include "list.h"

int main() {
    Node n1(100);

    // Check value
    printf("n1.value = %d\n", n1.value);

    // See memory layout
    n1.dump("n1");

    // Point n1.next to n2 to create linked list of 2 nodes
    Node n2(200);
    n1.next = &n2;
    n2.dump("n2");
    
    // n2.value = n1.next->value
    printf("n2.value = %d, n2.next = %p\n", n2.value, n2.next);
    printf("n1.next->value = %d, n1.next->next = %p\n", n1.next->value, n1.next->next);

    // Create node using new and link from n2
    Node *n3p = new Node(300);
    n2.next = n3p;
    n3p->dump("n3");
    delete n3p;
}
