#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class ReverseText
{
public:
	ReverseText(string file, string file2)
	{
		string myText;

		ifstream ifs(file);
		ofstream ofs(file2);

		istreambuf_iterator<char> input_begin(ifs);
		istreambuf_iterator<char> input_end;
		ostreambuf_iterator<char> output_begin(ofs);
		vector<char> input_data(input_begin, input_end);
		reverse_copy(input_data.begin(), input_data.end(), output_begin);

		reverse(myText.begin(), myText.end());

		while (getline(ifs, myText))
		{
			cout << myText;
		}
	}
};

int main()
{
	ReverseText("txtFile.txt", "txtFile2.txt");
}


