#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>


using namespace std;

class Shape
{
public:
	Shape() {};
	//~Shape();
	virtual void Show() = 0;
	virtual void Save() = 0;
	virtual void Load() = 0;
};
class Point
{
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
		cout << "X" + to_string(this->x) + " Y" + to_string(this->y);
	};
private:
	int x = 0;//координата оси x
	int y = 0;//координата оси y
};
class Square :public Shape
{
public:
	//friend class Figure;
	Square() { x = y = L = 0; };

	void Show() override
	{
		cout << "Square(";
		Point(x, y);
		cout << " L" + to_string(L) << ")" << endl;
	};
	void SetSquare(int x, int y, int L)
	{
		this->x = x;
		this->y = y;
		this->L = abs(L);
	}
	void SetArr()
	{

		cout << "Количество квадратов = ";
		cin >> length;
		if (length < 0) { cout << "Количество должно быть положительным, осуществляю выход"; Sleep(5000); exit(0); }
		arr = new Square[length];
		for (size_t i = 0; i < length; i++)
		{
			int x, y, L;
			cout << " x =";
			cin >> x;
			cout << " y =";
			cin >> y;
			cout << " длина =";
			cin >> L;
			arr[i].SetSquare(x, y, L);

		}

		cout << "Сохранить экземпляры? Да=1, Нет=0   ";

		cin >> danet;
		if (danet != 0)Save();

	};

	void Save() override
	{
		cout << "Сохранил : " << endl;
		for (size_t i = 0; i < length; i++)
		{
			arr[i].Show();

		}
		ofstream out;
		out.open("Square.txt", ios_base::app);
		for (size_t i = 0; i < length; i++)
		{
			out << "Square(X" << arr[i].x << " Y" << arr[i].y << " L" << arr[i].L << ")" << endl;
		}
		out.close();
	};
	void Load() override
	{
		cout << "Загрузил : " << endl;
		ifstream in;
		in.open("Square.txt", ios::beg);
		if (in.is_open())
		{

			while (!in.eof())
			{
				getline(in, square);
				cout << square << endl;
			}
			in.close();
		}
	};
	~Square()
	{
		delete[]arr;
	}
private:
	int x, y, L;
	int length = 0;
	bool  danet = false;
	Square* arr{};
	string square;
};
class Rectangler :public Shape //изменено имя класса так как Rectangle используется в стандартных библиотеках
{
public:
	Rectangler() { x = y = L = H = 0; }
	void Show() override
	{
		cout << "Rectangle(";
		Point(x, y);
		cout << " L" + to_string(L) + " H" + to_string(H) << ")" << endl;
	};
	void SetRectangler(int x, int y, int L, int H)
	{
		this->x = x;
		this->y = y;
		this->L = abs(L);
		this->H = abs(H);
	}
	void SetArr()
	{

		cout << "Количество прямоугольников = ";
		cin >> length;
		if (length < 0) { cout << "Количество должно быть положительным, осуществляю выход"; Sleep(5000); exit(0); }
		arr = new Rectangler[length];
		for (size_t i = 0; i <length; i++)
		{
			int x, y, L, H;
			cout << " x =";
			cin >> x;
			cout << " y =";
			cin >> y;
			cout << " длина =";
			cin >> L;
			cout << " высота =";
			cin >> H;

			arr[i].SetRectangler(x, y, L, H);

		}

		cout << "Сохранить экземпляры? Да=1, Нет=0   ";

		cin >> danet;
		if (danet != 0)Save();

	};
	void Save() override
	{
		cout << "Сохранил : " << endl;
		for (size_t i = 0; i < length; i++)
		{
			arr[i].Show();

		}
		ofstream out;
		out.open("Rectangle.txt", ios_base::app);
		for (size_t i = 0; i < length; i++)
		{
			out << "Rectangle(X" << arr[i].x << " Y" << arr[i].y << " L" << arr[i].L << " H" << arr[i].H << ")" << endl;
		}
		out.close();
	};
	void Load() override
	{
		cout << "Загрузил : " << endl;
		ifstream in;
		in.open("Rectangle.txt", ios::beg);
		if (in.is_open())
		{

			while (!in.eof())
			{
				getline(in, rectangle);
				cout << rectangle << endl;
			}
			in.close();
		}
	};
	~Rectangler()
	{
		delete[]arr;
	}
private:
	int x, y, L, H;
	int length = 0;
	bool  danet = false;
	Rectangler* arr{};
	string rectangle;
};
class Circle :public Shape
{
public:
	Circle() { x = y = R = 0; };

