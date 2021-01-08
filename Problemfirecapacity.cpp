#include <iostream>

using namespace std;//used for cin and cout

int main(int argc, char **argv) {
    unsigned short maxRoomCapacity;//short is plenty big for attendant size for a room, unsigned since always positive
    unsigned short numPeopleAttending;//short also plenty long enough for number of people attending a meeting
    short diffCapacityAndAttending;//difference between number of people allowed and number actually attending

    cout << "Maximum room capacity: ";
    cin >> maxRoomCapacity;

    cout << "Number of people to attend the meeting: ";
    cin >> numPeopleAttending;

    diffCapacityAndAttending = maxRoomCapacity - numPeopleAttending;//positive if capacity exceeds those attending

    if (diffCapacityAndAttending >= 0) {//if difference is positive or zero, it is legal
        cout << "It is legal to hold the meeting." << endl;
        cout << "Number of additional people who can legally attend: " << diffCapacityAndAttending << endl;
    }
    else {
        cout << "The meeting cannot be held as planned due to fire regulations." << endl;
        cout << "Number of people who must be excluded in order to meet the fire regulations: " << -diffCapacityAndAttending << endl;//negative difference since the value of the variable is negative if it got to this code block
    }

    return 0;
}
