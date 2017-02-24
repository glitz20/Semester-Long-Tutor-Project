/////////////////////////////////////////////
/// Name: Sabin ////
//  Semester Long Project//
//////////////////////////////////////////////

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string welcome();
int menu();//menu function//
void maths();//function for subject//
void physics();
void biology();
void comp();
void invalid();//invalid function, used when user doesnot input correct option//
int correct();//function for correct answer//
void incorrect();//function foo incorrect answer//

int main()
{
	string name, c, a, b;
	int user, dec;

	name=welcome();
	
	cout << name << " Welcome to the program" <<endl;
	cout << "Do you wanna play some game? Hit 1 for yes or 2 to quit" << endl;
	cin >> dec;
	while (dec == 1) {
		user = menu();

		if (user == 1)
		{
			maths();
		}

		else if (user == 2)
		{
			physics();
		}

		else if (user == 3)
		{
			biology();
		}

		else if (user == 4)
		{
			comp();
		}

		else {
			
			invalid();
		}

		cout << "Do you wanna enter. Hit 1 for yes or 2 to quit" << endl;
		cin >> dec;
	}
	return 0;
}

string welcome()
{
	string name;

		cout << "                                       Welcome to Eric Johnson Mathematics Tutor                " << endl;
		cout << "           Eric Johnson is your one stop place to learn differnet types of secondary level mathematics concepts" << endl;
		cout << "                                          in a simple way as possible." << endl;
		cout << "" << endl;
	
	cout << right << setw(0) << "Please enter your name" << endl;
	cin >> name;
	return name;
}
int correct() {
	cout << setw(30) <<" Congratulatuions.You are correct.\n";
		return 2;
}
void incorrect() {
	cout<< setw(50)<<"Sorry, You are wrong.\n";
}

