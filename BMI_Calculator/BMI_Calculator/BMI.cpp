// Function Definitions
#include "pch.h"
#include "BMI.h"

//defining BMI constructor in cpp file. To access the default constructor function BMI in BMI class.
BMI::BMI() {
	newHeight = 0;
	newWeight = 0.0;
}

//defining BMI overloaded constructor with three parameters in cpp file.
BMI::BMI(string name, int height, double weight) {

	newName = name;
	newHeight = height;
	newWeight = weight;
}


//defining BMI destructor in cpp file
BMI::~BMI() {

}

//defining Accessor function
string BMI::getName() const {
	return newName;
}

int BMI::getHeight() const {
	return newHeight;
}

double BMI::getWeight() const {
	return newWeight;
}

//defining Mutator function

void BMI::setName(string name) {

	newName = name;
}

void BMI::setHeight(int height) {
	newHeight = height;
}

void BMI::setWeight(double weight) {
	newWeight = weight;
}

double BMI::calculateBMI() {
	return ((newWeight * 703) / (newHeight * newHeight));
}