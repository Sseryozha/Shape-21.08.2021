//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Shape
//{
//public:
//	Shape() {};
//	//~Shape();
//	virtual void Show() = 0;
//	virtual void Save() = 0;
//	virtual void Load() = 0;
//};
//class Point
//{
//public:
//	Point(int x, int y)
//	{
//		this->x = x;
//		this->y = y;
//		cout << "����� : " << "(X" + to_string(this->x) + " Y" + to_string(this->y) + ")";
//	};
//	Point(int x, int y, int L) :Point(x, y)
//	{
//
//		this->L = L;
//		cout << " �����  : (L" + to_string(this->L) + ")";
//
//	}
//	Point(int x, int y, int L, int H) :Point(x, y, L)
//	{
//		this->H = H;
//		cout << " ������  : (H" + to_string(this->H) + ")";
//	}
//private:
//	int x = 0;//���������� ��� x
//	int y = 0;//���������� ��� y
//	int L = 0;//�����
//	int H = 0;//������
//	int R = 0;//������
//};
//class Square :public Shape
//{
//public:
//	void Show() override
//	{
//		cout <<"������� : ";
//		Point(x,y,L);
//		cout<<endl;
//		
//	};
//	void SetSquare(int x, int y, int L)
//	{
//		this->x = x;
//		this->y = y;
//		this->L = abs(L);
//	}
//	void Save() override {};
//	void Load() override {};
//private:
//	int x;//���������� ��� x
//	int y;//���������� ��� y
//	int L;//�����
//
//
//};
//class Rectangle :public Shape
//{
//public:
//	void Show() override
//	{
//		cout << "������������� : ";
//		Point(x,y,L,H);
//		cout << endl;
//
//	};
//	void SetRectangle(int x, int y, int L,int H)
//	{
//		this->x = x;
//		this->y = y;
//		this->L = abs(L);
//		this->H = abs(H);
//	}
//	void Save() override {};
//	void Load() override {};
//private:
//	int x;//���������� ��� x
//	int y;//���������� ��� y
//	int L;//�����
//	int H;//������
//
//};
//class Circle :public Shape
//{
//public:
//	void Show() override
//	{
//		cout << "���� : ";
//		Point(x, y);
//		cout << " ������ : (R" + to_string(this->R) + ")";
//		cout << endl;
//
//	};
//	void SetCircle(int x, int y, int R)
//	{
//		this->x = x;
//		this->y = y;
//		this->R = abs(R);
//	}
//	void Save() override {};
//	void Load() override {};
//private:
//	int x;//���������� ��� x
//	int y;//���������� ��� y
//	int R;//������
//
//};
//class Ellipse :public Shape
//{
//public:
//	void Show() override
//	{
//		cout << "������ : ";
//		Point(x, y, L, H);
//		cout << endl;
//
//	};
//	void SetEllipse(int x, int y, int L, int H)
//	{
//		this->x = x;
//		this->y = y;
//		this->L = abs(L);
//		this->H = abs(H);
//	}
//	void Save() override {};
//	void Load() override {};
//private:
//	int x;//���������� ��� x
//	int y;//���������� ��� y
//	int L;//�����
//	int H;//������
//};
//
//int main()
//{
//	setlocale(0, "");
//	Square sq;
//	sq.SetSquare(-1, -2, -3);
//	sq.Show();
//	Circle ci;
//	ci.SetCircle(22, 33, -44);
//	ci.Show();
//	Rectangle ra;
//	ra.SetRectangle(10, 12, 200, -1000);
//	ra.Show();	
//	Ellipse el;
//	el.SetEllipse(0, 05, 50, 20);
//	el.Show();
//
//	
//	system("pause");
//}