#include "iostream"
#include <string>

using namespace std;


class Dog_Person
{
public:
	int number;
	string color;
	void display_1()
	{
		cout << "number: " << number << "\tcolor: " << color << endl;
	}

};
class Dog_Employee : public Dog_Person
{
public:
	string size;
	string dog_name;

	string eat;

	string run;

	void display_2()
	{
		cout << "number: " << number << "\tcolor: " << color << "\tsize: " << size << "\tdog_name: " << dog_name << endl;
	}

	void Dog_eat()
	{
		cout << dog_name << " is eating " << eat << endl;
	}

	void Dog_run()
	{
		cout << dog_name << " is running to the " << run << endl;
	}
};

int main()
{
	Dog_Employee tom;
	tom.number = 1;
	tom.color = "grey";
	tom.size = "big";
	tom.dog_name = "Tom";
	tom.eat = "meat";
	tom.run = "park";
	tom.display_2();

	Dog_Employee bob;
	bob.number = 2;
	bob.color = "black";
	bob.size = "small";
	bob.dog_name = "Bob";
	bob.eat = "dog`s food";
	bob.run = "street";
	bob.display_2();

	tom.Dog_eat();
	bob.Dog_eat();

	tom.Dog_run();
	bob.Dog_run();

	return 0;
}


