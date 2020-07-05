#include<iostream>
#include<string>
#include<fstream>
using namespace std;

bool AddToFile(const char* filename);
bool ReadFile(const char* filename);
bool AddToFile2(const char* filename);
bool ReadFile2(const char* filename);

void main()
{
	/*AddToFile2("filename2.txt");*/
	//AddToFile2("filename2.txt");

	ReadFile2("filename2.txt");
//	ReadFile("filename1.txt");
}

bool AddToFile(const char* filename)
{
	FILE* file = nullptr;
	fopen_s(&file, filename, "a+");

	char buffer[255];
	int balls;
	cout << "Enter name:";
	cin >> buffer;
	cout << "Balls: ";
	cin >> balls;
	fwrite(buffer, sizeof(char), strlen(buffer), file);
	_itoa_s(balls, buffer, 10);
	fwrite(buffer, sizeof(char), strlen(buffer), file);
	fclose(file);
	return true;
}

bool AddToFile2(const char* filename)
{
	FILE* file = nullptr;
	fopen_s(&file, filename, "a+");

	char buffer[255];
	int balls;
	cout << "Enter name:";
	cin >> buffer;
	cout << "Balls: ";
	cin >> balls;
	fputs(buffer, file);
	_itoa_s(balls, buffer, 10);
	fputs(buffer,  file);
	fclose(file);
	return true;
}

bool ReadFile(const char* filename)
{
	FILE* file = nullptr;
	char buffer[255];
	fopen_s(&file, filename, "r+");
	fread(buffer, 1, 255, file);
	cout << buffer << endl;
	fclose(file);
	return true;
}
bool ReadFile2(const char* filename)
{
	FILE* file = nullptr;
	fopen_s(&file, filename, "r+");
	if (!file) cout << "cant open file";
	char buffer[255];
	fgets(buffer, 255, file);
	//fgets(buffer, 255, file);
	cout << buffer << endl;
	fclose(file);
	return true;
}