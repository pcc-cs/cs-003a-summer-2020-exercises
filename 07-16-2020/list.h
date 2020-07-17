#ifndef LIST_H_
#define LIST_H_

#include <cstdint>

struct Node {
    int64_t value;
    Node *next = nullptr;

    Node(int);
    void dump(const char *);
};

#endif  // LIST_H_