int menu()
{
	int user;
	cout << "Enter a subject that you want to study: \n";
	cout << "" << endl;
	cout << left << setw(0) << "Mathematics (1)\n";
	cout << left << setw(0) << "Physics(2)\n";
	cout << left << setw(0) << "Biology (3)\n";
	cout << left << setw(0) << "Computer Science (4)\n";

	cout << endl << setw(26) << "You chose:";
	cin >> user;
	return user;
}
void maths()
{
	string a, b, c, d;
	
	cout << endl;
	cout << right << setw(85) << "Lets get started with a Maths question" << endl;
	cout << endl;

	cout << "1) What is the answer to 3+5?" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) 5" << endl;
		cout << "\tb) 6" << endl;
		cout << "\tc) 7" << endl;
		cout << "\td) 8" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d")
		{
			correct();
			break;
		}
		else
			incorrect();
		break;
	}


	cout << "2) What is the answer to 3+6?" << endl;
	while (b != "D" || b != "d") {
		cout << "\ta) 6" << endl;
		cout << "\tb) 7" << endl;
		cout << "\tc) 8" << endl;
		cout << "\td) 9" << endl;

		cout << "Answer: ";
		cin >> b;



		if (b == "D" || b == "d")
		{
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "3) What is the answer to 5+6?" << endl;
	while (b != "D" || b != "d") {
		cout << "\ta) 6" << endl;
		cout << "\tb) 7" << endl;
		cout << "\tc) 8" << endl;
		cout << "\td) 11" << endl;

		cout << "Answer: ";
		cin >> b;



		if (b == "D" || b == "d")
		{
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "4) What is the answer to 3+6?" << endl;
	while (b != "D" || b != "d") {
		cout << "\ta) 6" << endl;
		cout << "\tb) 7" << endl;
		cout << "\tc) 8" << endl;
		cout << "\td) 9" << endl;

		cout << "Answer: ";
		cin >> b;



		if (b == "D" || b == "d")
		{
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "5) What is the answer to 12+6?" << endl;
	while (b != "D" || b != "d") {
		cout << "\ta) 6" << endl;
		cout << "\tb) 7" << endl;
		cout << "\tc) 8" << endl;
		cout << "\td) 18" << endl;

		cout << "Answer: ";
		cin >> b;



		if (b == "D" || b == "d")
		{
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "6) What is the answer to 13+6?" << endl;
	while (b != "D" || b != "d") {
		cout << "\ta) 6" << endl;
		cout << "\tb) 7" << endl;
		cout << "\tc) 8" << endl;
		cout << "\td) 19" << endl;

		cout << "Answer: ";
		cin >> b;



		if (b == "D" || b == "d")
		{
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "7) What is the answer to 3+16?" << endl;
	while (b != "D" || b != "d") {
		cout << "\ta) 6" << endl;
		cout << "\tb) 7" << endl;
		cout << "\tc) 8" << endl;
		cout << "\td) 19" << endl;

		cout << "Answer: ";
		cin >> b;



		if (b == "D" || b == "d")
		{
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "8) What is the answer to 2+6?" << endl;
	while (b != "D" || b != "d") {
		cout << "\ta) 6" << endl;
		cout << "\tb) 7" << endl;
		cout << "\tc) 9" << endl;
		cout << "\td) 8" << endl;

		cout << "Answer: ";
		cin >> b;



		if (b == "D" || b == "d")
		{
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "9) What is the answer to 13-6?" << endl;
	while (b != "D" || b != "d") {
		cout << "\ta) 6" << endl;
		cout << "\tb) 2" << endl;
		cout << "\tc) 8" << endl;
		cout << "\td) 7" << endl;

		cout << "Answer: ";
		cin >> b;



		if (b == "D" || b == "d")
		{
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "10) What is the answer to 3*6?" << endl;
	while (b != "D" || b != "d") {
		cout << "\ta) 6" << endl;
		cout << "\tb) 7" << endl;
		cout << "\tc) 8" << endl;
		cout << "\td) 18" << endl;

		cout << "Answer: ";
		cin >> b;



		if (b == "D" || b == "d")
		{
			correct();
			break;
		}
		else
			incorrect();
	}

}
void physics() {
	string a, b, c, d;
	cout << endl;
	cout << right << setw(85) << "Lets get started with a Physics question" << endl;
	cout << endl;

	cout << "1) What is the formula to calculate volt?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) I*R" << endl;
		cout << "\tb) I-R" << endl;
		cout << "\tc) I-R" << endl;
		cout << "\td) I+1" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "a") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "2) What is the formula to calculate force?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) m*a" << endl;
		cout << "\tb) I-R" << endl;
		cout << "\tc) I-R" << endl;
		cout << "\td) I+1" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "a") {
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "3) What is the formula to calculate charge?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) I*T" << endl;
		cout << "\tb) I-R" << endl;
		cout << "\tc) I-R" << endl;
		cout << "\td) I+1" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "a") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "4) What is the formula to calculate energy of waves?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) h*f" << endl;
		cout << "\tb) I-R" << endl;
		cout << "\tc) I-R" << endl;
		cout << "\td) I+1" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "a") {
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "5) What is the formula to calculate potiential energy?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) m*g*h" << endl;
		cout << "\tb) I-R" << endl;
		cout << "\tc) I-R" << endl;
		cout << "\td) I+1" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "a") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "6)What is the formula to calculate kinetic energy?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) 0.5*m*v*v" << endl;
		cout << "\tb) I-R" << endl;
		cout << "\tc) I-R" << endl;
		cout << "\td) I+1" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "a") {
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "7) What is the formula to calculate energy?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) m*c*c" << endl;
		cout << "\tb) I-R" << endl;
		cout << "\tc) I-R" << endl;
		cout << "\td) I+1" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "a") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "8) What is unit of power?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) watt" << endl;
		cout << "\tb) joule" << endl;
		cout << "\tc) newton" << endl;
		cout << "\td) none" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "a") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "9)What is unit of force?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta)Newton" << endl;
		cout << "\tb) watt" << endl;
		cout << "\tc) joule" << endl;
		cout << "\td) none" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "a") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "10) Who is regarded as father of physics in Nepal?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) Utsal" << endl;
		cout << "\tb) Ram" << endl;
		cout << "\tc) Hari" << endl;
		cout << "\td) Landak" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "a") {
			correct();
			break;
		}
		else
			incorrect();
	}

}
void biology() {
	string a, b, c, d;
	cout << endl;
	cout << right << setw(85) << "Lets get started with a Biology question" << endl;
	cout << endl;

	cout << "1) What is the size of cell membrane?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) 7nm" << endl;
		cout << "\tb) 8nm" << endl;
		cout << "\tc) 9nm" << endl;
		cout << "\td) 10nm" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "A") {

			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "2) What is the size of cell protoplasm?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) 12nm" << endl;
		cout << "\tb) 8nm" << endl;
		cout << "\tc) 9nm" << endl;
		cout << "\td) 10nm" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "A") {

			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "3) What is the size of cell mitochondra?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) 7nm" << endl;
		cout << "\tb) 8nm" << endl;
		cout << "\tc) 9nm" << endl;
		cout << "\td) 10nm" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "A") {

		correct();
			break;
		}
		else
			incorrect();
	}
	cout << "4) What is the H20?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) water" << endl;
		cout << "\tb) Blood" << endl;
		cout << "\tc) Mixture" << endl;
		cout << "\td) Gas" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "A") {

			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "5) What is elephant?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) animal" << endl;
		cout << "\tb) tree" << endl;
		cout << "\tc) plant" << endl;
		cout << "\td) non living" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "A") {

			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "6) What does energy come from?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) Mitochondria" << endl;
		cout << "\tb) Nucleus" << endl;
		cout << "\tc) cell" << endl;
		cout << "\td) Blood" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "A") {

			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "7) What does oxidation need?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) O" << endl;
		cout << "\tb) N" << endl;
		cout << "\tc) Ca" << endl;
		cout << "\td) K" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "A") {

			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "8) What is the size of cell?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) 15nm" << endl;
		cout << "\tb) 8nm" << endl;
		cout << "\tc) 9nm" << endl;
		cout << "\td) 10nm" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "A") {

			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "9) What is the size of plasma?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) 0.7nm" << endl;
		cout << "\tb) 8nm" << endl;
		cout << "\tc) 9nm" << endl;
		cout << "\td) 10nm" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "A") {

			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "10) What is the cello of nucleus?" << endl;
	while (a != "a" || a != "A") {
		cout << "\ta) 12nm" << endl;
		cout << "\tb) 8nm" << endl;
		cout << "\tc) 9nm" << endl;
		cout << "\td) 10nm" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "a" || a == "A") {

			correct();
			break;
		}
		else
			incorrect();
	}
}
void comp() {
	string a, b, c, d;
	cout << endl;
	cout << right << setw(85) << "Lets get started with a Computer question" << endl;
	cout << endl;

	cout << "1) Which one is largest in size?" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) GB" << endl;
		cout << "\tb) MB" << endl;
		cout << "\tc) KB" << endl;
		cout << "\td) TB" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "2) Which one is largest in size?" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) byte" << endl;
		cout << "\tb) bit" << endl;
		cout << "\tc) KB" << endl;
		cout << "\td) TB" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d") {
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "3) Who is father of computer?" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) Newton" << endl;
		cout << "\tb) Hari" << endl;
		cout << "\tc) Ram" << endl;
		cout << "\td) Charles Babbage" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d") {
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "4) Which one is programming language?" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) GB" << endl;
		cout << "\tb) ROM" << endl;
		cout << "\tc) RAM" << endl;
		cout << "\td) python" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "5) Which one mabe binary number?" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) 222" << endl;
		cout << "\tb) 12123" << endl;
		cout << "\tc) 1232" << endl;
		cout << "\td) 101010" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d") {
			correct();
			break;
		}
		else
			incorrect();
	}

	cout << "6) Which one is data type in C++" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) " << endl;
		cout << "\tb) single" << endl;
		cout << "\tc) triple" << endl;
		cout << "\td) double" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "7) Which one is post loop?" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) else if" << endl;
		cout << "\tb) if" << endl;
		cout << "\tc) while" << endl;
		cout << "\td) do while" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "8) Which one is pre loop?" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) int" << endl;
		cout << "\tb) when" << endl;
		cout << "\tc) do while" << endl;
		cout << "\td) while do" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "9) Which one is web browser?" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) mozilla" << endl;
		cout << "\tb) explore" << endl;
		cout << "\tc) KB" << endl;
		cout << "\td) google chrome" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d") {
			correct();
			break;
		}
		else
			incorrect();
	}
	cout << "10) Which one is programming language" << endl;
	while (a != "D" || a != "d") {
		cout << "\ta) apple" << endl;
		cout << "\tb) microsoft" << endl;
		cout << "\tc) sodexo" << endl;
		cout << "\td) java" << endl;

		cout << "Answer: ";
		cin >> a;



		if (a == "D" || a == "d") {
			correct();
			break;
		}
		else
			incorrect();

	}
}
void invalid() 
{
	cout << setw(30) << "Sorry it is a invalid entry!!";
	cout << endl;
	cout << endl;
}