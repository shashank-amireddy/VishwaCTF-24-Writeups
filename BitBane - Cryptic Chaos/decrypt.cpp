#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isPrime(int num) {
    for (int i = 2; i * i < num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void applyExtraSecurity(vector<int>& encryption) {
    int n = encryption.size();
    for (int i = 0; i < n; ++i) {
        int idx = i + 2;
        if (isPrime(idx)) {
            encryption[i] = ~encryption[i];
        }
    }
}

void applyKey(vector<int>& nums, const string& key) {
    int n = key.size();
    for (int i = 0; i < n; ++i) {
        int currKey = key[i];
        int cntOnes = 0;
        int tempKey = currKey;
        while (tempKey) {
            if (tempKey & 1)
                ++cntOnes;
            tempKey >>= 1;
        }
        currKey = currKey << (i + 10);
        while (cntOnes--) {
            currKey = currKey << 1;
            currKey = currKey ^ 1;
        }
        int k = nums.size();
        for (int j = 0; j < k; ++j) {
            nums[j] = nums[j] ^ currKey;
        }
    }
}

int createTopping(int curr, int idx, int& notRemainder) {
    int temp = 0;
    int num = 1;
    num <<= 1;
    while (curr) {
        int remainder = curr % idx;
        if (remainder) {
            temp = temp * 10 + remainder;
            curr -= remainder;
        }
        else {
            num |= 1;
            curr /= idx;
        }
        num <<= 1;
    }
    temp <<= 1;
    temp |= 1;
    notRemainder = temp;
    return num | 1;
}

int createBase(int notRemainder) {
    int num = 0;
    for (int i = 0; i < 30; ++i) {
        if (notRemainder) {
            num |= (notRemainder & 1);
            notRemainder >>= 1;
        }
        num <<= 1;
    }
    return num;
}

int createNumber(int curr, int idx) {
    int notRemainder = 0;
    int topping = createTopping(curr, idx, notRemainder);
    int base = createBase(notRemainder);
    int num = base | topping;
    return num;
}

string decodeMessage(vector<int>& nums) {
    string message;
    for (int i = 0; i < nums.size(); i++) {
        int idx = (i % 8) + 2;
        int character = 0;
        for (character = 0; character < 128; character++) {
            int num = createNumber(character, idx);
            if (num == nums[i])
                break;
        }
        message += character;
    }
    return message;
}

void printNumbers(const vector<int>& nums) {
    for (int i = 0; i < nums.size() - 1; i++)
        cout << nums[i] << ' ';
    cout << nums[nums.size() - 1] << endl;
}

int main() {
    string key = "VishwaCTF";

    fstream file("Encrypted.txt");
    vector<int> nums;
    while (true) {
        int num;
        file >> num;
        if (file.fail())
            break;
        nums.push_back(num);
    }
    file.close();

    applyExtraSecurity(nums);
    applyKey(nums, key);
    printNumbers(nums);

    string message = decodeMessage(nums);
    cout << message << endl;

    return 0;
}
