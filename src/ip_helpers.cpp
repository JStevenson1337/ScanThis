#include "main.h"

// Cpp program to remove leading zeros
// an IP address and print the IP

// function to remove leading zeros
string removeZeros(string s)
{
	vector<string> v;
  
	// splits the ip by "."
	for (int i = 0; i < s.length(); i++) {
		string ans;
		while (i < s.length() && s[i] != '.') {
			ans += s[i];
			i++;
		}
		v.push_back(ans);
	}
  
	vector<int> num;
	// converts the words to integers to remove leading removeZeros
	for (auto str : v) {
		int temp = 0;
		for (int i = 0; i < str.length(); i++) {
			temp *= 10;
			temp += (str[i] - '0');
		}
		num.push_back(temp);
	}
  
	string ans = "";
	// Convert back the integer to string and join them back to a string
	for (auto i : num) {
		ans += '.';
		string temp;
		while (i) {
			temp += ('0' + (i % 10));
			i /= 10;
		}
		reverse(temp.begin(), temp.end());
		ans += temp;
	}
  
	return ans.substr(1);
}

