#include <iostream>
using namespace std;

int main() {
setlocale(LC_ALL, "RU"); //локализатор
  int num = 2;
  num = 22; //создаю переменную int и меняю её значение
    bool NonZero = (num != 0);
        if (NonZero) {
            cout << "num is not zero" << endl; //проверяю переменную на bool
    } else {
            cout << "num is zero!" << endl;
    }
return 0;  
}
