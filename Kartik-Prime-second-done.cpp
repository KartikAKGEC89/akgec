#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}


std::vector<int> rearrangePrimes(std::vector<int>& arr) {
    std::vector<int> primes;
    std::vector<int> nonPrimes;


    for (int num : arr) {
        if (isPrime(num)) {
            primes.push_back(num);
        } else {
            nonPrimes.push_back(num);
        }
    }
    
    std::sort(primes.begin(), primes.end(), std::greater<int>());

   
    std::vector<int> result;

    
    if (!primes.empty()) {
        result.push_back(primes.front()); 
        for (size_t i = 1; i < primes.size() - 1; ++i) {
            result.push_back(primes[i]); 
        }
        result.push_back(primes.back()); 
        
    }

    result.insert(result.end(), nonPrimes.begin(), nonPrimes.end());
    
    

    return result;
}

int main() {
    
    std::vector<int> arr1 = {5,1,8, 11,2};
    
    
    std::vector<int> result1 = rearrangePrimes(arr1);
    for (int num : result1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;


    return 0;
}
