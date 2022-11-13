#include <cstdio>
#include "UCore.h"

/*This is the main entry point. The loop is running here.
 * for now the engine is stopped by pressing a key
 *
 * */


int main() {

    UCORE* ucore = new UCORE();
    // start of loop
    while (ucore->getState() == RUNNING) {

        const char *input = "julien";
        printf("%s \n", input);

        ucore->setState(ENDING);
//        if (scanf(input)) {
//            ucore->setState(ENDING);
//        }
    }
    delete ucore;

    return 0;
}
