#include "ArrayTransformer.h"
#include <fstream>
#include <sstream>

// creates vector from string, works only with int and spaces(' ', ',')
    void stringToVector(const std::string &str, std::vector<int> &vector) {
        std::stringstream ss(str);
        int numb = 0;
        while (ss >> numb) {
            vector.push_back(numb);
            while (ss.peek() == ' ' || ss.peek() == ',') {
                ss.ignore();
            }
        }
    }

// loads file and fills vectors
    ArrayTransformer::ArrayTransformer(const std::string &filename) {
        std::string line;
        std::ifstream file(filename);
        if (file.is_open()) {
            int i = 0;
            for (i = 0; std::getline(file, line); ++i) {
                switch (i) {
                    case 0:
                        stringToVector(line, m_v1);
                        break;
                    case 1:
                        stringToVector(line, m_v2);
                        break;
                    case 2:
                        stringToVector(line, m_v3);
                        break;
                }
                if (i > 2) {
                    std::cerr << "Ups. Your file is big. There must be only 3 arrays.\n";
                }
            }
            if (i < 2 || m_v1.empty() || m_v2.empty() || m_v3.empty()) {
                std::cerr << "Ups. Your file is small. There must be 3 arrays.\n";;
                return;
            }
            file.close();
        } else {
            std::cerr << "Ups. File can't be opened.\n";
        }
    }