#include<iostream>
#include<conio.h>
using namespace std;
class bank
{
private:
	float balance;
	string id, pass, name, fname, address, phone, pin;
public:
	void menu();
	void Admin();
	void Staff();
	void User();
	void new_user();
	void already_user();
	void deposit();
	void withdraw();
	void transformation();
	void payment();
	void search();
	void edit();
	void del();
	void show_records();
	void show_payment();
	void user_balance();
	void check_detail();
};
void introduction()
{
	cout << "\n\n\n\n\n\t\t\t";
	for (int i = 0; i <= 60; i++)
		cout << "*";
	cout << "\n\t\t\t ";
	for (int i = 0; i <= 58; i++)
		cout << "*";
	cout << "\n\t\t\t ";
	for (int i = 0; i <= 56; i++)
		cout << "*";
	cout << "\n\n\t\t Bank Management System   \n\n\t\t\t\tBy Yosif,Mohamed and Ammar\n\n\t  ";
	for (int i = 0; i <= 56; i++)
		cout << "*";
	cout << "\n\t ";
	for (int i = 0; i <= 58; i++)
		cout << "*";
	cout << "\n\t";
	for (int i = 0; i <= 60; i++)
		cout << "*";
	_getch();

}
void bank::menu()
{
	system("cls");
	int choice;
	char ch1;
	string pin, pass, email;
	cout << "\n\n";
	cout << "1.Admin" << endl;
	cout << "2.Staff" << endl;
	cout << "3.User" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "\n\n\t\tlogin Account";
		cout << "\n\n E-mail :";
		cin >> email;
		cout << "\n\n pin code :";
		for (int i = 1; i <= 5; i++)
		{
			ch1 = _getch();
			pin += ch1;
			cout << "*";
		}
		cout << "\n\n password :";
		for (int i = 1; i <= 5; i++)
		{
			ch1 = _getch();
			pass += ch1;
			cout << "*";
		}

		if (email == "eru" && pin == "11111" && pass == "22222")
		{
			Admin();
		}

		else {
			cout << "\n\n  your E-mail,pin& password is wrong...";
		}


		break;
	case 2:
		cout << "\n\n\t\tlogin Account";
		cout << "\n\n E-mail :";
		cin >> email;
		cout << "\n\n pin code :";
		for (int i = 1; i <= 5; i++)
		{
			ch1 = _getch();
			pin += ch1;
			cout << "*";
		}
		cout << "\n\n password :";
		for (int i = 1; i <= 5; i++)
		{
			ch1 = _getch();
			pass += ch1;
			cout << "*";
		}

		if (email == "eru" && pin == "11111" && pass == "22222")
		{
			Staff();
		}

		else {
			cout << "\n\n  your E-mail,pin& password is wrong...";
		}
		break;
	case 3:
		cout << "\n\n\t\tlogin Account";
		cout << "\n\n E-mail :";
		cin >> email;
		cout << "\n\n pin code :";
		for (int i = 1; i <= 5; i++)
		{
			ch1 = _getch();
			pin += ch1;
			cout << "*";
		}
		cout << "\n\n password :";
		for (int i = 1; i <= 5; i++)
		{
			ch1 = _getch();
			pass += ch1;
			cout << "*";
		}

		if (email == "eru" && pin == "11111" && pass == "22222")
		{
			User();
		}

		else {
			cout << "\n\n  your E-mail,pin& password is wrong...";
		}
		break;
	case 4:
		Admin();
		break;
	case 5:
		Staff();
		break;
	case 6:
		User();
		break;
	case 7:
		exit(0);

	default:
		cout << "\n\n Invalid value...please try Again... ";

	}

}


void bank::Admin()
{
	system("cls");
	int Choice;
	cout << "\n\n\t\t Management system";
	cout << "\n 1.New User";
	cout << "\n 2.Already User";
	cout << "\n 3.Deposit Option";
	cout << "\n 4.Withdraw Option";
	cout << "\n 5.transformation Option";
	cout << "\n 6.Payment Option";
	cout << "\n 7.Search User Record";
	cout << "\n 8.Edit User Record";
	cout << "\n 9.Delete User Record";
	cout << "\n 10.Show All Records";
	cout << "\n 11.Payment All Records";
	cout << "\n 12.Go Back";
	cout << "\n\n Entert your Choice :";
	cin >> Choice;
	switch (Choice)
	{

	case 1:
		new_user();
		break;
	case 2:
		already_user();
		break;
	case 3:
		deposit();
		break;
	case 4:
		withdraw();
		break;
	case 5:
		transformation();
		break;
	case 6:
		payment();
		break;
	case 7:
		search();
		break;
	case 8:
		edit();
		break;
	case 9:
		del();
		break;
	case 10:
		show_records();
		break;
	case 11:
		show_payment();
		break;
	case 12:
		menu();

	default:
		cout << "\n\n Invalid value...please try Again... ";
	}
	_getch();
}

