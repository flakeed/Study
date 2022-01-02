
#include <iostream>
#include <string>
using namespace std;
int main(){
string s;
int cnt=0;

getline(cin, s);
for (char ch : s) if (isalpha(ch)) ++cnt;
cout << cnt << endl;
	system("pause>>void");
}