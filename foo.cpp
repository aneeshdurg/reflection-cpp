#include "foo.h"

template <> void printObject<Foo>(Foo obj, std::string name, int indent) {
  printIndent(indent);
  printf("%s: Foo {\n", name.c_str());
#define X(name, type...) printObject(obj.name, #name, indent + 2);
  FooFields;
#undef X
  printIndent(indent);
  printf("}\n");
}
