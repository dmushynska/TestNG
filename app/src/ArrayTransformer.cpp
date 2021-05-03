#include "ArrayTransformer.h"
#include <fstream>
#include <regex>

    void stringToVector(const std::string &str, std::vector<int> &vector) {
        std::vector<int> result;
        std::stringstream ss(str);
        int numb = 0;
        while (ss >> numb) {
            while (ss.peek() == ' ' || ss.peek() == ',') {
                ss.ignore();
            }
            result.push_back(numb);
        }
    }

    ArrayTransformer::ArrayTransformer(const std::string &filename) {
        std::string line;
        std::ifstream file(filename);
        if (file.is_open()) {
            int i = 0;
            for (i = 0; std::getline(file, line); i++) {
                switch (i) {
                    case 0:
                        stringToVector(line, m_v1);
                    case 1:
                        stringToVector(line, m_v2);
                    case 2:
                        stringToVector(line, m_v3);
                    case 3:
                        std::cerr << "Ups. Your file is big. There must be only 3 arrays.\n";
                }
            }
            if (i < 2 || m_v1.empty() || m_v2.empty() || m_v3.empty()) {
                std::cerr << "Ups. Your file is small. There must be 3 arrays.\n";;
                return;
            }
        } else {
            std::cerr << "Ups. File can't be opened.\n";
        }
    }