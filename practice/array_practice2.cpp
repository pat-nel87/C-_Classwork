#include <iostream>

using namespace std;

int main() {
    double alpha[50];
    for (int i = 0; i < 50; i++)
    {
      if (i < 25){
        alpha[i] = i * i; 
      }
      else if (i >= 25) {
        alpha[i] = i * 3;
      }
    //cout << i <<" " << alpha[i] << endl;
    }
    int g = 0;
    for (int j = 0; j < 5; j++) {
      cout << alpha[g] << " " << alpha[g + 1] << " " << alpha[g + 2] << " "     << alpha[g + 3] << " " << alpha[g + 4] << " " << alpha[g + 5] << " "        << alpha[g + 6] << " " << alpha[g+7] << " " << alpha[g+8] << " " <<
    alpha[g+9] << " " << endl; 
      g = g + 10;
    }
    
    return 0;
}
