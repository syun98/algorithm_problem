#include <iostream>
#include <cmath>
using namespace std;

int n, half;
int res = 101;		//결과를 저장
int arr[21][21] = {};		//입력을 저장
int start[11], link[11];	//각 팀에 팀원들 저장
bool use[21];	//사용 사람임을 알리는 배열

void divide(int cnt, int index) {
	if (cnt == half) {		//cnt가 끝까지 갔을 때
		int startSum = 0, linkSum = 0, startSize = 0, linkSize = 0;
		//sum에는 합계 더 한 결과, Size는 ?
		for (int i = 1; i <= n; i++) {
			if (use[i])		//사용하고 있는 팀원이라면
				start[startSize++] = i;		//start팀원의 다음 자리에 i번 팀원 입력
			else
				link[linkSize++] = i;	//나머지는 link 팀원으로 저장
		}

		for (int i = 0; i < half; i++) {
			for (int j = 0; j < half; j++) {
				if (i == j)
					continue;		//0이 들어있는 대각선 위치시 pass
				startSum += arr[start[i]][start[j]];
				linkSum += arr[link[i]][link[j]];	//합 구하기
			}
		}

		int diff = abs(startSum - linkSum);
		res = res > diff ? diff : res;	//차이를 비교하여 작은 것을 저장
		return;
	}

	for (int i = index; i <= n; i++) {
		if (!use[i]) {		//사용되지 않은 사람을 찾으면
			use[i] = true;	//사용할 것임을 알리고
			divide(cnt + 1, i + 1);	//cnt와 index를 증가시켜서 재귀
			use[i] = false;		//사용 다했음
		}
	}
}

int main() {
	cin >> n;
	half = n / 2;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
		}
	}

	use[1] = true;
	divide(1, 2);
	cout << res << endl;
}

/*https://lollolzkk.tistory.com/8*/