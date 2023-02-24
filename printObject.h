#pragma once
#include <cstdio>
#include <string>

void printIndent(int indent);

template <typename T> void printObject(T obj, std::string name, int indent = 0);

template <> void printObject<int>(int obj, std::string name, int indent);
template <> void printObject<float>(float obj, std::string name, int indent);
template <>
void printObject<std::string>(std::string obj, std::string name, int indent);
