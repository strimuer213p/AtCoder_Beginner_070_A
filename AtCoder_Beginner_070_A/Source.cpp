/*
問題文
3 桁の正の整数 N が与えられます。
N が 回文数であるかを判定してください。
回文数とは、10 進法において数字を逆から並べても元の数と同じになる数のことを表します。
*/

#include<iostream>
#include<cmath>

const int digit = 3;

int main() {
	int num,tmp,change=0;
	std::cin >> num;

	tmp = num;

	for (int i = 0;i<digit; i++) {
		change+=(tmp % 10)*std::pow(10,digit-i-1); //std::pow()遅そう
		tmp=tmp / 10;
	}
	
	std::cout << (num == change ? "Yes" : "No") << std::endl;

	return 0;
}