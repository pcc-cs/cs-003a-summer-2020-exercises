#include "list.h"

#include <cstdio>

Node::Node(int v) : value(v) {}

void Node::dump(const char *prefix) {
  printf("%s: &n = %p, &n.value = %p, &n.next = %p\n", prefix, this, &value, &next);
}
