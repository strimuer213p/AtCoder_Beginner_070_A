/*
��蕶
3 ���̐��̐��� N ���^�����܂��B
N �� �񕶐��ł��邩�𔻒肵�Ă��������B
�񕶐��Ƃ́A10 �i�@�ɂ����Đ������t������ׂĂ����̐��Ɠ����ɂȂ鐔�̂��Ƃ�\���܂��B
*/

#include<iostream>
#include<cmath>

const int digit = 3;

int main() {
	int num,tmp,change=0;
	std::cin >> num;

	tmp = num;

	for (int i = 0;i<digit; i++) {
		change+=(tmp % 10)*std::pow(10,digit-i-1); //std::pow()�x����
		tmp=tmp / 10;
	}
	
	std::cout << (num == change ? "Yes" : "No") << std::endl;

	return 0;
}