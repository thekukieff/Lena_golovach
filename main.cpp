#include <iostream>
#include <array>
#include <vector>
//��������� - ������� ���������, ������� ������ ����� �� ���������� ������
//��������� � �++
// ��� ��������� � STL - ��������� ������
// STL - ����������� ���������� ��������
// STL ������ ��� �++
// 
// � ������� �� ����� ���� �������� ���� ����������, ����� ��� ����� ������� � ���������
// 
// 
// �������� ���������{
//		��������������� ������ ���� ��������(������, vector)
//	����������:
//		��� �� ����� ���� ������
//		������ ������ ��������� ����������� �� ��������� � ����������� �����������
//		�� ������ ���� ����������� �������
//		��������� ����������	
// 
// 
// 
// }
//
class Example {
public:
	Example() {
		std::cout << this << " Example default constructor\n";
	}
	~Example() {
		std::cout << this << "Example default destruct\n";//this ���������� �� ���������� ������ ������
	}

	Example(const Example& other) {
		std::cout << this << "Example copy construct\n";
		
	}

private:
	

};

int main() {


	//Example ex;
	//Example* ptr = &ex;
	//std::cout << ptr << std::endl;//���� � ��� �� �����, ��� � � �����������

	//std::array<Example, 3> st_arr;//����������� ������ �� ������� ������������
	//std::vector <Example> din_arr(3);//������ ������, �� ���� �������� ������, �� �� ������

	//std::cout << "\n\n\n\n\n\n\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	//for (int i = 0; i < 10; i++)
	//{
	//	din_arr.push_back(Example());//��������� ������
	//}
	
	Example a;
	Example b;

	return 0;
}