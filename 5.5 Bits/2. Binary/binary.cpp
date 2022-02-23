#include <iostream>
#include <bitset>
#include <cmath>
#include <cstring>
//#include <cassert> // for assert()

using namespace std;

/*
 * Converts integers to binary (as a string)
 */
string unsignedInt2binary(int num)
{
    // Setup size
    int numBytes = 4;
    constexpr int bytesSize = 4;
    const int size = bytesSize * numBytes;

    // initialize all instantiated array elements with '0'
    char bits[size];
    for (int index = 0; index < size; index++)
        bits[index] = '0';

    // Iterate over array and perform binary conversion logic
    for (int index = 0; index < size; index++) {
        int value = pow(2, (size-index-1));
        if (num >= value) {
            num -= value;
            bits[index] = '1';
        }
    }

    // Return {} when could not capture entire int
    if (num > 0) {
        return {};
    }

    // convert char array into string
    string binStr = "";
    for (auto bit : bits)
        binStr += bit;


    // reduce padding 0s
    string reducedBinStr = "";
    bool sawFirstSignificant = false;
    for (auto bit : binStr) {
        if (bit == '1') {
            sawFirstSignificant = true;
        }
        if (sawFirstSignificant) {
            reducedBinStr += bit;
        }
    }
    if (!sawFirstSignificant) {
        reducedBinStr = "0";
    }

    // add spaces after every 4th bit
    string spacedReducedBinStr = "";
    int reducedBinStrLen = reducedBinStr.length();
    for (int index = 0; index < reducedBinStrLen; index++) {
        spacedReducedBinStr += reducedBinStr[index];
        if ((reducedBinStrLen - index - 1) % 4 == 0 && ((reducedBinStrLen - index - 1) != 0))
            spacedReducedBinStr += " ";
    }

    return spacedReducedBinStr;
}

template <typename T>
bool assertEquals(T value, T expected) {
    if (value != expected) {
        cerr << "FAIL - Test: got " << value << " which does not equal expected " << expected << endl;
        return false;
    }
    return true;
}

void testUnsignedInt2binary() {
    cout << "Testing Int 2 Binary:" << endl;
    bool t0 = assertEquals<string>(unsignedInt2binary(0), "0");
    bool t1 = assertEquals<string>(unsignedInt2binary(1), "1");
    bool t2 = assertEquals<string>(unsignedInt2binary(2), "10");
    bool t3 = assertEquals<string>(unsignedInt2binary(3), "11");
    bool t4 = assertEquals<string>(unsignedInt2binary(4), "100");
    bool t5 = assertEquals<string>(unsignedInt2binary(5), "101");
    bool t77 = assertEquals<string>(unsignedInt2binary(77), "100 1101");
    if (t0 && t1 && t2 && t3 && t4 && t5 && t77) {
        cout << "SUCCESS: passed all tests" << endl;
    }
}

/*
 * Converts binary (as a string) to integer
 */
int binary2unsignedInt(string binary)
{
    // remove spaces
    for (int index = 0; index < binary.length(); index++) {
        if (binary[index] == ' ') {
            binary.erase(index,1);
        }
    }

    int strLen = strlen(binary.data());
    // or
    // int strLen = binary.size();

    int sum = 0;
    for (int index = 0; index < strLen; index++) {
        if (binary[index] == '1') {
            sum += pow(2, (strLen - index - 1));
        }
    }
    return sum;
}

void testBinary2unsignedInt() {
    cout << "Testing Binary 2 Int:" << endl;
    bool t0 = assertEquals<int>(binary2unsignedInt("0"), 0);
    bool t1 = assertEquals<int>(binary2unsignedInt("1"), 1);
    bool t2 = assertEquals<int>(binary2unsignedInt("10"), 2);
    bool t3 = assertEquals<int>(binary2unsignedInt("11"), 3);
    bool t4 = assertEquals<int>(binary2unsignedInt("100"), 4);
    bool t5 = assertEquals<int>(binary2unsignedInt("101"), 5);
    bool t77 = assertEquals<int>(binary2unsignedInt("100 1101"), 77);
    if (t0 && t1 && t2 && t3 && t4 && t5 && t77) {
        cout << "SUCCESS: passed all tests" << endl;
    }
}

int main()
{
    int num = 93;

    string binNum = unsignedInt2binary(num);
    cout << binNum << endl;
    testUnsignedInt2binary();

    int intNum = binary2unsignedInt("1010 0010");
    cout << intNum << endl;
    testBinary2unsignedInt();

    return 0;
}
