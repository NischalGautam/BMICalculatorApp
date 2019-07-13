// BMI_Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include<iostream>
#include<string>

#include "BMI.h"

using namespace std;

int main()
{

	string name;
	int height;
	double weight;

	cout << "Enter your name: ";
	cin >> name;

	cout << "Enter your height: ";
	cin >> height;
	while (height <= 0) {
		cout << "Please enter your height in positive numbers: ";
		cin >> height;
	}

	cout << "Enter your weight: ";
	cin >> weight;
	while (weight <= 0) {
		cout << "Please enter your height in positive numbers: ";
		cin >> weight;
	}

	cout << endl;

	BMI Patient_1(name, height, weight); //object patient created with three parameters using overloaded BMI constructor

	cout << "Patient name: " << Patient_1.getName() <<
		endl << "Height: " << Patient_1.getHeight() << " inch" <<
		endl << "Weight: " << Patient_1.getWeight() << " pound" <<
		endl << "Body Mass Index (BMI): " << Patient_1.calculateBMI() <<
		endl << endl;


	cout << "Enter your name: ";
	cin >> name;


	cout << "Enter your height: ";
	cin >> height;
	while (height <= 0) {
		cout << "Please enter your height in positive numbers: ";
		cin >> height;
	}

	cout << "Enter your weight: ";
	cin >> weight;
	while (weight <= 0) {
		cout << "Please enter your height in positive numbers: ";
		cin >> weight;
	}

	cout << endl;

	BMI Patient_2;

	Patient_2.setName(name);
	Patient_2.setHeight(height);
	Patient_2.setWeight(weight);



	cout << "Patient name: " << Patient_2.getName() <<
		endl << "Height: " << Patient_2.getHeight() << " inch" <<
		endl << "Weight: " << Patient_2.getWeight() << " pound" <<
		endl << "Body Mass Index (BMI): " << Patient_2.calculateBMI() <<
		endl << endl;


	return 0;
}

