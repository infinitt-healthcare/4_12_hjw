#include<iostream>
#include<vector>
using namespace std;

typedef int (*FP_Calc)(const int , const int );
FP_Calc calc;

class Calc {
	/*int obj = 0;*/
public:
	Calc(){}
	virtual int calc(const int a, const int b) = 0;

};

class Divided : public Calc {
public:
	
	virtual int calc(const int a, const int b) override {
		return a / b;
	}
};

int MyCalc(Calc& obj, const int a, const int b) {
	//cout << "a 와 b 의 값을 입력하십시오" << endl;
	//cin >> calc(a,b);
	return obj.calc(a, b);
}

int main() {
	int a ;
	int b ;
	int result = 0;

	while (int i =0) {
		cout << "a : ";
		cin >> a;
		cout << "b : ";
		cin >> b;
		if (cin.fail())
		{
			cout << "숫자를 입력해주세요" << endl;
			cin.clear();
			cin.ignore(1024, '\n');
		}
}
	

	Divided divided;
	Calc& obj = divided;
	result = obj.calc(a, b); 
	
	result = MyCalc(obj, a, b);
	
	cout << "a : " << a << ",b : " << b <<" = "<<result<< endl;
	return 0;
}//