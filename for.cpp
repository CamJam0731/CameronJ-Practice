#include <iostream>
#include <string>

using namespace std;

int main() {
  string numbers = "1 2 3 4 5";
  char space{' '};

  for (char num : numbers) {
    if (num == space){
        cout << " ";
    }else{
        switch(num % 2){
            case 0:
                cout << "even ";
                break;
            case 1:
                cout << "odd ";
                break;
        }
    }
  }
  // Output: 1 2 3 4 5
  cout << "\n";
  return 0;
}