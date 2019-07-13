#pragma once
//Header ==> function Declaration

#include<iostream>
#include<string>

using namespace std;


//In order to declare this file as a header file we need to include this 
#ifndef BMI_H  //if not defined
#define BMI_H


//creating a BMI class
class BMI {

	//declaring function here in public
public:

	BMI(); //Default constructor function with no parameters.

	BMI(string, int, double);  //Overload constructor BMI function with three parameters


	~BMI();  //Destructor: It destroys the object out of memory after we leave that object

	//************************************************************************************************************************************************

	//Declaring Accessors functions. Accessors are used to return privatized member variable. It helps to retrieve private member variables

	//Accessors function
	string getName() const;  //getName - returns name of the patient

	int getHeight() const;   //getHeight - returns height of the patient

	double getWeight() const; // getWeight- returns weight of the patient

	//***************************************************************************************************************************************************

	//mutator function allows to edit privatized member variable one at a time. it does not return any value hence we use VOID

	//mutator function
	void setName(string name); //sets name of the patient

	void setHeight(int height); // sets height of the patient

	void setWeight(double weight); // sets weight of the patient

	double calculateBMI(); //calculates BMI of the patient

	//*********************************************************************************************************************************************************

	//Encapsulation used here as private allows to do privatize certain information in our class so it cannot be accessed from any other files that we have.
private:
	//defining member variables
	string newName;
	int newHeight;
	double newWeight;

};


#endif
