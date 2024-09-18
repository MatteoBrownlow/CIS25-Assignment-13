#include <iostream>
using namespace std;

int main(){
int sizeOfList, sumOfTemps = 0;
cout << "How many temperatures are in the list? " << endl;
cin >> sizeOfList;
int temperatureArray[sizeOfList];
for(int i = 0; i < sizeOfList; i++){
cout << "Enter a temperature: " << endl;
cin >> temperatureArray[i];
sumOfTemps += temperatureArray[i];
}

cout << "The average temperature is: " << sumOfTemps / sizeOfList;
return 0;
}


