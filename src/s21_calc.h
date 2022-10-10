#ifndef SRC_S21_CALC_H_
#define SRC_S21_CALC_H_

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SUCCESS 1
#define FAIL 0
#define N 1024
#define S 255

typedef struct Stack {
  double num[N];
  char sign[N];
  unsigned int
      n;  // индекс первой пустой ячейки или количество хранящихся элементов
  unsigned int s;
  int brace;
} Stack_t;

// void print_stack(Stack_t *stack);

// Простые операции со стеком
void init_stack(Stack_t *stack);
void add_number(Stack_t *stack, double data);
void add_sign(Stack_t *stack, char data);
double remove_number(Stack_t *stack);
char remove_sign(Stack_t *stack);
int number_is_empty(Stack_t *stack);
int sign_is_empty(Stack_t *stack);
int number_is_full(Stack_t *stack);
int sign_is_full(Stack_t *stack);

// парсер и вспомогательные для него
int parser(char *input, Stack_t *stack);
int is_number(char *input);
void is_sign(char *input, Stack_t *stack);
int priority(char token);
void calculate(Stack_t *stack);
void calc(char *token);
void cut_string(char *string, char *result);
char compact_token(char *token);

#endif  // SRC_S21_CALC_H_
