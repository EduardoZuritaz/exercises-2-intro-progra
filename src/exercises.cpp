
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  
  for (int i = 0; i <= s1.size(); ++i) {
      if (s1[i] == ' ') {
           cout << i << endl;
      }
  }
  cout << s1.size() << endl;

}

void exercise_2(string s1) {
    string word;
    for (int i = 0; i <= s1.size(); ++i) {
      if (s1[i] == ' ' || i ==  s1.size ()) {
        if (!word.empty()) {
            cout << "[" << word << "]" << endl;
            word = "";
        }
    } 
    else {
        word += s1[i];
    }
  }
}

void exercise_3(string s1) {
  for (int i = 0; i < s1.size(); i++){
    char word = s1[i];
    if (i > 19){
        break;
    }
    if (word == '0'){
        cout << "No cake :(" << endl;
        break;
    }
    else if (word == '1'){
        cout << "Om-nom-nom :P" << endl;
    }
  }
}

void exercise_4(int n) {
  int i = 1;
  int multiply = 1;
  if(n < 0){
    cout << "El numero es negativo. Intentelo de nuevo" << endl;
  }
  else if (n > 14){
    cout << "El numero es muy grande. Intentelo de nuevo" << endl;
  }
  else if(n >= 0 && n <= 14){
    while(i <= n){
      multiply *= i;
      ++i;
    }
    cout << multiply << endl;
  }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {   
  cin >> n;
  int sum = 0;
  while(n > 0){
    sum = sum + n%10;
    n = n/10;
  }
  return sum;
}

void exercise_7(int n) {
  cin >> n;
    
    double suma = 0;
    
    for (int i = 1; i <= n; i++) {
        suma += pow(-1,i+1)/i;
    }
    cout << suma << endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  double sec = 1;
  cout << "U0 = 1" << endl;
  for(int i = 1; 10 >= i; ++i){
    double result = sec/( i + 1);
    cout << "U" << i << " = " << sec << endl;
    sec = result;
  }
}

void exercise_12() {
  double sec2 = 1;
  double v = sec2;
  for(int i = 1; 10 >= i; ++i){
    int Vn = v;
    double result = sec2/(i + 1);
    cout << "U" << i << " = " << sec2 << " " << i << " = " << Vn << endl;
    sec2 = result;
  }
}

long exercise_13(int n, int k) {
  int resultado = 0;
    
    for (int i = 1; i <= n; i++) {
        resultado += pow(i, k);
    }
    
    return resultado;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}