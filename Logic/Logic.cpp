

#include <fstream>
#include "Logic.h"
#include <iostream>
#include <QDebug>

Logic::Logic() {

}

Logic::~Logic() {

}


int Logic::setDataFromFile(std::string filePath) {
    std::string path = filePath.c_str();
    if(filePath.find("complex") == std::string::npos){
        format = false;
    }else{
        format = true;
    }

    if (!std::ifstream(path)){
        return 1;
    }else {

            strValues = "";
            std::string line = "";
            std::ifstream in(path);
            if (in.is_open()) {
                while (getline(in, line)) {
                    strValues += line;
                }
            }

            data = toValueVector(strValues);

            in.close();
            return 0;
        }
}

std::vector<double> Logic::getReValue() {
    std::vector<double> realVal;
    for (int i = 0; i < data.size(); i++) {
        realVal.push_back(data[i].real());
    }
    return realVal;
}

std::vector<double> Logic::getAbs() {
    std::vector<double> absVec;
    for (int i = 0; i < data.size(); i++)
        absVec.push_back(abs(data[i]));


    return absVec;
}

std::vector<double> Logic::getPhase(){
    std::vector<double> phase;
    for (int i = 0; i < data.size(); i++){
        phase.push_back(arg(data[i]));
    }
    return phase;
}

std::vector<double> Logic::getImValue() {
    std::vector<double> Im;
    for (int i = 0; i < data.size(); i++){
        Im.push_back(data[i].imag());
    }
    return Im;
}

double Logic::mathEsp(std::vector<double> values) {
    double sum = 0;
    for (int i = 0; i < values.size(); i++) {
        sum += values[i];
    }
    return sum / values.size();

}

double Logic::cko(std::vector<double> values) {
    return sqrt(variations(values));
}

double Logic::variations(std::vector<double> values) {
    double variationSum = 0;
    double esp = mathEsp(values);
    for (int i = 0; i < values.size(); i++) {
        variationSum += (esp - values[i]) * (esp - values[i]);
    }
    return (variationSum/(values.size()));
}

bool Logic::haveData() {
    return !data.empty();
}

bool Logic::isComplex() {
    return format;
}


