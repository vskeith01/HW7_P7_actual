#include <iostream>
#include <cmath>

using namespace std;

void fillArray(double list[], int listSize);
void printArray(const double list[], int listSize);
void CalcArray(double listR[], double listC, double listP, int listSize);

int main() {

  const int arrayLength = 5;
  double Resistance[arrayLength] = {16, 27, 39, 56, 81};
  double current[arrayLength];
  double Power[arrayLength];

  //output resitance
  cout << "Resistance is :";
  printArray(Resistance, arrayLength);

  //input current and output it
  cout << "Current is: ";
  fillArray(current, arrayLength);
  printArray(current, arrayLength);


  // calculate Power
  CalcArray(Resistance, arrayLength);

  //output power
  cout << "Power is : ";
  printArray(Power, arrayLength);
  
  return = 0;
}

/* This function reads and stores data in an integer array from the console.
  Parameters: list[] is the size of the array to be filled
              sizeList is the size of the array */
void fillArray(double list[], int listSize) {

  cout << "Enter " << listSize << " integers: "; // comment out for kattis

  int index;

  for (index = 0; index < listSize; index++) {
    cin >> list[index];
  }

  return;
}

/* This function prints the elements of an integer array as a single row.
  Parameters: list[] is the array
              listSize is the size of the array */
void printArray(const double list[], int listSize) {
  int index;

  for (index = 0; index < listSize; index++)
    cout << list[index] << " ";

  cout << endl;
  return;
}

/* This function does the calculations and fills an array */

void CalcArray(double listR[], double listC, double listP, int listSize) {

  int index;

  for (index = 0; index < listSize; index++)
    {
      listP[index] = listR[index] * pow(listC[index],2);
    }

  return;
}
