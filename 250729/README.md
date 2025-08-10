# 배운 내용
## 갭체크
1. 맨해튼 거리 최솟값 찾기로 완전탐색(Brute Force) 구현하기 (및 모든 수가 아닌 주어진 수 중에서 최솟값/최댓값 찾기를 효율적으로)
2. 

### 1. 맨해튼 거리 최솟값 찾기로 완전탐색(Brute Force) 구현하기
> 맨해튼 거리(Manhattan distance)
> 우리가 익히 아는 좌표평면 상 거리는 Euclidean distance이다.
> $x$와 $y$의 제곱을 더하고 제곱근을 취해 얻는 대각선 길이 말이다.
> 하지만 맨해튼 거리는 **대각선이 없는 거리**라고 취급하면 이해하기 쉽다.
> 그냥 $x$ 거리 + $y$ 거리이다. 이 말을 수식으로 표현하면 다음과 같다.
> $|\Delta x| + |\Delta y| = |x - \hat{x}| + |y - \hat{y}|$

갭체크 문제여서 따로 볼 수 없는데, 이것도 나중에 쓰고 있는 거라 문제가 기억이 안 나지만, 어떤 좌표평면 상 세 지점이 입력에서 주어지고, 그 지점으로 $t$ 시간 동안 이동한 위치에서 그 세 지점으로의 최솟값을 찾는 문제였다.

해결은 간단하다.
1. 이동시킨다.
2. 세 지점과 이동 후 좌표 사이의 맨해튼 거리를 구한다.
3. 제일 작은 값을 찾는다.
4. 출력한다.

구현은 다음과 같다. (문제가 기억이 안 나서 그냥 세 지점과 이동 시간 및 X속력, Y속력을 임의로 지정하고 구현했다.)

```cpp
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    int x, y;
};

int main() {
    Point points[3] = {
        {4, 7},
        {8, 2},
        {14, 9}
    };

    Point cur = {0, 0};
    int speedX = 2;
    int speedY = 3;
    int t = 5;

    cur.x = cur.x + speedX * t;
    cur.y = cur.y + speedY * t;

    int manhattan[3];
    for (int i = 0; i < 3; i++)
        manhattan[i] = abs(points[i].x - cur.x) + abs(points[i].y - cur.y);

    int minDistance = manhattan[0];
    // 0번째는 이미 넣었으니 비교 대상에서 제외
    for (int i = 1; i < 3; i++) {
        if (manhattan[i] < minDistance)
            minDistance = manhattan[i];
    }

    cout << minDistance;

    return 0;
}
```

# 수정 中!!

# 🌲 오늘의 Codetree 학습 현황 🌲

<br />

| <span style="color:red;display:block;text-align:center;"> **성취도**</span> | 결과 |
|---|---|
| 총 문제 수 | 3 |
| 획득 경험치 | 50 / 50 XP |
| 연속 학습 일 | 1 일 |

<br />

|커리큘럼|문제|난이도|상태|코드 링크|
|---|---|---|---|---|
|[Trail 2 / 함수 / 값을 반환하는 함수](https://www.codetree.ai/trail-info/novice-mid/)|[[Concept]정수의 최솟값](https://www.codetree.ai/trails/complete/curated-cards/intro-minimum-value-of-an-integer/)|쉬움|Solved|[링크](https://github.com/dlwoals256/ProblemSolving/blob/main/250729/%EC%A0%95%EC%88%98%EC%9D%98%20%EC%B5%9C%EC%86%9F%EA%B0%92/minimum-value-of-an-integer.cpp)|
|[Trail 2 / 함수 / 값을 반환하는 함수](https://www.codetree.ai/trail-info/novice-mid/)|[[Concept]짝수이면서 합이 5의 배수인 수](https://www.codetree.ai/trails/complete/curated-cards/intro-an-even-number-with-a-multiple-of-5-in-the-sum/)|쉬움|Solved|[링크](https://github.com/dlwoals256/ProblemSolving/blob/main/250729/%EC%A7%9D%EC%88%98%EC%9D%B4%EB%A9%B4%EC%84%9C%20%ED%95%A9%EC%9D%B4%205%EC%9D%98%20%EB%B0%B0%EC%88%98%EC%9D%B8%20%EC%88%98/an-even-number-with-a-multiple-of-5-in-the-sum.cpp)|
|[Trail 2 / 함수 / 값을 반환하는 함수](https://www.codetree.ai/trail-info/novice-mid/)|[[Concept]함수를 이용한 369 게임](https://www.codetree.ai/trails/complete/curated-cards/intro-369-games-using-functions/)|보통|Solved|[링크](https://github.com/dlwoals256/ProblemSolving/blob/main/250729/%ED%95%A8%EC%88%98%EB%A5%BC%20%EC%9D%B4%EC%9A%A9%ED%95%9C%20369%20%EA%B2%8C%EC%9E%84/369-games-using-functions.cpp)|


<br />

> [!TIP]
> **경험치 획득** : 설명을 보지 않고 해결한 문제에 대해서만 한 번 경험치를 획득할 수 있습니다.  
> **학습 연속일** : 새로운 날에 새로운 경험치를 획득하면 연속일이 인정됩니다.

