#pragma once
#include "Tests.h"
#include "Stack.h"
#include "Query.h"
#include "ReverseOrder.h"

void PrintTestResult(size_t x, int code);

void AssertInsert(int x, int y);

void TestStackCreation();

void TestQueryCreation();

void TestLinkedList();

void RunUnitTests();
