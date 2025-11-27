#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"
int globalVar = 7 ;
int globalVar2 = 0;
int globalVar3 ;
static int globalVars = 7 ;
static int globalVar2s = 0;
static int globalVar3s ;
const int globalVarc = 7 ;
const int globalVar2c = 0;
int globalVar3c ;
int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    fmt::println("Wert globalVar {}, Adresse globalVar {} " ,globalVar, fmt::ptr(&globalVar));

    fmt::println("Wert globalVar {}, Adresse globalVar 2 {} " ,globalVar2, fmt::ptr(&globalVar2));

    fmt::println("Wert globalVar {}, Adresse globalVar 3 {} " ,globalVar3, fmt::ptr(&globalVar3));
    int localVar = 2;
    int localVar2 =0;
    int localVar3 ;
    static int localVars = 2;
    static int localVar2s =0;
    static int localVar3s ;
    const int localVarc = 2;
    const int localVar2c =0;
    fmt::println("Wert ohne lokalVar {}, Adresse localVar  {} " ,localVar, fmt::ptr(&localVar));
    fmt::println("Wert ohne globalVar {}, Adresse globalVar{}", globalVar, fmt::ptr(&globalVar));

    fmt::println("Wert ohne lokalVar {}, Adresse localVar 2 {} " ,localVar2, fmt::ptr(&localVar2));
    fmt::println("Wert ohne globalVar {}, Adresse globalVar 2 {}", globalVar2 , fmt::ptr(&globalVar2));

    fmt::println("Wert ohne lokalVar {}, Adresse localVar 3 {} " ,localVar3, fmt::ptr(&localVar3));
    fmt::println("Wert ohne globalVar {}, Adresse globalVar 2 {}", globalVar3 , fmt::ptr(&globalVar3));

    fmt::println("Wert static lokalVar {}, Adresse localVar  {} " ,localVars, fmt::ptr(&localVars));
    fmt::println("Wert static globalVar {}, Adresse globalVar {}", globalVars, fmt::ptr(&globalVars));    

    fmt::println("Wert static lokalVar {}, Adresse localVar 2 {} " ,localVar2s, fmt::ptr(&localVar2s));
    fmt::println("Wert static globalVar {}, Adresse globalVar 2 {}", globalVar2s, fmt::ptr(&globalVar2s));

    fmt::println("Wert static lokalVar {}, Adresse localVar 3 {} " ,localVar3s, fmt::ptr(&localVar3s));
    fmt::println("Wert static globalVar {}, Adresse globalVar 3 {}", globalVar3s, fmt::ptr(&globalVar3s));

    fmt::println("Wert const lokalVar {}, Adresse localVar  {} " ,localVarc, fmt::ptr(&localVarc));
    fmt::println("Wert const globalVar {}, Adresse globalVar {}", globalVarc , fmt::ptr(&globalVarc));

    fmt::println("Wert const lokalVar {}, Adresse localVar 2 {} " ,localVar2c, fmt::ptr(&localVar2c));
    fmt::println("Wert const globalVar {}, Adresse globalVar 2 {}", globalVar2c, fmt::ptr(&globalVar2c));

    // fmt::println("Wert const lokalVar {}, Adresse localVar 3 {} " ,localVar3c, fmt::ptr(&localVar3c));
    // fmt::println("Wert const globalVar {}, Adresse globalVar 3", globalVar3c, fmt::ptr(&globalVar3c));

    // int* heapVar = new int(3);
    // fmt::println("Wert heapVar {}, Adresse heapVar {}", heapVar, fmt::print(&heapVar));

    // delete &heapVar;


    /* INSERT YOUR CODE HERE */

    return 0; /* exit gracefully*/
}
