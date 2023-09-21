#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL, "RU"); //создаю переменную int и меняю её значение
  int num = 2;
  num = 22;
    bool NonZero = (num != 0);
        if (NonZero) {
            cout << "num is not zero" << endl; 
    } else {
            cout << "num is zero!" << endl;
    }
return 0;  
}