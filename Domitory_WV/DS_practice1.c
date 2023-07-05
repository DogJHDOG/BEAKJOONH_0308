//
// Created by junhy on 2023-03-29.
//

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define MAX_ORDER 5
//
//void multiplyPolynomials(int poly1[], int poly2[], int result[]);
//void addPolynomials(int poly1[], int poly2[], int result[]);
//int evaluatePolynomial(int poly[], int x);
//
//int main() {
//    int poly1[MAX_ORDER + 1] = {0};
//    int poly2[MAX_ORDER + 1] = {0};
//    int rpoly1[MAX_ORDER +1] = {0,};
//    int rpoly2[MAX_ORDER +1] = {0,};
//    int sum[MAX_ORDER + 1] = {0};
//    int product[MAX_ORDER * 2 + 1] = {0};
//    char input1[100], input2[100];
//    int i, j, order1, order2;
//
//    printf("수식 1을 입력하세요:");
//    fgets(input1, 100, stdin);
//    input1[strlen(input1) - 1] = '\0';
//    char *token = strtok(input1, " ");
//
//    i = 0;
//    while (token != NULL) {
//        poly1[i] = atoi(token);
//        i++;
//        // 3 6 0 3
//        //원식 3 0 6 3
//        token = strtok(NULL, " ");
//    }
//
//
//    order1 = i - 1;
//    for(int tt = 0; tt<=order1; tt++){
//        rpoly1[tt] = poly1[order1-tt];
//    }
//
//
//
//    printf("수식 2을 입력하세요:");
//    fgets(input2, 100, stdin);
//    input2[strlen(input2) - 1] = '\0';
//    token = strtok(input2, " ");
//    j = 0;
//
//    while (token != NULL) {
//        poly2[j] = atoi(token);
//        j++;
//        // 7 5 1
//        // 원식 1 5 7
//        token = strtok(NULL, " ");
//    }
//
//    order2 = j - 1;
//
//    for(int tt = 0; tt<=order2; tt++){
//        rpoly2[tt] = poly2[order2-tt];
//    }
//
//    addPolynomials(rpoly1, rpoly2, sum);
//
//    for (i = 0; i <= (MAX_ORDER * 2); i++) {
//        product[i] = 0;
//    }
//    for (i = 0; i <= order1; i++) {
//        for (j = 0; j <= order2; j++) {
//            product[i+j] += rpoly1[i] * rpoly2[j];
//        }
//    }
//
//    printf("다항식 1:\n");
//    int k =order1;
//    for (i = order1; i >= 0; i--) {
//        printf("%dx^%d ", rpoly1[i], i);
//        if (i > 0) {
//            printf("+ ");
//        }
//    }
//    printf("\n");
//
//    printf("다항식 2:\n");
//    k = order2;
//    for (j = order2; j >= 0; j--) {
//        printf("%dx^%d ", rpoly2[j], j);
//        if (j < 0) {
//            printf("+ ");
//        }
//    }
//
//    printf("\n");
//
//    printf("2 다항식의 합:\n");
//    for (i = MAX_ORDER; i >= 0; i--) {
//        printf("%dx^%d ", sum[i], i);
//        if (i > 0) {
//            printf("+ ");
//        }
//    }
//    printf("\n");
//
//    printf("2 다항식의 곱:\n");
//    for (i = (MAX_ORDER * 2); i >= 0; i--) {
//        if (product[i] != 0) {
//            printf("%dx^%d ", product[i], i);
//            if (i > 0) {
//                printf("+ ");
//            }
//        }
//    }
//    printf("\n");
//
//    int polyNum,x;
//    printf("수식에 값을 넣으세요: ");
//    scanf("%d %d", &polyNum,&x);
//
//    int *poly;
//    switch (polyNum) {
//        case 1:
//            poly = rpoly1;
//            break;
//        case 2:
//            poly = rpoly2;
//            break;
//        case 3:
//            poly = sum;
//            break;
//        case 4:
//            poly = product;
//            break;
//        default:
//            printf("Invalid polynomial number.\n");
//            return 1;
//    }
//
//    int result = evaluatePolynomial(poly, x);
//    printf("결과값은: %d\n", result);
//
//    return 0;
//}
//
//
//void addPolynomials(int poly1[], int poly2[], int result[]) {
//    int i;
//    for (i = MAX_ORDER; i >= 0; i--) {
//        result[i] = poly1[i] + poly2[i];
//    }
//}
//
//int evaluatePolynomial(int poly[], int x){
//    int result = 0, i;
//    for (i = MAX_ORDER; i >= 0; i--) {
//        printf("%d %d\n",result,poly[i]);
//        result = result * x + poly[i];
//    }
//    return result;
//}