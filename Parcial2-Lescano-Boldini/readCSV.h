#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

void read_record()
{

	// File pointer
	fstream fin;

	// Open an existing file
	fin.open("Covid19Casos-10.csv", ios::in);

  vector<string> row;
  string line, word;

  for (int i=0; i<10; i++){
    row.clear();

    getline(fin, line);

    stringstream s(line);

    while (getline(s, word, ',')){
      row.push_back(word);
    }

    for (int i=0; i<row.size(); i++){
      cout<<row[i];
    }
    cout<<endl;
  };
