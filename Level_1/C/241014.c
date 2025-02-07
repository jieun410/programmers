// ## 두 정수 사이의 합
// ## https://school.programmers.co.kr/learn/courses/30/lessons/12912

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    if(a < b) {
        for(int i = a; i <= b; i++) {
            answer += i;
        }
    }
    else if(a > b) {
        for(int i = b; i <= a; i++) {
            answer += i;
         }
    }
    else {
        return a;
    }
    return answer;
}