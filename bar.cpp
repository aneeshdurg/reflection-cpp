#include "bar.h"

template <> void printObject<Bar>(Bar obj, std::string name, int indent) {
  printIndent(indent);
  printf("%s: Bar {\n", name.c_str());
#define X(name, type...) printObject(obj.name, #name, indent + 2);
  BarFields;
#undef X
  printIndent(indent);
  printf("}\n");
}
