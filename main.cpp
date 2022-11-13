#include <iostream>
#include "UCore.h"

/*This is the main entry point. The loop is running here.
 * for now the engine is stopped by pressing a key
 *
 * */


int main() {

    UCORE* ucore = new UCORE();
    // start of loop
    while (ucore->getState() == RUNNING) {

        std::string input;
        std::cin >> input;

        if (input == "exit") {
            ucore->setState(ENDING);
        }
    }
    delete ucore;

    return 0;
}
