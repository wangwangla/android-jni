#include <iostream>

using namespace std;
//int& add() {
//
//	//return 1;//不对是因为常量不能做引用类型
//	int a = 1;
//	return a;
//}

//int main()
//{
//    std::cout << "Hello World!\n";
//}
//using std::cout;
//int main() {
//	cout << "HELLO";
//	return 0;
//}
//using namespace std;
//int main() {
//	cout << "HELLO";
//	return 0;
//}
//using namespace std;
//int main() {
//	int a = 10;
//	cout << a;
//	cin >> a;
//	cout << a;
//	return 0;
//}

class People{
public:
	People() {
		cout << "People" << endl;
	}
};

class World {
private:
	int year;
	People p;
public:

};
int main() {
	People p;
	//int a = 10;
	//cout << a;
	//cin >> a;
	//cout << a <<endl;
	//int i = 10;
	//int& a = i;
	//printf("%d",&a);
	//printf("%d", &i);

	//int j = 10;
	//a = j;//相当于赋值 
	//&a = j; //不可以  左值是不可以修改的

	//int a = add();
	//cout << a;
	//cout << a;
	//
	//int x = 0;
	//int* p = &x;
	///*double* aa = &x;*/
	//int* ssa = NULL;

/*	int arr[] = {1,3,5};
	for (auto& a : arr) {
		cout << a;
	}*/

	return 0;
}
