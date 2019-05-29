//PROGRAM DESCRIPTION: https://www.codechef.com/problems/BESTSUM
#include <iostream>
#include <fstream> //logging and debugging
#include <vector> //std::vector

int main(int argc, char**argv){
    //logging and debug
    std::ofstream log;
    log.open("log.txt");
    log << "---------START\n";

    int N, K, P;
    std::vector<int> V;

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
