#include "TRIGGER.h"
int main() {
    Trigger myTrigger;
    myTrigger.setCallback([]() {
        std::cout << "Trigger activated!" << std::endl;
    });
    myTrigger.activate();
    return 0;
}

