#include <iostream>
using namespace std;

template <typename T>
class Data
{
private:
	T data_;
public:
	Data(T dt) { data_ = dt; }
	T get_data() { return data_; }
};

template <> class Data<double>	// double���� ���� ����� Ư��ȭ 
{
private:
	double data_;
public:
	Data(double dt) { data_ = dt; }
	double get_data()
	{
		cout << "<double ���ȭ> ";
		return data_;
	}
};

int main(void)
{
	Data<string> A("���ڿ�..");
	Data<double> B(3.14);

	cout << "A : " << A.get_data() << endl;
	cout << "B : " << B.get_data() << endl;
	return 0;
}