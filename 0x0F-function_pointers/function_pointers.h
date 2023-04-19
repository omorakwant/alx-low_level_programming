#ifndef FUCTIONPOINTERS_FUNCTION_POINTERS_H
#define FUCTIONPOINTERS_FUNCTION_POINTERS_H
typedef int (*operation_ptr) (int, int);
int add(int a, int b);
int multiply(int a, int b);
int do_operation(int (*op)(int, int), int x, int y);
int do_ptr(operation_ptr op_ptr, int x, int y);
uint32_t do_test(uint32_t (*op) (uint32_t, char[9]), uint32_t octet, char hex[9]);
uint32_t test(uint32_t octet, char hex[9]);
#endif
