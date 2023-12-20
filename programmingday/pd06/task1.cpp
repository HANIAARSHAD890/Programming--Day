#include <iostream>
#include <string>
using namespace std;

string decideactivity(string temperature, string humidity);

int main() {
  string temperature;
  string humidity;
  cout << "Enter temperature (warm or cold): ";
  cin >> temperature;
  cout << "Enter humidity (dry or humid): ";
  cin >> humidity;
  cout << "Recommended activity: ";
  cout << decideactivity(temperature, humidity);
  decideactivity(temperature, humidity);
}

string decideactivity(string temperature, string humidity) {
  string result;
  if ((temperature == "warm") && (humidity == "dry")) {
    result = "Play tennis";
  }
  if ((temperature == "warm") && (humidity == "humid")) {
    result = "Swim";
  }
  if ((temperature == "cold") && (humidity == "dry")) {
    result = "Play basketball";
  }
  if ((temperature == "cold") && (humidity == "humid")) {
    result = "Watch TV";
  }
  return result;
}
