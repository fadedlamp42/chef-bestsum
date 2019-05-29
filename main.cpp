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

    //N = amount of numbers, K = minimum result, P = modulo 
    std::cin >> N >> K >> P;
    log << "N: " << N << std::endl;
    log << "K: " << K << std::endl;
    log << "P: " << P << std::endl;

    //input
    log << "Reading " << N << " numbers: ";
    for(int x=0; x<N; ++x){
        int temp;
        std::cin >> temp;
        V.push_back(temp);
        log << temp << " ";
    }
    log << std::endl;

    //function call and print result
    std::cout << best_mod(V, P, K) << std::endl;
        
    log << "---------END\n"; //logging and debug
    log.close();
    return 0;
}

int partial_sum(std::vector<int>, int i, int j){
    return 0;
}
int best_mod(std::vector<int>, int mod, int min){
    //main loop
    for(int dist=0; dist<mod; ++dist){//dist = distance from minimum, start at 0, end at mod-1

    }

    return 0;
}
