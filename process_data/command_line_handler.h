#ifndef COMMAND_LINE_HANDLER_H
#define COMMAND_LINE_HANDLER_H

#include <iostream>
#include <string>
#include <tuple>
using namespace std;

tuple<string,string> handleCommandLine(int argc, char* argv[]) {
    if (argc < 3) {
        cerr << "Correct Use select : "  
             << argv[0]
             << " <digits|mnist|game_of_life> <full|sample>"
             << "\n first input refers to dataset, and second to calculation method"
             << endl;
        exit(1);
    }

    string dataset = argv[1];
    string method = argv[2];

    if ((dataset == "digits" || dataset == "mnist" || dataset == "game_of_life") &&
        (method == "full" || method == "sample")) {
        return make_tuple(dataset, method);
    } 
    else {
        if (dataset != "digits" && dataset != "mnist" && dataset != "game_of_life") {
            cerr << "Invalid dataset: " 
                 << dataset
                 << "(digits|mnist|game_of_life)"
                 << endl;
        }
        if (method != "full" && method != "sample") {
            cerr << "Invalid method: "
                 << method
                 << "(full|sample)"
                  << endl;
        }
        exit(1);
    }
}







#endif // COMMAND_LINE_HANDLER_H