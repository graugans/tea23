#include <fmt/chrono.h>
#include <fmt/format.h>

int status = 0;
bool direc = false; // false = hoch    true = runter
bool user_button = false;   // fehrnbedienung
bool endlage_oben = false;  
bool endlage_unten = false;
bool motor_an = false;      // Motor aktiv schalten

int Endlage(int stat){
    if (endlage_oben == true){
        fmt::print("Endlage oben erreicht")
        stat = true;

    }
}

auto main(int argc, char** argv) -> int
{
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", argv[0]);

    while(true){

        switch(status){
            case 0:
                fmt::print("Stop");
                motor_an = false;

                break;
            
            case 1: 
                fmt::print("Fahre hoch");
                direc = 0;
                motor_an = true;

                break;
            case 2:
                fmt::print("Fahre runter");
                direc = 1;
                motor_an = true;

                break;
        }
    }
    return 0; /* exit gracefully*/
}
    

