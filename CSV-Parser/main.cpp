#include<iostream>
#include<string>
#include<fstream>
#include"CsvParser.h"


using namespace std;
typedef vector< vector<string> >  SMatrix ;
#define FOR(i,a,b) for((int) i = a ; i<b ; i++)

int main()
{
CsvParser myParser;
myParser.readMatrix();
// Select Feature Columns
// Replace String Values
myParser.writeMatrix();
return 0;
}