void bank::Staff()
{
	system("cls");
	int Choice;
	cout << "\n\n\t\tUser system";
	cout << "\n 1.New User";
	cout << "\n 2.withdraw Amount";
	cout << "\n 3.Deposit Amount";
	cout << "\n 4.Transformation Amount";
	cout << "\n 5.Payment Amount";
	cout << "\n 6.GO Back";
	cout << "\n\n Entert your Choice :";
	cin >> Choice;
	switch (Choice)
	{
	case 1:
		new_user();
		break;
	case 2:
		withdraw();
		break;
	case 3:
		deposit();
		break;
	case 4:
		transformation();
		break;
	case 5:
		payment();
		break;
	case 6:
		menu();

	default:
		cout << "\n\n Invalid value...please try Again... ";
	}
	_getch();
}
void bank::User()
{
	system("cls");
	int Choice;
	cout << "\n\n\t\tUser system";
	cout << "\n 1.withdraw Amount";
	cout << "\n 2.Deposit Amount";
	cout << "\n 3.Transformation Amount";
	cout << "\n 4.Payment Amount";
	cout << "\n 5.GO Back";
	cout << "\n\n Entert your Choice :";
	cin >> Choice;
	switch (Choice)
	{
	case 1:
		withdraw();
		break;
	case 2:
		deposit();
		break;
	case 3:
		transformation();
		break;
	case 4:
		payment();
	case 5:
		menu();

	default:
		cout << "\n\n Invalid value...please try Again... ";
	}
	_getch();
}

void bank::new_user()
{
	system("Cls");
	int  GO_BACK = 1;
	string   n, f, pa, a, ph, i;
	cout << "\n\n\t\t\t Add New User";
	cout << "\n\n User ID :";
	cin >> id;
	cout << "\n\n\t\tName :";
	cin >> name;
	cout << "\n\n Father Name :";
	cin >> fname;
	cout << "\n\n\t\t\tAddress:";
	cin >> address;
	cout << "\n\n pin code (5 digit) :";
	cin >> pin;
	cout << "\n\n\t\tPassword (5 digit) :";
	cin >> pass;
	cout << "\n\n Phone No :";
	cin >> phone;
	cout << "\n\n\t\tCurrent Balance :";
	cin >> balance;
	cout << "\n\n New user Account Created Successfully... ";
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}

	_getch();
}

void bank::already_user()
{
	system("cls");
	int GO_BACK = 1;
	char ch1;
	string pin, pass, email;
	cout << "\n\n Already User Account ";

	cout << "\n\n\t\tlogin Account";
	cout << "\n\n E-mail :";
	cin >> email;
	cout << "\n\n pin code :";
	for (int i = 1; i <= 5; i++)
	{
		ch1 = _getch();
		pin += ch1;
		cout << "*";
	}
	cout << "\n\n password :";
	for (int i = 1; i <= 5; i++)
	{
		ch1 = _getch();
		pass += ch1;
		cout << "*";
	}

	if (email == "eru" && pin == "11111" && pass == "22222")
	{
		cout << "\n\n\n\n\n\n Amount=  2000000  ";
	}

	else
	{
		cout << "\n\n  your E-mail,pin& password is wrong...";
		cout << "\n\n Successfully Done... ";
	}
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}
	_getch();



}

void bank::withdraw()
{
	system("cls");
	int GO_BACK = 1;
	char ch1;
	string Amount, pin, pass, email;
	cout << "\n\n Already User Account ";

	cout << "\n\n\t\tlogin Account";
	cout << "\n\n E-mail :";
	cin >> email;
	cout << "\n\n pin code :";
	for (int i = 1; i <= 5; i++)
	{
		ch1 = _getch();
		pin += ch1;
		cout << "*";
	}
	cout << "\n\n password :";
	for (int i = 1; i <= 5; i++)
	{
		ch1 = _getch();
		pass += ch1;
		cout << "*";
	}

	if (email == "eru" && pin == "11111" && pass == "22222")
	{
		cout << "\n\n\n Anter The Amount  ";
		cin >> Amount;
		cout << "\n\n Successfully Done... ";
	}

	else
	{
		cout << "\n\n  your E-mail,pin& password is wrong...";
		cout << "\n\n Successfully Done... ";
	}
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}
	_getch();



}

