#include "Object.h"
#include "Triad.h"
#include "Date.h"
#include "vector.h"
#include <string>
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	Triad a;
	cout << "\nРаботаем с классом Triad\n";
	cout << "Заполните поля объекта класса Triad\n";
	cin >> a;
	cout << "\nОбъект 'a': ";
	cout << a;
	Triad b(4, 3, 2);
	cout << "\nОбъект 'b': ";
	cout << b;


	if (a > b)
	{
		cout << "\nПутем сложения элементов триады получаем, что a > b" << endl;
	}
	else if (a < b)
		cout << "\nПутем сложения элементов триады получаем, что a < b" << endl;
	else
		cout << "\nПутем сложения элементов триады получаем, что a = b" << endl;


	cout << "\nПрисвоим объекту 'a' поля объекта 'b'";
	a = b;
	cout << "\nОбъект 'a': ";
	cout << a;
	b++;
	cout << "\nПрименим операцию ++ к обекту 'b'";
	cout << "\nОбъект 'b': ";
	cout << b;
	cout << "==========================================";


	cout << "\nРаботаем с классом Data\n";
	Date A;
	Date B;

M:

	cout << "\nЗаполните объект Date A:";
	cin >> A;

	cout << "\nЗаполните объект Date B:";
	cin >> B;

	cout << "\nОбъект Date A:";
	cout << A;

	cout << "\nОбъект Date B:";
	cout << B;

	cout << "\nСравним А и В:\n";

	cout << "\nA > B - ";
	if (A > B) cout << "истина\n";
	else cout << "ложь\n";

	cout << "\nA < B - ";
	if (A < B) cout << "истина\n";
	else cout << "ложь\n";

	cout << "\nA <= B - ";
	if (A <= B) cout << "истина\n";
	else cout << "ложь\n";

	cout << "\nA >= B - ";
	if (A >= B) cout << "истина\n";
	else cout << "ложь\n";

	cout << "\nA == B - ";
	if (A == B) cout << "истина\n";
	else cout << "ложь\n";

	cout << "==========================================";

	A.Show();
	B.Show();

	cout << "Проверим работу класса Vector\n";

	Vector v(5);
	Object* p = &a;
	v.Add(p);
	p = &B;
	v.Add(p);
	cout << v; 

	int choose;

	cout << "\nПовтор - 1\nВыход - 0\n";
	cin >> choose;
	if (choose == 1) goto M;

}