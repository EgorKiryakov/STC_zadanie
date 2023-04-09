#include <string>
#include "vector"
#include "StringToValuesConverter.h"

#ifndef UNTITLED_LOGIC_H
#define UNTITLED_LOGIC_H


class Logic {
public:
    Logic();
    ~Logic();
    bool haveData();
    int setDataFromFile(std::string filePath);
    double mathEsp(std::vector<double> values);
    double cko(std::vector<double> values);
    double variations(std::vector<double> values);
    bool isComplex();


    std::vector<double> getReValue();
    std::vector<double> getImValue();
    std::vector<double> getAbs();
    std::vector<double> getPhase();


private:
    std::vector<std::complex<double>> data;
    std::string strValues;
    bool format;
};


#endif //UNTITLED_LOGIC_H
