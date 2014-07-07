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
//PassengerId - Survived - Pclass - Name - Sex - Age - SibSp - Parch - Ticket - Fare - Cabin - Embarked
int selColIndices[] = {0,2,4,5,1};
// id - class - gender - age - label
myParser.selectCol(vector<int>(selColIndices , selColIndices+5));
myParser.replace(4,"1","2");
myParser.replace(4,"0","1");
myParser.replace(2,"male","1");
myParser.replace(2,"female","2");
myParser.writeMatrix();
return 0;
}