#include <cstdio>
int main() {
  double a, b;
  std::scanf("%lf %lf", &a, &b);
  bool res = false;
  if (a == 0) {
    res = (b == 0);
  } else {
    auto n = -b / a;
    res = n < 0;
  }

  printf("%d", res);
}
