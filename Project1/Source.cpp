#include<iostream>
#include<fstream>
#include<string>
using namespace std;
const int X = 256;
char S1[X] = { "" };
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
		  av_ball();
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
		  inform.close();

	  }
	  void av_ball() {
		  avarage_ball = (math + chem + phys + inf) / 4;
	  }
	  void read() {
		  ifstream inform;
		  const int  N = 256;
		  char S[N] = { "" };
		  inform.open("laba8.txt", ios_base::in);
			  while (!inform.eof()) 
			  {
				  inform.getline(S, N);
				  cout << S << endl; 
			  }
			  inform.close(); 
		  
	  }
	  void clear() {
		  ofstream inform;
		  inform.open("laba8.txt", ios_base::trunc);
	  }
};
int main() {
	setlocale(LC_ALL, "rus");
	int vybor,vybor1, s1, s2, s3, s4, s5;
	student stud1, stud2, stud3, stud4, stud5;
	s1 = s2 = s3 = s4 = s5 = 0;
	int n,i,r;
	string izway;		ifstream iz;
	do {
		cout << "����� ���������� � ����" << endl;
		cout << "�������� ��� ������ ������� : " << endl;
		cout << "1 -  �������� ������� " << "2 - �������� ���������� �� �������� " << endl;
		cout << "3 - �������������� ����������  " << "4 - �������� �� " << endl;
		cout << "5 - ������� " << " 0 - ����� " << endl; cin >> vybor;
		switch (vybor) {
		case 1:
			if (s1 = 0) {
				stud1.getstud();
				stud1.zapis();
				s1 = 1;
				cout << "��������� ��������� ���������? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
				if (n = 1) {
					break;
				}
			}
			if (s2 = 0) {
				stud2.getstud();
				stud2.zapis();
				s2 = 1;
				cout << "��������� ��������� ���������? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
				if (n = 1) {
					break;
				}
			}
			if (s3 = 0) {
				stud3.getstud();
				stud3.zapis();
				s3 = 1;
				cout << "��������� ��������� ���������? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
				if (n = 1) {
					break;
				}
			}
			if (s4 = 0) {
				stud4.getstud();
				stud4.zapis();
				s4 = 1;
				cout << "��������� ��������� ���������? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
				if (n = 1) {
					break;
				}
			}
			if (s5 = 0) {
				stud5.getstud();
				stud5.zapis();
				s5 = 1;
				cout << "��������� ��������� ���������? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
				if (n = 1) {
					break;
				}
			}
			cout << "�� ������� �������� ���������" << endl;
			break;
		case 2:
			stud1.read();
			break;
		case 3:
			cout << "�������� ������ �������� ������ ������������� ��� �������  ? " << endl; cin >> vybor1;
			switch (vybor1)
			{
			case 1:
				if (s1 != 0) {
					stud1.getstud();
					cout << "��������� ������������� ��� ��������� ? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
					if (n = 1) {
						break;
					}
				}
				else {
					cout << "������ �������� ��� ! ������� �������?" << "0 - ��  1 - ���" << endl; cin >> i;
					if (i = 1) {
						break;
					}
					else {
						stud1.getstud();
						s1 = 1;
						cout << "��������� ������������� ��� ��������� ? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
						if (n = 1) {
							break;
						}
					}
				}
			case 2:
				if (s2 != 0) {
					stud2.getstud();
					cout << "��������� ������������� ��� ��������� ? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
					if (n = 1) {
						break;
					}
				}
				else {
					cout << "������ �������� ��� ! ������� �������?" << "0 - ��  1 - ���" << endl; cin >> i;
					if (i = 1) {
						break;
					}
					else {
						stud2.getstud();
						s2 = 1;
						cout << "��������� ������������� ��� ��������� ? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
						if (n = 1) {
							break;
						}
					}
				}
			case 3:
				if (s3 != 0) {
					stud3.getstud();
					cout << "��������� ������������� ��� ��������� ? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
					if (n = 1) {
						break;
					}
				}
				else {
					cout << "������ �������� ��� ! ������� �������?" << "0 - ��  1 - ���" << endl; cin >> i;
					if (i = 1) {
						break;
					}
					else {
						stud3.getstud();
						s3 = 1;
						cout << "��������� ������������� ��� ��������� ? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
						if (n = 1) {
							break;
						}
					}
				}
			case 4:
				if (s4 != 0) {
					stud4.getstud();
					cout << "��������� ������������� ��� ��������� ? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
					if (n = 1) {
						break;
					}
				}
				else {
					cout << "������ �������� ��� ! ������� �������?" << "0 - ��  1 - ���" << endl; cin >> i;
					if (i = 1) {
						break;
					}
					else {
						stud4.getstud();
						s4 = 1;
						cout << "��������� ������������� ��� ��������� ? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
						if (n = 1) {
							break;
						}
					}
				}
			case 5:
				if (s5 != 0) {
					stud5.getstud();
					cout << "��������� ������������� ��� ��������� ? " << "0 - �� " << "1 - ��� " << endl; cin >> n;
					if (n = 1) {
						break;
					}
				}
				else {
					cout << "������ �������� ��� ! ������� �������?" << "0 - ��  1 - ���" << endl; cin >> i;
					if (i = 1) {
						break;
					}
					else {
						stud5.getstud();
						s5 = 1;
						break;
					}
				}
			default:
				cout << "������� " << endl;
				break;
			}
			stud1.clear();
			if (s1 = 1) {
				stud1.zapis();
			}
			if (s2 = 1) {
				stud2.zapis();
			}
			if (s2 = 1) {
				stud3.zapis();
			}
			if (s2 = 1) {
				stud4.zapis();
			}
			if (s2 = 1) {
				stud5.zapis();
			}
			break;
		case 4:
			cout << "������� ���� � ��" << endl; cin >> izway;
			iz.open(izway);
			while (!iz.eof())
			{
				iz.getline(S1, X);
				cout << S1 << endl;
			}
			iz.close();
			break;
		default:
			cout << "�� ����� �������� �����" << endl;
			break;
		}
		cout << "������� ����������? 0 - �� 1- ���" << endl; cin >> r;
	}
	while (r != 1);
	system("pause");
	return 0;
}