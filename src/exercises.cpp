
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
    int cake_count = 0;

  for (int i = 0; i < 10; ++i) {
    int cake;
    cin >> cake;
    if (cake == 1) {
        cout << "Om-nom-nom :P" << endl;
        cake_count++;
    } else{
        cout << "No cake :(" << endl;
        break;
    }
  }

  cout << "Total Om-nom-nom :P:" << cake_count << endl;
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
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
  // TODO: YOUR CODE HERE
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
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
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