## 문제
백준 2161번
설명: 원형 큐를 이용한 풀이(선정 이유: 데이터의 움직임이 한 방향으로 이루어짐 그렇기에 자료구조 중 큐가 유리하다 생각되어 선정 
또한 원형 큐를 사용해 시간 단축)
내부 코드 설명: 주석 참고
```c
#include <stdio.h>

#define MAX 1001

int queue[MAX];                       //큐 배열 선언(나머지 연산을 통해 원형 큐 구현)
int front = 0, rear = 0;

void push(int x) {                    //push 동작 설정(입력 함수)
    rear = (rear + 1) % MAX;
    queue[rear] = x;
}

int pop() {                           //pop 동작 설정(제거 함수)
    front = (front + 1) % MAX;
    return queue[front];
}

int size() {                          //size를 통해 문제 해결간 조건 사용
    return (rear - front + MAX) % MAX;
}

int main() {
    int N;                        //입력
    scanf("%d", &N);

    int result[MAX];              //결과 배열
    int index = 0;

    for (int i = 1; i <= N; i++) {      //카드 생성
        push(i);
    }

    while (size() > 1) {                //카드 버리기 로직
        result[index++] = pop();        //버리기(경과 배열에 저장)
        push(pop());                    //카드 아래 이동 로직
    }

    result[index++] = pop();            //마지막 카드 저장

    for (int i = 0; i < index; i++) {   // 출력 로직
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
```
