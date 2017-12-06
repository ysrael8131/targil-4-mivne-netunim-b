#pragma once
#include <iostream>
#include <string>
using namespace std;

class Volunteer
{
public:
	Volunteer() {}
	Volunteer(int i, string n, string a, int s, string h, int dis);
	//operators
	friend istream& operator>> (istream& in, Volunteer& a);
	friend ostream& operator<< (ostream& out, Volunteer& a);
	bool operator<(Volunteer v);
	bool operator>(Volunteer v);
	bool operator<=(Volunteer v);
	bool operator>=(Volunteer v);
	bool operator==(Volunteer v);
	bool operator!=(Volunteer v);

	//func
	void setId(int a) { this->id = a; }
	int getId() { return this->id; }
	void setName(string a) { this->name = a; }
	string getName() { return this->name; }
	void setAddres(string a) { this->addres = a; }
	string getAddres() { return this->addres; }
	void setphone(int a) { this->phone = a; }
	int getphone() { return this->phone; }
	void setcity(string a) { this->city = a; }
	string getCity() { return this->city; }
	void setDistance(int dis) { this->distance = dis; }
	int getDistance() { return this->distance; }
private:
	int id;
	string name;
	string addres;
	int phone;
	string city;
	int distance;
};
//operator output
ostream& operator<< (ostream& out, Volunteer& a)
{
	out << "id = " << a.getId() << " name = " << a.getName() << " address = " << a.getAddres()
		<< " phone = " << a.getphone() << " city = " << a.getCity() << " distance =  " << a.getDistance();
	return out;
}
//operator input
istream& operator>> (istream& in, Volunteer& a)
{

	int i, p;
	string n, ad, r;
	in >> i >> n >> ad >> p >> r;
	a.setId(i); a.setName(n); a.setAddres(ad); a.setphone(p); a.setcity(r); a.setDistance(0);
	return in;
}

Volunteer::Volunteer(int i, string n, string a, int s, string h, int dis)
{
	this->id = i;
	this->name = n;
	this->addres = a;
	this->phone = s;
	this->city = h;
	this->distance = dis;
}
//operators to compare two volenteers by their distance
bool Volunteer::operator<(Volunteer v) { return this->distance < v.distance; }
bool Volunteer::operator>(Volunteer v) { return this->distance > v.distance; }
bool Volunteer::operator<=(Volunteer v) { return this->distance <= v.distance; }
bool Volunteer::operator>=(Volunteer v) { return this->distance >= v.distance; }
bool Volunteer::operator==(Volunteer v) { return this->distance == v.distance; }
bool Volunteer::operator!=(Volunteer v) { return this->distance != v.distance; }

