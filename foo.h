#pragma once
#include "printObject.h"
#include "reflection_helper.h"
#include <string>

#define FooFields                                                              \
  X(x, int)                                                                    \
  X(y, std::string)                                                            \
  X(z, float)

struct Foo {
#define X(name, type...) DefineField(name, type);
  FooFields
#undef X
};

template <> void printObject<Foo>(Foo obj, std::string name, int indent);
