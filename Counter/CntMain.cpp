// 소스코드 4-2 : CntMain.cpp
#include <iostream>
#include "Counter.h"
using namespace std;

int main() {
	Counter cnt; // Counter 객체의 정의
	cnt.reset(); // 계수기를 0으로 지움
	cout << "현재 계수기 값: " << cnt.getValue() << endl;
	cnt.count(); // 계수기를 1 증가
	cnt.count();
	cout << "현재 계수기 값: " << cnt.getValue() << endl;
	return 0;

}