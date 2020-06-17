# 2580Algorithm

## 변수 n 함수

* arr : 2차원 배열에 입력받은 스도쿠 문제 저장

  ​		전역변수

* res_cnt

  * arr배열의 0의 갯수를 저장
  * 모두 0이라는 의미의 81로 초기화
  * main 문에서 arr배열을 검사할 때 0이 아닌 숫자일 경우, 감소

* void sdoku(int i, int j)

  * 0인 arr의 자리 채울 수 있는 함수
  * 0을 고쳤으면 1, 아니면 0을 return



## 알고리즘

* main문에서 arr 배열을 검사해서 0이면 sdoku 함수 실행하여 빈칸 채우기

  * 한바퀴 돌린 후 res_cnt가 0이 아니면(0이 하나라도 남았으면)

    res_cnt를 초기화한 후, goto문을 통해 arr배열 검사 다시 실행

