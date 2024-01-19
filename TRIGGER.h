// TRIGGER.h

#ifndef TRIGGER_H
#define TRIGGER_H




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

#endif // TRIGGER_H


