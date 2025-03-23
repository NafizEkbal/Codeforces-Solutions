#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

// Function to generate the permutation
vector<int> generatePermutation(int n) {
    vector<int> permutation;
    // Start with small primes
    permutation.push_back(2);
    permutation.push_back(3);
    permutation.push_back(5);
    permutation.push_back(7);
    permutation.push_back(11);
    permutation.push_back(13);
    permutation.push_back(17);
    permutation.push_back(19);
    permutation.push_back(23);
    permutation.push_back(29);
    permutation.push_back(31);
    permutation.push_back(37);
    permutation.push_back(41);
    permutation.push_back(43);
    permutation.push_back(47);
    permutation.push_back(53);
    permutation.push_back(59);
    permutation.push_back(61);
    permutation.push_back(67);
    permutation.push_back(71);
    permutation.push_back(73);
    permutation.push_back(79);
    permutation.push_back(83);
    permutation.push_back(89);
    permutation.push_back(97);

    // Fill the rest with non-prime numbers in ascending order
    int nextNumber = 1;
    while (permutation.size() < n) {
        if (!isPrime(nextNumber)) {
            permutation.push_back(nextNumber);
        }
        nextNumber++;
    }
    return permutation;
}

// Function to compute the c_i sequence
vector<int> computeCSequence(const vector<int>& permutation) {
    vector<int> cSequence;
    int total = 0;
    for (int i = 0; i < permutation.size(); i++) {
        total += permutation[i];
        int c_i = (total + i) / (i + 1); // Equivalent to ceil(total / (i + 1))
        cSequence.push_back(c_i);
    }
    return cSequence;
}

// Function to count the number of primes in the c_i sequence
int countPrimes(const vector<int>& cSequence) {
    int count = 0;
    for (int x : cSequence) {
        if (isPrime(x)) count++;
    }
    return count;
}

// Function to test the code for n = 2 to n = 1e5
void testCode() {
    for (int n = 2; n <= 1e5; n++) {
        vector<int> permutation = generatePermutation(n);
        vector<int> cSequence = computeCSequence(permutation);
        int primeCount = countPrimes(cSequence);
        int requiredPrimes = (n / 3) - 1;
        if (primeCount < requiredPrimes) {
            cout << "Failed for n = " << n << ": Found " << primeCount << " primes, required " << requiredPrimes << endl;
            return;
        }
    }
    cout << "All test cases passed!" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    testCode();
    return 0;
}