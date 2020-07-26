//#include<iostream>
//#include<map>
//#include<iterator>
//#include<vector>
//#include<numeric>
//#include<string>
//#include<fstream>
//#include<ctime>
//
//using namespace std;
//
//
//void main()
//{
//	srand(time(0));
//	/*ofstream out("field.txt");
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			out << rand() % 2;
//		}
//		out << "\n";
//	}
//	out.close();*/
//
//
//	//-----×ÈÒÀÍÍß Ç ÔÀÉËÓ---
//	ifstream in("field.txt");
//	istream_iterator<char> outS(in);
//	char field1[200] = {};
//	istream_iterator<char> endF;
//	copy(outS, endF, field1);
//	//---äëÿ êîíñîëüêè---
//	copy(field1, field1 + 10, ostream_iterator<char>(cout, "."));
//
//	//-----ÇÀÏÈÑ Â ÔÀÉË---
//	field1[5] = 219;
//	field1[6] = 219;
//	//---äëÿ ôàéë³â---
//	ofstream out("field.txt");
//	ostream_iterator<char> outIn(out, " ");
//	copy(field1, field1 + 20, outIn);	
//}