	void Show() override
	{
		cout << "Circle(";
		Point(x, y);
		cout << " R" + to_string(R) << ")" << endl;
	};
	void SetCircle(int x, int y, int R)
	{
		this->x = x;
		this->y = y;
		this->R = abs(R);
	}
	void SetArr()
	{

		cout << "Количество кругов = ";
		cin >> length;
		if (length < 0) { cout << "Количество должно быть положительным, осуществляю выход"; Sleep(5000); exit(0); }
		arr = new Circle[length];
		for (size_t i = 0; i < length; i++)
		{
			int x, y, R;
			cout << " x =";
			cin >> x;
			cout << " y =";
			cin >> y;
			cout << " радиус =";
			cin >> R;
			arr[i].SetCircle(x, y, R);

		}

		cout << "Сохранить экземпляры? Да=1, Нет=0   ";

		cin >> danet;
		if (danet != 0)Save();

	};

	void Save() override
	{
		cout << "Сохранил : " << endl;
		for (size_t i = 0; i < length; i++)
		{
			arr[i].Show();

		}
		ofstream out;
		out.open("Circle.txt", ios_base::app);
		for (size_t i = 0; i < length; i++)
		{
			out << "Circle(X" << arr[i].x << " Y" << arr[i].y << " R" << arr[i].R << ")" << endl;
		}
		out.close();
	};
	void Load() override
	{
		cout << "Загрузил : " << endl;
		ifstream in;
		in.open("Circle.txt", ios::beg);
		if (in.is_open())
		{

			while (!in.eof())
			{
				getline(in, circle);
				cout << circle << endl;
			}
			in.close();
		}
	};
	~Circle()
	{
		delete[]arr;
	}
private:
	int x, y, R;
	int length = 0;
	bool  danet = false;
	Circle* arr{};
	string circle;

};
class Ellipser :public Shape
{
public:
	Ellipser() { x = y = L = H = 0; }
	void Show() override
	{
		cout << "Ellipse(";
		Point(x, y);
		cout << " L" + to_string(L) + " H" + to_string(H) << ")" << endl;
	};
	void SetEllipser(int x, int y, int L, int H)
	{
		this->x = x;
		this->y = y;
		this->L = abs(L);
		this->H = abs(H);
	}
	void SetArr()
	{

		cout << "Количество эллипсов = ";
		cin >> length;
		if (length < 0) { cout << "Количество должно быть положительным, осуществляю выход"; Sleep(5000); exit(0); }
		arr = new Ellipser[length];
		for (size_t i = 0; i < length; i++)
		{
			int x, y, L, H;
			cout << " x =";
			cin >> x;
			cout << " y =";
			cin >> y;
			cout << " длина =";
			cin >> L;
			cout << " высота =";
			cin >> H;

			arr[i].SetEllipser(x, y, L, H);

		}

		cout << "Сохранить экземпляры? Да=1, Нет=0   ";

		cin >> danet;
		if (danet != 0)Save();

	};
	void Save() override
	{
		cout << "Сохранил : " << endl;
		for (size_t i = 0; i < length; i++)
		{
			arr[i].Show();

		}
		ofstream out;
		out.open("Ellipse.txt", ios_base::app);
		for (size_t i = 0; i < length; i++)
		{
			out << "Ellipse(X" << arr[i].x << " Y" << arr[i].y << " L" << arr[i].L << " H" << arr[i].H << ")" << endl;
		}
		out.close();
	};
	void Load() override
	{
		cout << "Загрузил : " << endl;
		ifstream in;
		in.open("Ellipse.txt", ios::beg);
		if (in.is_open())
		{

			while (!in.eof())
			{
				getline(in, ellipse);
				cout << ellipse << endl;
			}
			in.close();
		}
	};
	~Ellipser()
	{
		delete[]arr;
	}
private:
	int x, y, L, H;
	int length = 0;
	bool  danet = false;
	Ellipser* arr{};
	string ellipse;
};
class Figure
{
public:
	Figure() {};
	void SetFigure()
	{

		do {
			system("cls");
			cout << "\tВыберите фигуру\n(1)=квадрат\n(2)=прямоугольник\n(3)=круг\n(4)=эллипс" << endl;
			cin >> r;
			switch (r)
			{
			case 1:
				sq.SetArr();
				if (ifLoad() == true)
					sq.Load();
				break;
			case 2:
				ra.SetArr();
				if (ifLoad() == true)
					ra.Load();
				break;
			case 3:
				ci.SetArr();
				if (ifLoad() == true)
					ci.Load();
				break;
			case 4:
				el.SetArr();
				if (ifLoad() == true)
					el.Load();
				break;

			default:
				
				for (int i = 0; i <= 5; i++) 
				{
					system("cls");
					cout <<out << "\t\tВыход"<< endl;
					out = out + out;
					Sleep(777);

				}
				break;
			}
			system("pause");
		} while (r != 0 && r <= 4);
	}
	bool ifLoad()
	{
		cout << "Загрузить фигуры для просмотра? ды=1 нет=0\t";
		cin >> load;
		return load;
	}
private:
	bool load = false;
	Rectangler ra;
	Circle ci;
	Ellipser el;
	Square sq;
	int r=0;
	string out="\n";
};

int main()
{
	
	setlocale(0, "");
	Figure f;
	f.SetFigure();
}