//PROGRAM DESCRIPTION: https://www.codechef.com/problems/BESTSUM
#include <iostream>
#include <fstream> //logging and debugging
#include <vector> //std::vector

int partial_sum(std::vector<int>, int i, int j);
int best_mod(std::vector<int>, int mod, int min);

int main(int argc, char**argv){
    //logging and debug
    std::ofstream log;
    log.open("log.txt");
    log << "---------START\n";

    int N, K, P;
    std::vector<int> V;

    //N = amount of numbers, K = modulo, P = minimum result
    std::cin >> N >> K >> P;
    log << "N: " << N << std::endl;
    log << "K: " << K << std::endl;
    log << "P: " << P << std::endl;

    log << "Reading " << N << " numbers: ";
    for(int x=0; x<N; ++x){
        int temp;
        std::cin >> temp;
        V.push_back(temp);
        log << temp << " ";
    }
    log << std::endl;
        
    log << "---------END\n"; //logging and debug
    log.close();
    return 0;
}

int partial_sum(std::vector<int>, int i, int j){
    return 0;
}
int best_mod(std::vector<int>, int mod, int min){
    return 0;
}
