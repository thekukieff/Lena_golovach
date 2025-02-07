#include <iostream>
#include <array>
#include <vector>
//фреймворк - система библиотек, которая решает какие то конкретные задачи
//коллекции в с++
// Все коллекции в STL - шаблонные классы
// STL - стандартная библиотека шаблонов
// STL только про с++
// 
// У каждого из этого типа шаблонов есть требования, чтобы они могли попасть в коллекцию
// 
// 
// Линейные коллекции{
//		последовательно хранят свои элементы(массив, vector)
//	Требования:
//		Это не может быть ссылка
//		Объект должен содержать конструктор по умолчанию и конструктор копирования
//		Не должен быть абстрактным классом
//		Публичный деструктор	
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
		std::cout << this << "Example default destruct\n";//this показывает на конкретный объект класса
	}

	Example(const Example& other) {
		std::cout << this << "Example copy construct\n";
		
	}

private:
	

};

int main() {


	//Example ex;
	//Example* ptr = &ex;
	//std::cout << ptr << std::endl;//один и тот же адрес, что и у деструктора

	//std::array<Example, 3> st_arr;//статический массив но выводит конструкторы
	//std::vector <Example> din_arr(3);//пустой вектор, но если передать размер, то не пустой

	//std::cout << "\n\n\n\n\n\n\n\n\\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	//for (int i = 0; i < 10; i++)
	//{
	//	din_arr.push_back(Example());//анонимный объект
	//}
	
	Example a;
	Example b;

	return 0;
}