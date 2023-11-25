#include <iostream>
using namespace std;
int main() {
    int arr[3], target_number, tripletFound;


    cout << "Enter three numbers: ";
    for (int i = 0; i < 3; ++i) {
        cin >> arr[i];
    }


    cout << "Enter the target integer: ";
    cin >> target_number;

    
    if (tripletFound = arr[0] + arr[1] + arr[2] == target_number){ cout<<" the Sum of triplet is equal to target no.";
	}


  else if (tripletFound = arr[0] + arr[1] + arr[2] != target_number){cout<<" the sum of triplet maybe smaller or bigger than target number.";
  	
  }
  else { cout<<" invalid";
  }

    return 0;

   
}
