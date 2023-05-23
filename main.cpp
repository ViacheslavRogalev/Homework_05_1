#include <iostream>
#include <windows.h>

class Figure
{
private:
	int sides_count;
	std::string name;

public:
	Figure()
	{
		sides_count = 0;
		name = "������:";
	}

	Figure(int sides_count, int name)
	{
		this->sides_count = sides_count;
		this->name = name;
	}

	std::string get_name()
	{
		return name;
	};

	int get_sides_count()
	{
		return sides_count;
	};
};

class Triangle : public Figure
{
public:

	int sides_count = 3;
	std::string name = "�����������:";

	int get_sides_count()
	{
		return sides_count;
	}

	std::string get_name()
	{
		return name;
	};
};

class Quadrangle : public Figure
{
public:

	int sides_count = 4;
	std::string name = "��������������:";

	int get_sides_count()
	{
		return sides_count;
	};

	std::string get_name()
	{
		return name;
	};
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::cout << "���������� ������: \n";

	Figure a;
	std::cout << a.get_name() << " " << a.get_sides_count() << std::endl;

	Triangle tr;
	std::cout << tr.get_name() << " " << tr.get_sides_count() << std::endl;

	Quadrangle qv;
	std::cout << qv.get_name() << " " << qv.get_sides_count() << std::endl;
}