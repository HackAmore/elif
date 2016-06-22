// First app on C++ by HackAmore
#include <iostream>
using namespace std; 
int main() {
    float a, b, c, d, h, j, f, g, m;
    int r;
    cout << "Choose what action you want?" << endl;
    cout << "Enter 1 to add numbers" << endl;
    cout << "Enter 2 to substract numbers" << endl;
    cout << "Enter 3 to multiply numbers" << endl;
    cout << "Enter 4 to divide numbers" << endl;
    cout << "Enter 0 if you want to quit" << endl;
    cin >> r;
    if (r == 1){
        cout << "Enter numbers to add" << endl;
	    cout << "First number - ";    
		cin >> a;
        cout << "Second number - ";
        cin >> b;
        float y = a + b;
        cout << "Result : " << y << endl;
    }
    else if (r == 2){
        cout << "Enter numbers to substract" << endl;
        cout << "Fist number - ";
        cin >> c;
        cout << "Second number - ";
        cin >> d;
        float x = c - d;
        cout << "Result : " << x << endl;
    }
    else if (r == 3){
        cout << "Enter numbers to multiply " << endl;
        cout << "Firt number - ";
        cin >> f;
        cout << "Second number - ";
        cin >> g;
        float p = f * g;
        cout << "Result : " << p << endl;
    }
    else if (r == 4) {
        cout << "Enter numbers to divide" << endl;
        cout << "First number - ";
        cin >> h;
        cout << "Second number - ";
        cin >> j;
        float k = h / j;
        cout << "Result : " << k << endl;
    }
    else if (r == 0) {
	cout << "Ending program..." << endl;
    }
    else if (r > 4) {
    	cout << "Unknown symbol" << endl;
    	cout << "Ending program..." << endl;
    }
    cout << "Program ended" << endl;
    return 0;
}
