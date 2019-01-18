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
		  cout << "Введите информацию о студенте " << endl;
		  cout << "Фамилия и инициалы : "; getline(cin, name); cout << endl;
		  cout << "Номер группы : "; cin >> group; cout << endl;
		  cout << "Год рождения "; cin >> year; cout << endl;
		  cout << "Оценки : " << endl;
		  cout << "Матан : "; cin >> math; cout << endl;
		  cout << "Физика : "; cin >> phys; cout << endl;
		  cout << "Химия : "; cin >> chem; cout << endl;
		  cout << "Информатика : "; cin >> inf; cout << endl;
		  av_ball();
		  cout << "Средний балл : " << avarage_ball << endl;
	  }
	  void zapis() {
		  inform.open("laba8.txt", ios_base::ate);// пишет в конец
		  inform << "Фамилия и инициалы : " << name << endl;
		  inform << "Номер группы : " << group<< endl;
		  inform << "Год рождения " << year << endl;
		  inform << "Оценки : " << endl;
		  inform << "Матан : " << math<< endl;
		  inform << "Физика : " << phys << endl;
		  inform << "Химия : " << chem << endl;
		  inform << "Информатика : " << inf << endl;
		  inform << "Средний балл : " << avarage_ball << endl;
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
		cout << "Добро пожаловать в меню" << endl;
		cout << "Выберите что хотите сделать : " << endl;
		cout << "1 -  создание ученика " << "2 - просмотр информации по ученикам " << endl;
		cout << "3 - редактирование информации  " << "4 - Варианты ИЗ " << endl;
		cout << "5 - рейтинг " << " 0 - Выход " << endl; cin >> vybor;
		switch (vybor) {
		case 1:
			if (s1 = 0) {
				stud1.getstud();
				stud1.zapis();
				s1 = 1;
				cout << "Продолжим создавать студентов? " << "0 - да " << "1 - нет " << endl; cin >> n;
				if (n = 1) {
					break;
				}
			}
			if (s2 = 0) {
				stud2.getstud();
				stud2.zapis();
				s2 = 1;
				cout << "Продолжим создавать студентов? " << "0 - да " << "1 - нет " << endl; cin >> n;
				if (n = 1) {
					break;
				}
			}
			if (s3 = 0) {
				stud3.getstud();
				stud3.zapis();
				s3 = 1;
				cout << "Продолжим создавать студентов? " << "0 - да " << "1 - нет " << endl; cin >> n;
				if (n = 1) {
					break;
				}
			}
			if (s4 = 0) {
				stud4.getstud();
				stud4.zapis();
				s4 = 1;
				cout << "Продолжим создавать студентов? " << "0 - да " << "1 - нет " << endl; cin >> n;
				if (n = 1) {
					break;
				}
			}
			if (s5 = 0) {
				stud5.getstud();
				stud5.zapis();
				s5 = 1;
				cout << "Продолжим создавать студентов? " << "0 - да " << "1 - нет " << endl; cin >> n;
				if (n = 1) {
					break;
				}
			}
			cout << "Вы создали максимум студентов" << endl;
			break;
		case 2:
			stud1.read();
			break;
		case 3:
			cout << "Выберите какого студента хотите редактировать или создать  ? " << endl; cin >> vybor1;
			switch (vybor1)
			{
			case 1:
				if (s1 != 0) {
					stud1.getstud();
					cout << "Продолжим редактировать или создавать ? " << "0 - да " << "1 - нет " << endl; cin >> n;
					if (n = 1) {
						break;
					}
				}
				else {
					cout << "такого студента нет ! желаете создать?" << "0 - да  1 - нет" << endl; cin >> i;
					if (i = 1) {
						break;
					}
					else {
						stud1.getstud();
						s1 = 1;
						cout << "Продолжим редактировать или создавать ? " << "0 - да " << "1 - нет " << endl; cin >> n;
						if (n = 1) {
							break;
						}
					}
				}
			case 2:
				if (s2 != 0) {
					stud2.getstud();
					cout << "Продолжим редактировать или создавать ? " << "0 - да " << "1 - нет " << endl; cin >> n;
					if (n = 1) {
						break;
					}
				}
				else {
					cout << "такого студента нет ! желаете создать?" << "0 - да  1 - нет" << endl; cin >> i;
					if (i = 1) {
						break;
					}
					else {
						stud2.getstud();
						s2 = 1;
						cout << "Продолжим редактировать или создавать ? " << "0 - да " << "1 - нет " << endl; cin >> n;
						if (n = 1) {
							break;
						}
					}
				}
			case 3:
				if (s3 != 0) {
					stud3.getstud();
					cout << "Продолжим редактировать или создавать ? " << "0 - да " << "1 - нет " << endl; cin >> n;
					if (n = 1) {
						break;
					}
				}
				else {
					cout << "такого студента нет ! желаете создать?" << "0 - да  1 - нет" << endl; cin >> i;
					if (i = 1) {
						break;
					}
					else {
						stud3.getstud();
						s3 = 1;
						cout << "Продолжим редактировать или создавать ? " << "0 - да " << "1 - нет " << endl; cin >> n;
						if (n = 1) {
							break;
						}
					}
				}
			case 4:
				if (s4 != 0) {
					stud4.getstud();
					cout << "Продолжим редактировать или создавать ? " << "0 - да " << "1 - нет " << endl; cin >> n;
					if (n = 1) {
						break;
					}
				}
				else {
					cout << "такого студента нет ! желаете создать?" << "0 - да  1 - нет" << endl; cin >> i;
					if (i = 1) {
						break;
					}
					else {
						stud4.getstud();
						s4 = 1;
						cout << "Продолжим редактировать или создавать ? " << "0 - да " << "1 - нет " << endl; cin >> n;
						if (n = 1) {
							break;
						}
					}
				}
			case 5:
				if (s5 != 0) {
					stud5.getstud();
					cout << "Продолжим редактировать или создавать ? " << "0 - да " << "1 - нет " << endl; cin >> n;
					if (n = 1) {
						break;
					}
				}
				else {
					cout << "такого студента нет ! желаете создать?" << "0 - да  1 - нет" << endl; cin >> i;
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
				cout << "неверно " << endl;
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
			cout << "Введите путь к ИЗ" << endl; cin >> izway;
			iz.open(izway);
			while (!iz.eof())
			{
				iz.getline(S1, X);
				cout << S1 << endl;
			}
			iz.close();
			break;
		default:
			cout << "Вы ввели неверное число" << endl;
			break;
		}
		cout << "Желаете продолжить? 0 - да 1- нет" << endl; cin >> r;
	}
	while (r != 1);
	system("pause");
	return 0;
}