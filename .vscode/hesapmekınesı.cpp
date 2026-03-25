#include<iostream>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    
    cout << "Hesap Makinesi" << endl;
    cout << "Birinci sayiyi girin: ";
    cin >> num1;
    
    cout << "Islem seciniz (+, -, *, /): ";
    cin >> operation;
    
    cout << "Ikinci sayiyi girin: ";
    cin >> num2;
    
    double result;
    
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Hata: Sifira bolme yapılamaz!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Hata: Geçersiz islem!" << endl;
            return 1;
    }
    
    cout << "Sonuc: " << result << endl;
    
    return 0;
}