#include "s21_calc.h"

// Простые операции со стеком

void init_stack(Stack_t *stack) {  // добавить зануление массивов и в тесты тоже
  for (int i = 0; i < N; i++) {
    stack->num[i] = 0;
    stack->sign[i] = '0';
  }
  stack->n = 0;
  stack->s = 0;
  stack->brace = 0;
}

void add_number(Stack_t *stack, double data) {
  if (!number_is_full(stack)) {
    stack->num[stack->n] = data;
    stack->n++;
  } else {
  }
}

void add_sign(Stack_t *stack, char data) {
  if (!sign_is_full(stack)) {
    stack->sign[stack->s] = data;
    stack->s++;
  }
}

double remove_number(Stack_t *stack) {
  double result = stack->num[stack->n - 1];
  stack->n--;
  return result;
}

char remove_sign(Stack_t *stack) {
  char result = stack->sign[stack->s - 1];
  stack->s--;
  return result;
}

int number_is_empty(Stack_t *stack) { return stack->n == 0; }

int sign_is_empty(Stack_t *stack) { return stack->s == 0; }

int number_is_full(Stack_t *stack) {
  return stack->n == sizeof(stack->num) / sizeof(stack->num[0]);
}

int sign_is_full(Stack_t *stack) {
  return stack->s == sizeof(stack->sign) / sizeof(stack->sign[0]);
}

// парсер и вспомогательные для него

int parser(char *input, Stack_t *stack) {
  char *token;
  token = strtok(input, " ");
  init_stack(stack);

  while (token != NULL) {
    if (is_number(token)) {
      double token_to_double;
      token_to_double = atof(token);
      add_number(stack, token_to_double);
    } else {
      is_sign(token, stack);
    }

    token = strtok(NULL, " ");
    // print_stack(stack);
    // printf("\n");
  }

  if (stack->brace == 0) {
    return SUCCESS;
  } else {
    return FAIL;
  }
}

int is_number(char *input) {
  char numbers[20] = "0123456789.";
  size_t success_count = 0;
  size_t dot = 0;
  size_t flag;

  for (int i = 0; input[i] != '\0'; i++) {
    if (strchr(numbers, input[i]) != NULL) {
      success_count++;
      if (input[i] == '.') {
        dot++;
      }
    }
  }

  if (success_count == strlen(input) && dot <= 1) {
    flag = SUCCESS;
  } else {
    flag = FAIL;
  }
  return flag;
}

void is_sign(char *input, Stack_t *stack) {
  char signs[10] = "+-*/^=)";

  if (input[0] == '(' && strlen(input) == 1) {
    add_sign(stack, input[0]);
    stack->brace++;
  }

  if (strchr(signs, input[0]) !=
      NULL) {  // случаи, когда первый символ - знак из массива signs
    if (strlen(input) == 1) {  // если в токене только один знак - сравниваем
                               // приоритет его и предыдущего символа в стэке

      if (input[0] == ')') {
        stack->brace--;
      }

      if (!sign_is_empty(stack)) {
        for (int i = stack->s - 1; i >= -1; i--) {
          if (input[0] == ')' && stack->sign[stack->s - 1] == '(') {
            remove_sign(stack);
            break;
          } else if (priority(stack->sign[i]) >= priority(input[0])) {
            calculate(stack);
          } else {
            add_sign(stack, input[0]);
            break;
          }
        }
      } else {
        add_sign(stack, input[0]);
      }

    } else if (input[0] == '+' ||
               input[0] ==
                   '-') {  // если в токене больше одного знака, то это унарный
                           // - или +, надо добавить его в массив с числами
      // проверкa на число остальной строки
      char result[20] = "\0";
      cut_string(input, result);  // stroka bez pervogo znaka

      if (is_number(result)) {
        double token_to_double;
        token_to_double = atof(input);
        add_number(stack, token_to_double);
      }
    }
  }

  if (strcmp("mod", input) == 0 || strstr(input, "sin") != NULL ||
      strstr(input, "cos") != NULL || strstr(input, "tan") != NULL ||
      strstr(input, "asin") != NULL || strstr(input, "acos") != NULL ||
      strstr(input, "atan") != NULL || strstr(input, "sqrt") != NULL ||
      strstr(input, "ln") != NULL || strstr(input, "log") != NULL) {
    char com_token = compact_token(
        input);  // сокращаю название до одной буквы, чтобы положить в стэк

    if (!sign_is_empty(stack)) {
      if (priority(stack->sign[stack->s - 1]) >= priority(com_token)) {
        calculate(stack);
      } else {
        add_sign(stack, com_token);
      }
    } else {
      add_sign(stack, com_token);
    }
  }
}

