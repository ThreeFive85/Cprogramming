// �ҽ��ڵ� 4-1 : Counter.h
#ifndef COUNTER_H_INCLUDED // Counter.h�� �ߺ� include���� �ʾҴ��� �˻�

#define COUNTER_H_INCLUDED  // Counter.h�� ó�� include�� �� ���ǵ�

class Counter { // Ŭ���� Counter�� ���� ����
	int value;  // private ������ ���
public:         // public ����Լ�
	void reset() // ����⸦ 0���� ����
	{
		value = 0;
	}
	void count() { // ������� ���� 1 ����
		++value;
	}
	int getValue() const // ������� �� ����
	{
		return value;
	}
};
#endif // COUNTER_H_INCLUDED


