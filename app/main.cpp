#include <iostream>
#include "ArrayTransformer.h"
#include "PrintArray.h"
#include "SortArray.h"
#include "IntersectArray.h"
#include "UniqueReversedArray.h"

static inline void PrintListOfCommands() {
    std::cout << "Commands: \n"
            << "PRINT or print -> prints arrays;\n"
            << "SORT or s -> sorts arrays;\n"
            << "INTERSECT or i -> creates intersection of two biggest and all arrays;\n"
            << "UNIQUE or u -> creates unique reversed array;\n"
            << "CHANGE or c -> changes file;\n"
            << "QUIT or q -> exit.\n";
}

int main(int argc, char **argv) {
    std::string filename;
    std::string command;
    if (argc == 2) {
        filename = std::string(argv[1]);
    } else {
        std::cout << "Enter filename to continue ...\n";
        std::cout <<"-> ";
        std::cin >> filename;
    }
    PrintListOfCommands();
    while (1) {
        std::cout <<"-> ";
        std::cin >> command;
        if (command == "PRINT" || command == "p") {
            PrintArray a(filename);
            a.Operation();
        } else if (command == "SORT" || command == "s") {
            SortArray a(filename);
            a.Operation();
            a.PrintSort();
        } else if (command == "INTERSECT" || command == "i") {
            IntersectArray a(filename);
            a.Operation();
            a.PrintIntersectionOfTwoArray();
            a.PrintIntersectionOfTreeArray();
        } else if (command == "UNIQUE" || command == "u") {
            UniqueReversedArray a(filename);
            a.Operation();
            a.PrintUniqueReservedArray();
        } else if (command == "CHANGE" || command == "c") {
            std::cout << "Enter filename to continue ...\n";
            std::cout <<"New filename -> ";
            std::cin >> filename;
            std::cout << "filename is " << filename << "\n";
        } else if (command == "QUIT" || command == "q") {
            std::cout << "Bye.\n";
            break;
        } else {
            std::cerr << "Ups. Unknown command.\n";
            PrintListOfCommands();
        }
    }
}
