////
//// Created by junhy on 2023-08-24.
////
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//#define MAX_EXPRESSION_LENGTH 500
//
//char Arr[MAX_EXPRESSION_LENGTH] = {0};
//
//int getPriority(char op) {
//    if (op == '*' || op == '/') return 2;
//    if (op == '+' || op == '-') return 1;
//    return 0;
//}
//
//void convertToPostfix() {
//    char output[MAX_EXPRESSION_LENGTH] = {0};
//    int outputIdx = 0;
//    char stack[MAX_EXPRESSION_LENGTH] = {0};
//    int stackIdx = 0;
//
//    for (int i = 0; Arr[i]; i++) {
//        if (Arr[i] >= 'A' && Arr[i] <= 'Z') {
//            output[outputIdx++] = Arr[i];
//        } else if (Arr[i] == '(') {
//            stack[stackIdx++] = Arr[i];
//        } else if (Arr[i] == ')') {
//            while (stackIdx > 0 && stack[stackIdx - 1] != '(') {
//                output[outputIdx++] = stack[--stackIdx];
//            }
//            stackIdx--; // '(' 제거
//        } else { // 연산자인 경우
//            while (stackIdx > 0 && stack[stackIdx - 1] != '(' && getPriority(Arr[i]) <= getPriority(stack[stackIdx - 1])) {
//                output[outputIdx++] = stack[--stackIdx];
//            }
//            stack[stackIdx++] = Arr[i];
//        }
//    }
//
//    while (stackIdx > 0) {
//        output[outputIdx++] = stack[--stackIdx];
//    }
//
//    printf("%s\n", output);
//}
//
//int main() {
//    scanf("%s", Arr);
//    convertToPostfix();
//    return 0;
//}
