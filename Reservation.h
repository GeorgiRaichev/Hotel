#pragma once

#include "Date.h"

class Reservation {
private:
    int id;
    int guestId;
    int roomId;
    Date fromDate;
    Date toDate;
    double totalPrice;

public:
    Reservation();
    Reservation(int id, int guestId, int roomId, const Date& from, const Date& to, double totalPrice);

    int getId() const;
    int getGuestId() const;
    int getRoomId() const;
    const Date& getFromDate() const;
    const Date& getToDate() const;
    double getTotalPrice() const;

    void printInfo() const;
};