void bank::deposit()
{
	system("cls");
	int GO_BACK = 1;
	char ch1;
	string Amount, pin, pass, email;
	cout << "\n\n Already User Account ";

	cout << "\n\n\t\tlogin Account";
	cout << "\n\n E-mail :";
	cin >> email;
	cout << "\n\n pin code :";
	for (int i = 1; i <= 5; i++)
	{
		ch1 = _getch();
		pin += ch1;
		cout << "*";
	}
	cout << "\n\n password :";
	for (int i = 1; i <= 5; i++)
	{
		ch1 = _getch();
		pass += ch1;
		cout << "*";
	}

	if (email == "eru" && pin == "11111" && pass == "22222")
	{
		cout << "\n\n\n Anter The Amount  ";
		cin >> Amount;
		cout << "\n\n Successfully Done... ";
	}

	else
	{
		cout << "\n\n  your E-mail,pin& password is wrong...";

	}
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}
	_getch();

}

void bank::transformation()
{
	system("Cls");
	int  GO_BACK = 1;
	string   n, f, pa, a, ph, i;
	cout << "\n\n\t\t\t Add New User";
	cout << "\n\n User ID :";
	cin >> id;
	cout << "\n\n\t\tName :";
	cin >> name;
	cout << "\n\n Father Name :";
	cin >> fname;
	cout << "\n\n\t\t\tAddress:";
	cin >> address;
	cout << "\n\n pin code (5 digit) :";
	cin >> pin;
	cout << "\n\n\t\tPassword (5 digit) :";
	cin >> pass;
	cout << "\n\n Phone No :";
	cin >> phone;
	cout << "\n\n\t\tCurrent Balance :";
	cin >> balance;
	cout << "\n\n Successfully Done... ";
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}

	_getch();

}

void bank::payment()
{
	system("Cls");
	int  GO_BACK = 1;
	string   n, f, pa, a, ph, i;
	cout << "\n\n\t\t\t Add New User";
	cout << "\n\n User ID :";
	cin >> id;
	cout << "\n\n\t\tName :";
	cin >> name;
	cout << "\n\n Father Name :";
	cin >> fname;
	cout << "\n\n\t\t\tAddress:";
	cin >> address;
	cout << "\n\n pin code (5 digit) :";
	cin >> pin;
	cout << "\n\n\t\tPassword (5 digit) :";
	cin >> pass;
	cout << "\n\n Phone No :";
	cin >> phone;
	cout << "\n\n\t\tCurrent Balance :";
	cin >> balance;
	cout << "\n\n Successfully Done... ";
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}

	_getch();
}

void bank::search()
{
	system("Cls");
	int  GO_BACK = 1;
	string   n, f, pa, a, ph, i;
	cout << "\n\n\t\t\t Add New User";
	cout << "\n\n User ID :";
	cin >> id;
	cout << "\n\n\t\tName :";
	cin >> name;
	cout << "\n\n Father Name :";
	cin >> fname;
	cout << "\n\n\t\t\tAddress:";
	cin >> address;
	cout << "\n\n pin code (5 digit) :";
	cin >> pin;
	cout << "\n\n\t\tPassword (5 digit) :";
	cin >> pass;
	cout << "\n\n Phone No :";
	cin >> phone;
	cout << "\n\n\t\tCurrent Balance :";
	cin >> balance;
	cout << "\n\n Successfully Done... ";
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}

	_getch();
}

void bank::edit()
{
	system("Cls");
	int  GO_BACK = 1;
	string   n, f, pa, a, ph, i;
	cout << "\n\n\t\t\t Add New User";
	cout << "\n\n User ID :";
	cin >> id;
	cout << "\n\n\t\tName :";
	cin >> name;
	cout << "\n\n Father Name :";
	cin >> fname;
	cout << "\n\n\t\t\tAddress:";
	cin >> address;
	cout << "\n\n pin code (5 digit) :";
	cin >> pin;
	cout << "\n\n\t\tPassword (5 digit) :";
	cin >> pass;
	cout << "\n\n Phone No :";
	cin >> phone;
	cout << "\n\n Successfully Done... ";
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}

	_getch();
}

