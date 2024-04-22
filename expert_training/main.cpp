#include<bits/stdc++.h>
using namespace std;
vector<int> a;

bool exist(int n) {
    for(int i = 0; i < a.size(); i++) {
        if(a[i] == n) return true;
    }
    return false;
}

int getRandomNumber() {
    static auto currentTime = chrono::high_resolution_clock::now();
    static auto seed = currentTime.time_since_epoch().count();
    static default_random_engine generator(seed);
    static uniform_int_distribution<int> distribution(1, 50);
    int randomNumber = distribution(generator);
    return randomNumber;
}

int main() {
    for(int i = 0; i < 5; i++) {
        int random = getRandomNumber();
        if(!exist(random) and random >= 1 and random <= 10) a.push_back(random);
    }
    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    return 0;
}