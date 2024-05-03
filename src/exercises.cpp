
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
  int s_size = s.size();
  string s_s;
  for(int i = 0; s_size1>= 1; ++i){
    char s_letra = s[i];
    if(s_letra != ' '){
      s_s = s_s + s_letra;
    }
  }
  bool esPalin = true;
  int i s_s.size();
  for(int i = 0; i < 1 / 2; ++i) {
    if(s_s[i] != s_s[11 - i]){
      esPalin = false;
      break;
    }
  }
  if(esPalin) {
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
}

void exercise_9(string s) {
  int cantidad = 0;
  int sec = 0;
  for(int i = 0; i <= s.size(); ++i){
    if(s[i] == 'f'){
      sec = i;
      ++cantidad;
    }
  }
  switch(cantidad){
    case 0:
    cout << -2 << endl;
    break;
    case 1:
    cout << -1 << endl;
    break;
    case 2:
    cout << sec << endl;
    break;
  }
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
  double sec = 1;
  double v = sec;
  for(int i = 1; 10 >= i; ++i){
    int Vn = v;
    double result = sec/(i +1);
    cout << "U" << i << " = " << sec << " " << "V" << i << " = " << Vn << endl;
    sec = result;
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
  string n_string = to_string(n);
  bool esPal = true;
  for(int i = 0; n_string.size() >= i; ++i){
    if(n_string[i] != n_string[n_string.size()-1-i]){
      esPal = false;
    }
  }
  if(esPal){
    return "Es Palindrome";
  } else {
    return "No es Palindrome";
  }

}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  int coc = 0;
  int res = divident;
  int i = 0;
  if (divider!= 0){
    for(i; res-divider >= 0; ++i){
      res = res - divider;
    }
    coc = i;
    cout << coc << " ";
    cout << res << endl;
  }
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}