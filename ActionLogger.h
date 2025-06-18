#pragma once

#include "User.h"

class ActionLogger {
public:
    static void log(const User& user, const char* action);
};