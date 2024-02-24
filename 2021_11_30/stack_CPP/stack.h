#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;

// 条件编译用法一
//#ifdef __cplusplus  // C++的静态库在C程序中展开，但是C的编译器不认识extern "C"，故还需要条件编译
//extern "C"  // C++静态库，就会按照C的函数名修饰规则去处理以下函数（但是里面不能用函数重载了）
//{
//#endif
//	void StackInit(ST* ps);
//	void StackDestroy(ST* ps);
//	void StackPush(ST* ps, STDataType x);
//	void StackPop(ST* ps);
//	STDataType StackTop(ST* ps);
//	int StackSize(ST* ps);
//	bool StackEmpty(ST* ps);
//#ifdef __cplusplus
//}
//#endif

// 条件编译用法二
#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C
#endif

EXTERN_C void StackInit(ST* ps);
EXTERN_C void StackDestroy(ST* ps);
EXTERN_C void StackPush(ST* ps, STDataType x);
EXTERN_C void StackPop(ST* ps);
EXTERN_C STDataType StackTop(ST* ps);
EXTERN_C int StackSize(ST* ps);
EXTERN_C bool StackEmpty(ST* ps);