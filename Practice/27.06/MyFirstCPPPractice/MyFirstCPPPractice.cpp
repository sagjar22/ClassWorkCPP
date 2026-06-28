#include <iostream>

using namespace std; 

//1

void printB1ts(int num) {
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        cout << bit;
    }
    cout << '\n';
}

//2 

bool isEven(int num) {
    return (num & 1) == 0;
}

//3 

int clearBit(int num, int index) {
    return num & -(1 << index);
}

//4

int setBit(int num, int index) {
    return num | (1 << index);
}

//5 

int toggleBit(int num, int index) {
    return num ^ (1 << index);
}

//6

void countBits(int num, int& onesCount, int& zerosCount) {
    onesCount = 0;
    zerosCount = 0;

    for (int i = 0; i < 32; i++) {
        int bit = (num >> i) & 1;
        if (bit == 1)
            onesCount++;
        else
            zerosCount++;
    }
}

//7

bool isTwoPower(int num) {
    if (num == 0)
        return false;
    return (num & (num - 1)) == 0;
}

//8

int lowestSetBitIndex(int num) {
    if (num == 0)
        return -1;

    int index = 0; 
    while (((num >> index) & 1) == 0) {
        index++;
    }
    return index;
}

//9

int clearLowestSetBit(int num) {
    return num & (num - 1);
}

int main()
{
    cout << "=== Task 1: Print bits ===\n";
    int n1 = 52;
    cout << "Number: " << n1 << '\n';
    cout << "Bits: ";
    printB1ts(n1);
    cout << "=== Task 2: Even or odd ===\n";
    int n2 = 42;
    int n3 = 52;
    cout << "Number: " << n2 << "is" << (isEven(n2) ? "even" : "odd") << '\m';
    cout << "Number: " << n2 << "is" << (isEven(n3) ? "even" : "odd") << '\m';
    cout << "=== Task 3: Clear bit ===\n";
    int n4 = 67;
    int cleared = clearBit(n4, 1);
    cout << "Number before: " << n4 << '\n';
    printB1ts(n4);
    cout << "Number after clearing bit: " << cleared << ", bits: ";
    printB1ts(cleared);
    cout << "=== Task 4: Set bit ===\n";
    int n5 = 1488;
    int setRes = setBit(n5, 2);
    cout << "Number before: " << n5 << ", bits: ";
    printB1ts(n5);
    cout << "Number after setting bit 2: " << setRes << ", bits: ";
    printB1ts(setRes);
    cout << "=== Task 5: Toggle bit ===\n";
    int n6 = 10;
    int toggled = toggleBit(n6, 0);
    cout << "Number before: " << n6 << ", bits: ";
    printB1ts(n6);
    cout << "Number affter toggling bit 0: " << toggled << ", bits: ";
    printB1ts(toggled);
    cout << "=== Task 6: Cout ones and zeros ===\n";
    int n7 = 28;
    int onesCount;
    int zerosCount;
    countBits(n7, onesCount, zerosCount);
    cout << "Number: " << n7 << '\n';
    cout << "Ones: " << onesCount << "Zeros: " << zerosCount << '\n';
    cout << "=== Task 7: Is Two Power ===\n";
    int n8 = 67;
    cout << n8 << "Is power of two: " << (isTwoPower(n8) ? "yes" : "no") << '\n';
    cout << "=== Task 8: Lowest set bit index ===\n";
    int n9 = 42;
    cout << "Number: " << n9 << ", bits: ";
    printB1ts(n9);
    cout << "Index of lowest set bit: " << lowestSetBitIndex(n9) << '\n';
    cout << "=== Task 9: Clear lowest set bit ===\n";
    int n10 = 52;
    int afterClear = clearLowestSetBit(n10);
    cout << "Number before: " << n10 << ", bits: ";
    printB1ts(n10);
    cout << "Number after: " << afterClear << ", bits: ";
    
}
