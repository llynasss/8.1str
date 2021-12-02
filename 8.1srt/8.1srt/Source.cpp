#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int count(string s) {

	size_t size = s.size();
	int pos;
	int p = s.rfind('no', size);

	if (p == -1) {
		p = s.rfind('on', size);
	}

	if (p == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

string modify(string s) {
	while (s.find("no") != -1)
		s = s.replace(s.find("no"), 2, "***");
	while (s.find("on") != -1)
		s = s.replace(s.find("on"), 2, "***");
	return s;
}



void main() {

	string s;
	int pos;

	cout << "Enter line: "; getline(cin, s);

	pos = count(s);
	cout << pos << endl;



	string s_m = modify(s);
	for (int i = 0; s_m[i] != '\0'; i++) {
		cout << s_m[i];
	}

}
