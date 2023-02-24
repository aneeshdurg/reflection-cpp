#include "bar.h"
#include "foo.h"
#include "printObject.h"
#include <string>

int main() {
  Foo f{.x = 0, .y = "hi", .z = 5.4};
  printObject(f, "f", 0);
  printf("\n");
  Bar b{.foo = {.x = 6, .y = "bar foo", .z = 11.7}, .asdf = 10};
  printObject(b, "b", 0);
  return 0;
}
