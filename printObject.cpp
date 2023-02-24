#include "printObject.h"

void printIndent(int indent) {
  if (indent > 0)
    printf("%*s", indent, " ");
}

template <> void printObject<int>(int obj, std::string name, int indent) {
  printIndent(indent);
  printf("%s: %d\n", name.c_str(), obj);
}

template <> void printObject<float>(float obj, std::string name, int indent) {
  printIndent(indent);
  printf("%s: %f\n", name.c_str(), obj);
}

template <>
void printObject<std::string>(std::string obj, std::string name, int indent) {
  printIndent(indent);
  printf("%s: %s\n", name.c_str(), obj.c_str());
}
