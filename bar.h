#pragma once
#include "foo.h"
#include "printObject.h"
#include "reflection_helper.h"
#include <string>

#define BarFields                                                              \
  X(foo, Foo)                                                                  \
  X(asdf, int)

struct Bar {
#define X(name, type...) DefineField(name, type);
  BarFields
#undef X
};

template <> void printObject<Bar>(Bar obj, std::string name, int indent);
