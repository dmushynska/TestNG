#pragma once
#include <string>
#include <fstream>
#include "Algorithm.h"

class ArrayTransformer {
public:
    ArrayTransformer(const std::string &filename);
    ArrayTransformer() = delete;
    virtual ~ArrayTransformer() {}
    virtual void Operation() = 0;
private:
protected:
    std::vector<int> m_v1;
    std::vector<int> m_v2;
    std::vector<int> m_v3;
};


