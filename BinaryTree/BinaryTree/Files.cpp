//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//
//bool AddToFile(string filename);
//bool ReadFile(string filename);
//
//void main()
//{
//	//AddToFile("filename.txt");
//	//AddToFile("filename.txt");
//
//	ReadFile("filename.txt");
//}
//
//bool AddToFile(string filename)
//{
//	string name;
//	int balls;
//	ofstream out("filename.txt", ios_base::app);
//	cout << "Enter name:";
//	cin >> name;
//	cout << "Balls: ";
//	cin >> balls;
//	char buffer[5];
//	_itoa_s(balls, buffer, 10);
//
//	out << name << "." << buffer << endl;
//	out.close();
//	return true;
//}
//
//bool ReadFile(string filename)
//{
//	ifstream in(filename);
//	if (!in) return false;
//	char str[255];
//	while (!in.eof())
//	{
//		//in >> str; - all line
//		in.getline(str, 255, '.');
//		cout << str << endl;
//		in.getline(str, 255, '.');
//		cout << str << endl;
//	}
//	return true;
//}