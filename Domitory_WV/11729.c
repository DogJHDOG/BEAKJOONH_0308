//
// Created by junhy on 2023-04-03.
//

//#include <stdio.h>
//
//int move_count;
//
///* 탑 옮기기 카운트용 */
///* parameter : 원판 갯수, 출발지, 도착지, 그 외 */
///* return : void */
//void move(int count, int from, int to, int x)
//{
//    /* 마지막 도달 시 재귀함수 탈출(마지막에서만 실행) */
//    if (count <= 1) {
//        move_count++;
//        return;  // 가장 윗부분(1)에 도달하면 경로 출력 후 리턴
//    }
//
//    /* 마지막 도달 전 */
//    move(count - 1, from, x, to);  // 바로 윗 숫자 덩어리는 도착지가 바뀜
//    move_count++;
//    move(count - 1, x, to, from);
//}
//
//
///* 탑 옮기기 */
///* parameter : 원판 갯수, 출발지, 도착지, 그 외 */
///* return : void */
//void move2(int count, int from, int to, int x)
//{
//    /* 마지막 도달 시 재귀함수 탈출(마지막에서만 실행) */
//    if (count <= 1) {
//        printf("%d %d\n", from, to);
//        return;  // 가장 윗부분(1)에 도달하면 경로 출력 후 리턴
//    }
//
//    /* 마지막 도달 전 */
//    move2(count - 1, from, x, to);  // 바로 윗 숫자 덩어리는 도착지가 바뀜
//    printf("%d %d\n", from, to);  // 현재 경로를 출력
//    move2(count - 1, x, to, from);
//}
//
//
//int main()
//{
//    int count;
//    scanf("%d", &count);
//    if (count < 1 || count > 20)
//        return 0;
//    move_count = 0;
//    move(count, 1, 3, 2);  // 최종 횟수 카운트
//    printf("%d\n", move_count);  // 최종 횟수 출력
//    move2(count, 1, 3, 2);  // 최초 1→3번으로 출발
//
//    return 0;
//}