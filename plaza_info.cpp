#include <iostream>
using namespace std;
#include <fstream>
bool cnicExist(string cnic) {
	ifstream infile("owner_data.txt");
	string c, name, phone;
	while (infile >> c >> name >> phone) {
		if (c == cnic) {
			return true;
		}
	}
	return false;
}

bool engineExist(string engine) {
	ifstream infile("car_data.txt");
	string eng, name, model;
	while (infile >> name >> model >> eng) {
		if (eng == engine) {
			return true;
		}
	}
	return false;
}

int main() {
	main:
	int choice;
	cout << "flat information:\n";
	cout << "1:owner data :\n";
	cout << "2:flat data:\n";
	cout << "3:owner cars data:\n";
	cout << "enter choice:";
	cin >> choice;
	
		system("cls");
	if (choice == 1) {
		owner:
		cout << "owner information:\n";
		cout << "1: enter owner data :\n";
		cout << "2: search data:\n";
		cout << "3:display data:\n";
		cout << "enter choice:";
		cin >> choice;
		if (choice == 1) {
			sub_owner:
			string cnic, name, phone;
			cout << "enter cnic:";
			cin >> cnic;
			if (cnicExist(cnic)) {
				system("cls");
				cout << "cnic already exixt please chnge cnic:\n";
				goto sub_owner;
			} else {
				cout << "enter name:";
				cin >> name;
				cout << "enter phone:";
				cin >> phone;
				ofstream outfile("owner_data.txt", ios::app);
				outfile << cnic << " " << name << " " << phone << endl;
				outfile.close();
				system("cls");
				cout << "data entered succesfully\n";
				goto owner;
				
			}
		}

		if (choice == 2) {
			system("cls");
			int found = 0;
			string cnic, name, phone, c;
			cout << "enter cnic to search:";
			cin >> cnic;
			ifstream infile("owner_data.txt");
			if (!infile) {
				cout << "Error opening file!";
				return 1;
			}
			while (infile >> c >> name >> phone) {
				if (c == cnic) {
					cout << "owner found\n";
					cout << "cnic: " << cnic << "\nname: " << name << "\nphone: " << phone;
					found = 1;
					break;
				}
			}
			if (found == 0) {
				cout << "not found";
			}
		}

		if (choice == 3) {
			system("cls");
			
			string name, cnic, phone;
			ifstream infile("owner_data.txt");
			while (infile >> cnic >> name >> phone) {
				cout << "cnic: " << cnic << "\nname: " << name << "\nphone: " << phone << "\n";
			}
		}
	}

	else if (choice == 2) {
		system("cls");
		cout << "flat information:\n";
		cout << "1: enter flat data :\n";
		cout << "2: search flat by no:\n";
		cout << "3:display data:\n";
		cout << "enter choice:";
		cin >> choice;

		if (choice == 1) {
			system("cls");
			string floor, flat, room;
			cout << "enter floor no: ";
			cin >> floor;
			cout << "enter flat no: ";
			cin >> flat;
			cout << "enter no of rooms: ";
			cin >> room;
			ofstream outfile("flat_data.txt", ios::app);
			outfile << floor << " " << flat << " " << room << endl;
			cout << "data entered succesfully";
		}

		if (choice == 2) {
			system("cls");
			int found = 0;
			string floor, flat, room, flat_search;
			cout << "enter flat no to search:";
			cin >> flat_search;
			ifstream infile("flat_data.txt");
			if (!infile) {
				cout << "Error opening file!";
				return 1;
			}
			while (infile >> floor >> flat >> room) {
				if (flat_search == flat) {
					cout << "flat found\n";
					cout << "floor: " << floor << "\nflat: " << flat << "\nroom: " << room;
					found = 1;
					break;
				}
			}
			if (found == 0) {
				cout << "not found";
			}
		}

		if (choice == 3) {
			system("cls");
			string floor, flat, room;
			ifstream infile("flat_data.txt");
			while (infile >> floor >> flat >> room) {
				cout << "floor: " << floor << "\nflat: " << flat << "\nroom: " << room << "\n";
			}
		}
	}

	else if (choice == 3) {
		system("cls");
		cout << "owner car information:\n";
		cout << "1: enter car data :\n";
		cout << "2: search car by engine no:\n";
		cout << "3:display data:\n";
		cout << "enter choice:";
		cin >> choice;

		if (choice == 1) {
			system("cls");
			string name, model, engine;
			cout << "enter car name: ";
			cin >> name;
			cout << "enter car model: ";
			cin >> model;
			cout << "enter engine no: ";
			cin >> engine;
			if (engineExist(engine)) {
				cout << "engine no already exist:";
			} else {
				ofstream outfile("car_data.txt", ios::app);
				outfile << name << " " << model << " " << engine << endl;
				cout << "data entered succesfully";
			}
		}

		if (choice == 2) {
			system("cls");
			int found = 0;
			string name, model, engine, eng_search;
			cout << "enter engine no to search: ";
			cin >> eng_search;
			ifstream infile("car_data.txt");
			if (!infile) {
				cout << "Error opening file!";
				return 1;
			}
			while (infile >> name >> model >> engine) {
				if (eng_search == engine) {
					cout << "car found\n";
					cout << "name: " << name << "\nmodel: " << model << "\nengine: " << engine;
					found = 1;
					break;
				}
			}
			if (found == 0) {
				cout << "not found";
			}
		}

		if (choice == 3) {
			system("cls");
			string name, model, engine;
			ifstream infile("car_data.txt");
			while (infile >> name >> model >> engine) {
				cout << "name: " << name << "\nmodel: " << model << "\nengine: " << engine << "\n";
			}
		}
	}
}

