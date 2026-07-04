#include <cmath>
#include <cstdio>
int main() {
  double a, b, c;
  std::scanf("%lf %lf %lf", &a, &b, &c);

  bool res = false;
  if (a == 0) {
    if (b == 0) {
      res = c == 0;
    } else {
      auto x = -c / b;
      res = x >= 0;
    }
  } else {
    auto delta = b * b - 4 * a * c;
    if (delta > 0) {
      auto sqrt_delta = std::sqrt(delta);
      auto n1 = (-b + sqrt_delta) / (2 * a);
      auto n2 = (-b - sqrt_delta) / (2 * a);
      res = n1 >= 0 || n2 >= 0;
    } else if (delta == 0) {
      auto n = -b / (2 * a);
      res = n >= 0;
    }
  }
  printf("%d", res);
}
