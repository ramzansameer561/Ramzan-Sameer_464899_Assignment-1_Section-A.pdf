#include<iostream>
#include<string>
using namespace std;
int main() {
	string p;
	cout<<"please enter any word: ";
	cin>> p;
    
    for (int i = 0; i < p.length(); i++) {
        for (int j = i + 1; j < p.length();) {
            if (p[i] == p[j]) {
                // Eliminate duplicate letters from the code:
                p.erase(j, 1);
            } else {
                j++;
            }
        }
    }
    
    cout << "Word after eliminating duplicate characters in a word or in a scentence: " << p << endl;
    
    return 0;
}
