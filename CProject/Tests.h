#pragma once
#include "Tests.h"
#include "Stack.h"
#include "Query.h"
#include "ReverseOrder.h"

/// <summary>
/// prints serial number and near it test's status
/// </summary>
/// <param name="x">a serial number</param>
/// <param name="code">1 for success, otherwise prints failed</param>
void PrintTestResult(size_t x, int code);
/// <summary>
/// if two integers are equals prints inserted succeded 
/// </summary>
/// <param name="x">an integer</param>
/// <param name="y">an integer</param>
void AssertInsert(int x, int y);
/// <summary>
/// tests stack creation 
/// </summary>
void TestStackCreation();
/// <summary>
/// tests query creation
/// </summary>
void TestQueryCreation();
/// <summary>
/// tests some functions of linked list 
/// </summary>
void TestLinkedList();

/**
  * runs several unit tests 
  * @see TestStackCreation()
  * @see TestQueryCreation()
  * @see TestLinkedList()
  */
void RunUnitTests();
