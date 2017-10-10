#include <vector>
#include <iostream>

using namespace std;


int main()
{
	vector <vector<int> > matrix;
	
	matrix.resize(12);
	cout<<"x  1  2  3  4  5  6  7  8  9  10  11  12"<<endl;
	for (int i=0; i<12; i++){
		matrix[i].resize(12);
		cout<<i+1<<"  ";
		for(int j=0; j<12; j++){
			matrix[i][j]=(i+1)*(j+1);
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl; 
	}
  return 0;
}

