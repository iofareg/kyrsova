#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class Drone
{
public:
	int m_iNumber;
	string m_sModel;
	string m_sOperator;
	double m_dFlight_Distance;
	double m_dSpeed;
	double m_dFlight_Altitude;
	string m_sStatus;
public:
	Drone();
	Drone(int _n, string _model, string _operator, double _distance, double _speed, double _altitude, string _status);
	Drone(const Drone& _drone);
	friend fstream& operator>>(fstream& fs, Drone& pac);
	friend ofstream& operator<<(ofstream& fs, const Drone& drone);
	~Drone();
};

