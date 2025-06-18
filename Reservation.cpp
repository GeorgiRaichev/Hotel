#include "Reservation.h"
#include <iostream>

Reservation::Reservation(int id, int guestId, int roomId, const Date& from, const Date& to, double totalPrice)
    : id(id), guestId(guestId), roomId(roomId), fromDate(from), toDate(to), totalPrice(totalPrice) {
}
Reservation::Reservation()
    : id(0), guestId(0), roomId(0), fromDate(), toDate(), totalPrice(0.0) {
}


int Reservation::getId() const { return id; }
int Reservation::getGuestId() const { return guestId; }
int Reservation::getRoomId() const { return roomId; }
const Date& Reservation::getFromDate() const { return fromDate; }
const Date& Reservation::getToDate() const { return toDate; }
double Reservation::getTotalPrice() const { return totalPrice; }

void Reservation::printInfo() const {
    std::cout << "Reservation ID: " << id
        << ", Guest ID: " << guestId
        << ", Room ID: " << roomId
        << ", From: " << fromDate.getDay() << "/" << fromDate.getMonth() << "/" << fromDate.getYear()
        << ", To: " << toDate.getDay() << "/" << toDate.getMonth() << "/" << toDate.getYear()
        << ", Total Price: " << totalPrice << "\n";
}