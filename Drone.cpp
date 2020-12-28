#include "Drone.h"

Drone::Drone() {
	this->m_iNumber = 0;
	this->m_sModel = "";
	this->m_sOperator = "";
	this->m_dFlight_Distance = 0;
	this->m_dSpeed = 0;
	this->m_dFlight_Altitude = 0;
	this->m_sStatus = "";
}
Drone::Drone(int _n, string _model, string _operator, double _distance, double _speed, double _altitude, string _status) {
	this->m_iNumber = _n;
	this->m_sModel = _model;
	this->m_sOperator = _operator;
	this->m_dFlight_Distance = _distance;
	this->m_dSpeed = _speed;
	this->m_dFlight_Altitude = _altitude;
	this->m_sStatus = _status;
}
Drone::Drone(const Drone& _other) {
	this->m_iNumber = _other.m_iNumber;
	this->m_sModel = _other.m_sModel;
	this->m_sOperator = _other.m_sOperator;
	this->m_dFlight_Distance = _other.m_dFlight_Distance;
	this->m_dSpeed = _other.m_dSpeed;
	this->m_dFlight_Altitude = _other.m_dFlight_Altitude;
	this->m_sStatus = _other.m_sStatus;
}
Drone::~Drone() {
}

fstream& operator>>(fstream& fs, Drone& drone)
{
	char buffer[200];
	fs.getline(buffer, 200);
	int number = atoi(strtok(buffer, ","));
	string model = strtok(NULL, ",");
	string Operator = strtok(NULL, ",");
	double distance = atof(strtok(NULL, ","));
	double speed = atof(strtok(NULL, ","));
	double altitude = atof(strtok(NULL, ","));
	string status = strtok(NULL, ",");
	Drone temp(number,
		model,
		Operator,
		distance,
		speed,
		altitude,
		status);
	drone = temp;
	return fs;
}
ofstream& operator<<(ofstream& fs, const Drone& drone)
{
	fs <<
		drone.m_iNumber << "," <<
		drone.m_sModel << "," <<
		drone.m_sOperator << "," <<
		drone.m_dFlight_Distance << "," <<
		drone.m_dSpeed << "," <<
		drone.m_dFlight_Altitude<<","<<
		drone.m_sStatus<<",";
	return fs;
}