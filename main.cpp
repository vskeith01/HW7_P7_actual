#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void fillArray(double list[], int listSize);
void printArrays(const double listC[], const double listR[], const double listP[], int listSize);
void CalcArray(double listR[], double listC[], double listP[], int listSize);

int main() {

  int width;
  const int arrayLength = 5;
  double Resistance[arrayLength] = {16, 27, 39, 56, 81};
  double current[arrayLength];
  double Power[arrayLength];



  //input current and output it
  width = 5;
  fillArray(current, arrayLength);
  cout << setw(width) << "Current " << setw(15) << "Resistance" << setw(12) << "Power";
  cout <<"\n";
  printArrays(current, Resistance, Power, arrayLength);

  /*
  //output resitance
  width = 15;
  //cout << setw(width) << "Resistance";
  printArray(Resistance, arrayLength, width);
  

  // calculate Power
  CalcArray(Resistance, current, Power, arrayLength);

  //output power
  width = 25;
  //cout << setw(width) << "Power";
  printArray(Power, arrayLength, width);
  */
  return 0;
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
void printArrays(const double listC[], const double listR[], const double listP[],int listSize) {
  int index;

  for (index = 0; index < listSize; index++)
    cout << setw(5) << listC[index] << setw(15) << listR[index] << setw(20) << listP[index] << endl;

  return;
}

/* This function does the calculations and fills an array */

void CalcArray(double listR[], double listC[], double listP[], int listSize) {

  int index;

  for (index = 0; index < listSize; index++)
    {
      listP[index] = listR[index] * pow(listC[index],2);
    }

  return;
}
