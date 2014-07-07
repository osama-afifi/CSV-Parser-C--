#include<vector>
#include<string>

using namespace std;
#pragma once
class CsvParser
{
public:
	vector< vector<string> > matrix;
	void selectCol(vector<int>ColIndex);
	CsvParser(void);
	~CsvParser(void);
	void writeMatrix(string fileName="output.csv");
	void readMatrix(string fileName="input.csv");
	void replace(int colIndex , string pat, string rep);
	__inline int getRowSize();
	__inline int getColSize();
private:
	vector<string> splitRow(string line, char delimiter=',');
	double stringToNum(string str);
};

