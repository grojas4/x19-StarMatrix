#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int rows;
  int cols;
  vector < vector<char> > Star;

  cout << "Enter the rows and columns of stars: " << endl;
  cin >> rows;
  cin >> cols;

  for(int r = 0; r < rows; r++)
  {
    for(int c = 0; c < cols; c++)
    {
      cout << '*'; 
    } cout << endl;
  }

  






  return 0;
}
