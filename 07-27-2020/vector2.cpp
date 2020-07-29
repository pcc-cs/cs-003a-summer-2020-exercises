#include <algorithm>
#include <cstdio>
#include <vector>

#define IN(v, val) (std::find(v.begin(), v.end(), val) != v.end())
#define MSG(b) (printf(b ? "PRESENT\n" : "NOT PRESENT\n"))

class A {
 private:
  int _val;

 public:
  A(int val) : _val(val) {
  }
  bool operator>(const A &a) const {
    return _val > a._val;
  }
  int val() {
    return _val;
  }
};

int main() {
  // Vector of A
  std::vector<A> v1 = {A(10), A(-24), A(200), A(1)};

  // Sort using lambda comparator
  std::sort(v1.begin(), v1.end(), [](A a1, A a2) {
    return a1 > a2;
  });
  for (int i = 0; i < v1.size(); i++) {
    printf("%sA(%d)%s",
      i == 0 ? "{" : "", v1[i].val(), i == v1.size() - 1 ? "}\n" : ", ");
  }
}