#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student {
	private :
		ofstream inform;
		string name;
		int math;
		int phys;
		int inf;
		int chem;
		float avarage_ball;
		int year;
		int group;
  public:
	  student() : name(0), math(0), phys(0), inf(0), chem(0),year(0),group(0)
	  {}
	  student (string (a),int (b),int (c),int (d),int (e),int (f),int (g)): name(a),math(b),phys(c),inf(d),chem(e),year(f),group(g)
	  {}
	  void getstud() {
		  cout << "������� ���������� � �������� " << endl;
		  cout << "������� � �������� : "; getline(cin, name); cout << endl;
		  cout << "����� ������ : "; cin >> group; cout << endl;
		  cout << "��� �������� "; cin >> year; cout << endl;
		  cout << "������ : " << endl;
		  cout << "����� : "; cin >> math; cout << endl;
		  cout << "������ : "; cin >> phys; cout << endl;
		  cout << "����� : "; cin >> chem; cout << endl;
		  cout << "����������� : "; cin >> inf; cout << endl;
		  av_ball;
		  cout << "������� ���� : " << avarage_ball << endl;
	  }
	  void zapis() {
		  inform.open("laba8.txt", ios_base::ate);// ����� � �����
		  inform << "������� � �������� : " << name << endl;
		  inform << "����� ������ : " << group<< endl;
		  inform << "��� �������� " << year << endl;
		  inform << "������ : " << endl;
		  inform << "����� : " << math<< endl;
		  inform << "������ : " << phys << endl;
		  inform << "����� : " << chem << endl;
		  inform << "����������� : " << inf << endl;
		  inform << "������� ���� : " << avarage_ball << endl;
	  }
	  void av_ball() {
		  avarage_ball = (math + chem + phys + inf) / 4;
	  }
};
int main() {
	setlocale(LC_ALL, "rus");
	system("pause");
	return 0;
}