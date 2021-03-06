// Triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>


int main()
{
	int type{};

	// Message to the user
	std::cout <<
		"Triangle Calculation \n"
		"Calculations for sides and angles of a triangle \n"
		"Please type the number of the triangle configuration to calculate the remaining sides and angles \n"
		"(1)  AAA: Three angles given \n"
		"(2)  AAS: Two angles and one side given \n"
		"(3)  ASA: Two angles and one side given \n"
		"(4)  SAS: Two sides and one angle given \n"
		"(5)  SSA: Two sides and one angle given \n"
		"(6)  SSS: Three sides given" << std::endl;

	//Input value
	std::cin >> type;

	// angles variables
	double A{ 0 };
	double B{ 0 };
	double C{ 0 };
	// side variables
	double a{ 0 };
	double b{ 0 };
	double c{ 0 };
	const double PI{ 3.14159 };

	switch (type)
	{


	case 1:
		//input
		std::cout << "Triangle AAA selected \n" <<
		"Please enter angle (A) " << std::endl;
		std::cin >> A;
		std::cout << "Please enter angle (B) " << std::endl;
		std::cin >> B;
		//angles
		C = 180 - A - B;

		//output
		std::cout << "Angle C = " << C << "\n"
		"Sides are impossible to calculate for this type of triangle" << std::endl;
		break;

	case 2:
		// input 
		std::cout << "Triangle AAS selected \n" <<
		"Please enter angle (A) " << std::endl;
		std::cin >> A;
		std::cout << "Please enter angle (B) " << std::endl;
		std::cin >> B;
		std::cout << "Please enter side (c) " << std::endl;
		std::cin >> c;
		// angles
		C = 180 - A - B;

		// sides
		a = c * sin(A * PI / 180) / sin(C * PI / 180);
		b = c * sin(B * PI / 180) / sin(C * PI / 180);

		//output
		std::cout <<
		"Angle C = " << C << "\n"
		"Side a = " << a << "\n"
		"Side b = " << b << std::endl;
		break;

	case 3:
		std::cout << "Triangle ASA selected \n" <<
		"Please enter angle (A) " << std::endl;
		std::cin >> A;
		std::cout << "Please enter side (b) " << std::endl;
		std::cin >> b;
		std::cout << "Please enter angle (C) " << std::endl;
		std::cin >> C;
		// angles
		B = 180 - A - C;

		// sides
		a = b * sin(A * PI / 180) / sin(B * PI / 180);
		c = b * sin(C * PI / 180) / sin(B * PI / 180);
		//output
		std::cout <<
		"Angle B = " << B << "\n"
		"Side a = " << a << "\n"
		"Side c = " << c << std::endl;
		break;

	case 4:
		std::cout << "Triangle SAS selected \n"
		"Please enter side (a) " << std::endl;
		std::cin >> a;
		std::cout << "Please enter angle (B) " << std::endl;
		std::cin >> B;
		std::cout << "Please enter side (c) " << std::endl;
		std::cin >> c;

		//sides
		b = sqrt(pow(a, 2) + pow(c, 2) - 2 * a*c*cos(B*PI / 180));
		A = asin((a*sin(B*PI / 180)) / b) * 180 / PI;

		// angles
		C = 180 - B - A;
		// output
		std::cout <<
		"Angle A = " << A << "\n"
		"Side b = " << b << "\n"
		"Angle C = " << C << std::endl;

		break;

	case 5:
		std::cout << "Triangle SSA selected \n"
			"Please enter side (a) " << std::endl;
		std::cin >> a;
		std::cout << "Please enter side (b) " << std::endl;
		std::cin >> b;
		std::cout << "Please enter angle (C) " << std::endl;
		std::cin >> C;

		//sides
		c = sqrt(pow(a, 2) + pow(b, 2) - 2 * a*b*cos(C*PI / 180));
		A = asin((a*sin(C*PI / 180)) / c) * 180 / PI;

		// angles
		B = 180 - A - C;

		// output
		std::cout <<
		"Angle A = " << A << "\n"
		"Angle B = " << B << "\n"
		"Side c = " << c << std::endl;

		break;

	case 6:
		std::cout << "Triangle SSS selected \n"
			"Please enter side (a) " << std::endl;
		std::cin >> a;
		std::cout << "Please enter side (b) " << std::endl;
		std::cin >> b;
		std::cout << "Please enter side (c) " << std::endl;
		std::cin >> c;

		//angles
		A = acos((pow(b, 2) + pow(c, 2) - pow(a, 2)) / (2 * b*c)) * 180 / PI;
		B = acos((pow(c, 2) + pow(a, 2) - pow(b, 2)) / (2 * a*c)) * 180 / PI;
		C = 180 - A - B;

		// output
		std::cout <<
		"Angle A = " << A << "\n"
		"Angle B = " << B << "\n"
		"Angle C = " << C << std::endl;

		break;

	default:

		std::cout << "Invalid value entered. Please try again." << std::endl;

	}

	return 0;
}
