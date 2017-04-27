	#include <iostream>
#include <string>
using namespace std;
//¬вод данных, чтение данных
int main()
{
  cout << "Please enter word to guess" << endl;
  string word;
  getline(cin, word);
  string copy = word;
  string Underscore;
  
