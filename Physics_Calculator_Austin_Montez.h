//Unit 1 Assignment: Austin_Montez, Dr.T
// 10-15-2019
#ifndef PHYSICS_CALCULATOR_AUSTIN_MONTEZ_H
#define PHYSICS_CALCULATOR_AUSTIN_MONTEZ_H

#include <iostream>
#include <string>
#include"Input_Validation_Extended.h"
using namespace std;

void handleOption(int);
void showMenu();
void printVelocity(double,double);
void printAcceleration(double,double);
void printMotion(double,double,double);
void printNewton(double,double);
void printWeight(double,double);
void printMomentum(double,double);



void handleOption(int option)
{
	double speed1 = 0.0, time1 = 0.0;
  double velocity1 = 0.0, time2 = 0.0;
  double mass1 = 0.0, gravity = 9.8;
  double mass2 = 0.0, velocity2 = 0.0;
  double velocity3 = 0.0, acceleration = 0.0, time3 = 0.0;
  double mass3 = 0.0, acceleration2 = 0.0; 

  if(option == 1)
  {
    cout << "\nCalculate Velocity\n";
    cout << "\nPlease enter speed: ";
    speed1 = validateDouble(speed1);
    cout << "\nPlease enter time: ";
    time1 = validateDouble(time1);

    printVelocity(speed1,time1);
  }

  else if (option == 2)
  {
    cout << "\nCalculate Acceleration\n";
    cout << "\nPlease enter velocity: ";
    velocity2 = validateDouble(velocity2);
    cout << "\nPlease enter time: ";
    time2 = validateDouble(time2);

    printAcceleration(velocity2,time2);
  }

  else if (option == 3)
  {
    cout << "\nCalculate Motion\n";
    cout << "\nPlease enter the initial velocity: ";
    velocity3 = validateDouble(velocity3);
    cout << "\nPlease enter acceleration: ";
    acceleration = validateDouble(acceleration);
    cout << "\nPlease enter time: ";
    time3 = validateDouble(time3);

    printMotion(velocity3,acceleration,time3);
  }

  else if (option == 4)
  {
    cout << "\nCalculate Weight\n";
    cout << "\nPlease enter mass: ";
    mass1 = validateDouble(mass1);

    printWeight(mass1,gravity);
  }
  else if (option == 5)
  {
    cout << "\nCalculate Momentum\n";
    cout << "\nPlease enter mass: ";
    mass2 = validateDouble(mass2);

    cout << "\nPlease enter velocity: ";
    velocity2 = validateDouble(velocity2);

    printMomentum(mass2,velocity2);
  }
  else if (option == 6)
  {
    cout << "\nCalculate Newton's 2nd Law:\n";
    cout << "\nPlease enter mass: ";
    mass3 = validateDouble(mass3);

    cout << "\nPlease enter acceleration: ";
    acceleration2 = validateDouble(acceleration2);

    printNewton(mass3,acceleration2);
  }
	else if (option == 7)
  {
    cout << "\nEnd program. " << endl;
  }
  else
  {
    cout << "\nInvalid input: try again. " << endl;
  }
}

void showMenu()
{
	cout << "\nMENU" << endl;
	cout << "------------" << endl;
	cout << "\n1: Velocity" << endl;
	cout << "\n2: Acceleration" << endl;
	cout << "\n3: Motion: " << endl;
	cout << "\n4: Weight(Earth): " << endl;
	cout << "\n5: Momentum: " << endl;
  cout << "\n6: Newtons 2nd Law: " << endl;
  cout << "\n7: Exit: " << endl;
}
void printVelocity(double s1,double t1)
{
  double finalVelocity = 0.0;
  finalVelocity = s1 / t1;
  cout << "\n" << s1 << " / " << t1 << " = " << " " << finalVelocity << " m/s" << endl;
}

void printAcceleration(double v2,double t2)
{
  double finalAcceleration = 0.0;
  finalAcceleration = v2 / t2;
  cout << "\n" << v2 << " / " << t2 << " = " << " " << finalAcceleration << " m/s^2" << endl;
}

void printMotion(double v3,double a1,double t3)
{
  double finalMotion = 0.0;
  finalMotion = v3 + (a1 * t3);
  cout << "\n" << v3 << " + " << a1 << t3 << " = " << " " << finalMotion << " m/s" << endl;
}

void printNewton(double m3,double a2)
{
  double finalNewton = 0.0;
  finalNewton = m3 * a2;
  cout << "\n" << m3 << " * " << a2 << " = " << finalNewton << " kg m/s^2" << endl;
}


void printWeight(double m1,double g)
{
  double finalWeight = 0.0;
  finalWeight = m1 * g;
  cout << "\n" << m1 << " * " << g << " = " << " " << finalWeight << " ibs" << endl;
}

void printMomentum(double m2,double v2)
{
  double finalMomentum = 0.0;
  finalMomentum = m2 * v2;
  cout << "\n" << m2 << " * " << v2 << " = " << " " << finalMomentum << " kg*m/s" << endl;
}
#endif