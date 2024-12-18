#include <iostream>
#include <string>
using namespace std;


class Person
{
private:
	string name;
	int age;
public:
	Person(string name, int age) : name(name), age(age) {}

	virtual string getInfo() const
	{
		return "Name: " + name + ", Age: " + to_string(age);
	}

	virtual ~Person() {}
};

class Child : public Person
{
private:
	string parentName;
public:
	Child(string parentName, string name, int age) : Person(name, age), parentName(parentName) {}

	string getInfo() const override
	{
		return Person::getInfo() + ", Parent: " + parentName;
	}
};



class Vehicle
{
private:
	string brand;
	int year;
public:
	Vehicle(string brand, int year) : brand(brand), year(year) {}

	virtual string getDescription() const
	{
		return "Brand: " + brand + ", Year :" + to_string(year);
	}

	virtual ~Vehicle() {}
};

class Car : public Vehicle
{
private:
	string model;
	int mileage;
public:
	Car(string brand, int year, string model, int mileage) : Vehicle(brand, year), model(model), mileage(mileage) {}

	virtual string getDescription() const override
	{
		return Vehicle::getDescription() + "Model: " + model + ", Mileage: " + to_string(mileage) + " km";
	}
};



class Employee
{
private:
	string name;
	string position;
	double salary;
public:
	Employee(string name, string position, double salary) : name(name), position(position), salary(salary) {}

	virtual string getDetails() const
	{
		return "Name: " + name + ", Position: " + position + ", Salary: " + to_string(salary);
	}

	virtual ~Employee() {}
};

class Manager : public Employee
{
private:
	string department;
public:
	Manager(string name, string position, double salary, string department) : Employee(name, position, salary), department(department) {}

	virtual string getDetails() const override
	{
		return Employee::getDetails() + ", Department: " + department;
	}
};

int main()
{
	
}