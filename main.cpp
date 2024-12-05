#include<iostream>
#include<fstream>
#include<sstream>

int main() {
    std::ifstream inputFile("input.txt", std::ios::in);
    int sum = 0;
    char nput[256];
    while(inputFile.getline(nput, 256)) {
        std::stringstream sstr(nput);
        int add = 0;
        sstr >> add;
        sum+=add;
    }
    inputFile.close();
    std::string sumstr = "";
    std::stringstream sstr(sumstr);
    sstr << sum;
    sstr >> sumstr;
    char sumchar[256];
    std::copy(sumstr.begin(), sumstr.end(), sumchar);
    std::ofstream outputFile("output.txt", std::ios::out | std::ios::trunc);
    outputFile.write(sumchar, sumstr.size());
    outputFile.close();
}