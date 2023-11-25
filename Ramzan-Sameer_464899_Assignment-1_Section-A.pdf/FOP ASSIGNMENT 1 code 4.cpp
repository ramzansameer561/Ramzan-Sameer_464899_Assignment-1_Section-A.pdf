#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a positive integer : ";
    cin >> num;
    while (num > 1) {
       
//	   main body of code:
	   
	    int i;
        for (i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                break;
            }
        }
        if (i * i > num) {
            cout << "The largest prime number is: " << num << endl;
            break;
        }
//         main body of code end.
        
        
        
        --num;
    }
    
    
    
    
    
    if (num <= 1) {
        cout << "No prime number is found less than or equal to 1." << endl;
    }
    return 0;
}