void cut_string(char *string, char *result) {
  for (int i = 1; string[i] != '\0'; i++) {
    result[i - 1] = string[i];
  }
}

int priority(char token) {
  int result = 0;

  if (token == ')') {
    result = 0;
  } else if (token == '+' || token == '-' || token == '=') {
    result = 1;
  } else if (token == '*' || token == '/' || token == 'm') {
    result = 2;
  } else if (token == '^') {
    result = 3;
  } else if (token == 'a' || token == 'b' || token == 'c' || token == 'd' ||
             token == 'f' || token == 'g' || token == 'h' || token == 'k' ||
             token == 'l') {
    result = 4;
  }

  return result;
}

char compact_token(char *token) {
  char result;
  if (strstr(token, "sin") != NULL && token[0] != 'a') {
    result = 'a';
  } else if (strstr(token, "cos") != NULL && token[0] != 'a') {
    result = 'b';
  } else if (strstr(token, "tan") != NULL && token[0] != 'a') {
    result = 'c';
  } else if (strstr(token, "asin") != NULL) {
    result = 'd';
  } else if (strstr(token, "acos") != NULL) {
    result = 'f';
  } else if (strstr(token, "atan") != NULL) {
    result = 'g';
  } else if (strstr(token, "sqrt") != NULL) {
    result = 'h';
  } else if (strstr(token, "ln") != NULL) {
    result = 'k';
  } else if (strstr(token, "log") != NULL) {
    result = 'l';
  } else if (strstr(token, "mod") != NULL) {
    result = 'm';
  }
  return result;
}

void calculate(Stack_t *stack) {
  double last = stack->num[stack->n - 1];
  double pre_last = 0;
  double result;
  char prev_sign = stack->sign[stack->s - 1];
  int flag = 0;

  if (stack->n > 1) {
    pre_last = stack->num[stack->n - 2];
  }

  switch (prev_sign) {
    case '+':
      result = pre_last + last;
      remove_number(stack);
      flag = 2;
      break;

    case '-':
      result = pre_last - last;
      remove_number(stack);
      flag = 2;
      break;

    case '*':
      result = pre_last * last;
      remove_number(stack);
      flag = 2;
      break;

    case '/':
      result = pre_last / last;
      remove_number(stack);
      flag = 2;
      break;

    case '^':
      result = pow(pre_last, last);
      remove_number(stack);
      flag = 2;
      break;

    case 'm':
      result = fmod(pre_last, last);
      remove_number(stack);
      flag = 2;
      break;

    case 'a':
      result = sin(last);
      flag = 2;
      break;

    case 'b':
      result = cos(last);
      flag = 2;
      break;

    case 'c':
      result = tan(last);
      flag = 2;
      break;

    case 'd':
      result = asin(last);
      flag = 2;
      break;

    case 'f':
      result = acos(last);
      flag = 2;
      break;

    case 'g':
      result = atan(last);
      flag = 2;
      break;

    case 'h':
      result = sqrt(last);
      flag = 2;
      break;

    case 'k':
      result = log(last);
      flag = 2;
      break;

    case 'l':
      result = log10(last);
      flag = 2;
      break;
  }

  if (flag == 2) {
    remove_number(stack);
    add_number(stack, result);
    remove_sign(stack);
  }
}
