#include <fstream>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <strings.h>

std::string str;
std::string se;
std::string li;
std::string v;
std::string in;
int main(int argc, char** argv) 
{ 
    clock_t start = clock();
    std::ifstream file(argv[1]);
    se = argv[2];
    std::transform(se.begin(), se.end(), se.begin(), ::tolower);
    in = se;
    std::sort(se.begin(), se.end());
    auto sel = se.length();
    while (std::getline(file, str))
    {   

        if (str.find('\r') != std::string::npos){
           str.pop_back();
        }

        if (str.length() == sel) {
            std::transform(str.begin(), str.end(), str.begin(), ::tolower);
            li = str;
            std::sort(str.begin(), str.end());
            if (!se.compare(str)){
                if (!li.compare(in)){ 
                }
                else{
                v.append(","+li);
                }
            }
        }
    }
    clock_t stop = clock();
    double elapsed = (double)(stop - start) * 1000000.0 / CLOCKS_PER_SEC;
    std::cout << elapsed << "";
    std::cout << v << "\n";
    return 0;
}