void bank::del()
{
	system("Cls");
	int  GO_BACK = 1;
	string   n, f, pa, a, ph, i;
	cout << "\n\n\t\t\t Add New User";
	cout << "\n\n User ID :";
	cin >> id;
	cout << "\n\n\t\tName :";
	cin >> name;
	cout << "\n\n Father Name :";
	cin >> fname;
	cout << "\n\n\t\t\tAddress:";
	cin >> address;
	cout << "\n\n pin code (5 digit) :";
	cin >> pin;
	cout << "\n\n\t\tPassword (5 digit) :";
	cin >> pass;
	cout << "\n\n Phone No :";
	cin >> phone;
	cout << "\n\n Successfully Done... ";
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}

	_getch();
}

void bank::show_records()
{
	system("Cls");
	int  GO_BACK = 1;
	string   n, f, pa, a, ph, i;
	cout << "\n\n\t\t\t Add New User";
	cout << "\n\n User ID :";
	cin >> id;
	cout << "\n\n\t\tName :";
	cin >> name;
	cout << "\n\n Father Name :";
	cin >> fname;
	cout << "\n\n\t\t\tAddress:";
	cin >> address;
	cout << "\n\n pin code (5 digit) :";
	cin >> pin;
	cout << "\n\n\t\tPassword (5 digit) :";
	cin >> pass;
	cout << "\n\n Phone No :";
	cin >> phone;
	cout << "\n\n\t\tCurrent Balance :";
	cin >> balance;
	cout << "\n\n Successfully Done... ";
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}

	_getch();
}

void bank::show_payment()
{
	system("Cls");
	int  GO_BACK = 1;
	string   n, f, pa, a, ph, i;
	cout << "\n\n\t\t\t Add New User";
	cout << "\n\n User ID :";
	cin >> id;
	cout << "\n\n\t\tName :";
	cin >> name;
	cout << "\n\n Father Name :";
	cin >> fname;
	cout << "\n\n\t\t\tAddress:";
	cin >> address;
	cout << "\n\n pin code (5 digit) :";
	cin >> pin;
	cout << "\n\n\t\tPassword (5 digit) :";
	cin >> pass;
	cout << "\n\n Phone No :";
	cin >> phone;
	cout << "\n\n\t\t Amount Balance =20000 :";
	cout << "\n\n Successfully Done... ";
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}

	_getch();
}

void bank::user_balance()
{
	system("cls");
	int GO_BACK = 1;
	char ch1;
	string pin, pass, email;
	cout << "\n\n Already User Account ";

	cout << "\n\n\t\tlogin Account";
	cout << "\n\n E-mail :";
	cin >> email;
	cout << "\n\n pin code :";
	for (int i = 1; i <= 5; i++)
	{
		ch1 = _getch();
		pin += ch1;
		cout << "*";
	}
	cout << "\n\n password :";
	for (int i = 1; i <= 5; i++)
	{
		ch1 = _getch();
		pass += ch1;
		cout << "*";
	}

	if (email == "eru" && pin == "11111" && pass == "22222")
	{
		cout << "\n\n\n\n\n\n Amount=  2000000  ";
	}

	else
	{
		cout << "\n\n  your E-mail,pin& password is wrong...";
		cout << "\n\n Successfully Done... ";
	}
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}
	_getch();



}

void bank::check_detail()
{
	system("cls");
	int GO_BACK = 1;
	char ch1;
	string pin, pass, email;
	cout << "\n\n Already User Account ";

	cout << "\n\n\t\tlogin Account";
	cout << "\n\n E-mail :";
	cin >> email;
	cout << "\n\n pin code :";
	for (int i = 1; i <= 5; i++)
	{
		ch1 = _getch();
		pin += ch1;
		cout << "*";
	}
	cout << "\n\n password :";
	for (int i = 1; i <= 5; i++)
	{
		ch1 = _getch();
		pass += ch1;
		cout << "*";
	}

	if (email == "eru" && pin == "11111" && pass == "22222")
	{
		cout << "\n\n\n\n\n\n Amount=  2000000  ";
	}

	else
	{
		cout << "\n\n  your E-mail,pin& password is wrong...";
		cout << "\n\n Successfully Done... ";
	}
	cout << "\n\n  1.GO BACK";
	cin >> GO_BACK;
	switch (GO_BACK == GO_BACK)
	{
	case 1:
		menu();
		break;
	}
	_getch();



}


int main()
{
	bank obj;
	introduction();
	obj.menu();


}