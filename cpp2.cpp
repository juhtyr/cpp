//////#include<iostream>
//////int sum(int, int);
//////
//////int main()
//////{
//////	int n;
//////
//////	std::cout << "끝수를 입력하세요>>";
//////	std::cin >> n;
//////
//////	if (n <= 0) {
//////		std::cout << "양수를 입력하세요";
//////		return 0;
//////	}
//////	std::cout << "1에서" << n << "까지의 합은" << sum(1,n) << "입니다." << "\n";
//////	return 0;
//////}
//////
//////int sum(int a, int b) {
//////	int res = 0;
//////
//////	for (int k = a; k <=b; k++) {
//////		res += k;
//////	}
//////	return res;
//////}
////
//////#include<iostream>
//////
//////int main()
//////{
//////	for(int i = 2; i <= 9; i++) {
//////		for (int j = 1; j <= 9; j++) {
//////			std::cout << i << "x" << j << "=" << i * j << std::endl;
//////		}
//////		std::cout << std::endl;
//////	}
//////}
////
//#include<iostream>
//using namespace std;
//double biggest(double k[], int b);
//
//int main() {
//	double a[5];
//	cout<< "5개의 실수를 입력하라>>";
//
//	for (int i = 0; i < 5; i++) {
//		cin>>a[i];
//	}
//
//	cout<<"제일 큰 수"<<"="<< biggest(a, 5) <<endl ;
//}
//
//double biggest(double k[], int b) {
//	for (int i = 0; i < b; i++) {
//		double Max = k[0];
//		for (int j = i + 1; j < b; j++) {
//			if (Max< k[j]) {
//				Max = k[j];
//
//			}
//		}
//		return Max;
//
//	}
//
//}
////
//#include<iostream>
//using namespace std;
//
//int main() {
//	char c[100]; 
//	int count = 0;
//	std::cout<< "문자들을 입력하라(100개 미만)." << endl;
//	cin.getline(c, 100, '\n'); //문자 입력
//
//	for (int i = 0; c[i]!='\0'; i++) {
//		if (c[i] == 'X') {
//		}
//		count++;
//	}
//
//	std::cout<< 'X' << "의 개수는" << count << endl;
//
//}
////
//#include<iostream>
//#include<string>
//using namespace std;;
//
//int main()
//{
//	char password[100], password2[100];
//	cout << "새 암호를 입력하세요>>";
//
//	cin.getline(password, 100, '\n'); //문자 입력
//
//	cout << "새 암호를 다시 한번 입력하세요>>";
//	cin.getline(password2, 100, '\n'); //문자 입력
//
//	int result = strcmp(password, password2);
//
//	if (result == 0) {
//		cout << "같습니다.";
//	}
//	else {
//		cout << "같지 않습니다.";
//	}
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	char name[100];
//	char address[100];
//	int age;
//
//	cout << "이름은?";
//	cin.getline(name, 100, '\n'); //문자 입력
//	cout << "주소는?";
//	cin.getline(address, 100, '\n'); //문자 입력
//	cout << "나이는?";
//	cin >> age;
//
//	cout << name << '.' << address << '.' << age << "세";
//}