#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int K, N;
vector <long long int>Lan;


//선택 정렬 함수
void Binarysearch(int start, int target) {
	long long int low = 1, high = start, i, mid_value, mid;
	while (low <= high) {
		mid = (high + low) / 2;
		if (mid == 0)
			cout <<1;
		mid_value = 0;
		for (i = 0; i < K; i++) {
			mid_value += Lan[i] / mid;
		}

		if (mid_value < target)
			high = mid - 1;
		else 
			low = mid + 1;
		
	}

	if (mid_value < target)
		cout << mid - 1;
	else
		cout << mid;
}

int main() {
	long long int i, j, cm, max_cm;

	cin >> K >> N;
	for (i = 0; i < K; i++) {
		cin >> cm;
		Lan.push_back(cm);
	}
	auto iter = max_element(Lan.begin(), Lan.end());
	max_cm = *iter;
	
	 Binarysearch(max_cm, N);


}