// Online C++ compiler to run C++ program onli
#include <iostream>
#include <functional>

class Trigger {
public:
    void setCallback(std::function<void()> callback) {
        callback_ = callback;
    }
    void activate() {
        if (callback_) {
            callback_();
        }
    }
private:
    std::function<void()> callback_;
};

int main() {
    Trigger myTrigger;
    myTrigger.setCallback([]() {
        std::cout << "Trigger activated!" << std::endl;
    });
    myTrigger.activate();
    return 0;
}