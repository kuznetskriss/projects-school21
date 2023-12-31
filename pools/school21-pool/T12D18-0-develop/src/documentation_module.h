#ifndef SRC_DOCUMENTATION_MODULE_H_
#define SRC_DOCUMENTATION_MODULE_H_

#include <string.h>
#include <stdio.h>
#include <stdarg.h>

#define Documents "Linked lists", "Queues", "Maps", "Binary Trees"
#define Available_document "Binary Trees"
#define Documents_count 16

/*
    input: validation callback, documents count, args with documents names (max 16)
    output: binary mask of documents availability
*/
int* check_available_documentation_module(int(*validate) (char*), ...);

int validate(char* data);

#endif  // SRC_DOCUMENTATION_MODULE_H_
