// 클래스에서 template를 사용하는 예제입니다.

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

template <> class Data<double>	// double형에 대한 명시적 특수화 
{
private:
	double data_;
public:
	Data(double dt) { data_ = dt; }
	double get_data()
	{
		cout << "<double 명시화> ";
		return data_;
	}
};

int main(void)
{
	Data<string> A("문자열..");
	Data<double> B(3.14);

	cout << "A : " << A.get_data() << endl;
	cout << "B : " << B.get_data() << endl;
	return 0;
}