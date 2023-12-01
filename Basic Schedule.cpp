#include <iostream>
#include <vector>
#include <string>

struct Event {
    std::string name;
    std::string time;
};

std::vector<Event> schedule;

void addEvent(std::string name, std::string time) {
    Event newEvent = {name, time};
    schedule.push_back(newEvent);
}

void viewSchedule() {
    for (int i = 0; i < schedule.size(); i++) {
        std::cout << "Event: " << schedule[i].name << ", Time: " << schedule[i].time << std::endl;
    }
}

void deleteEvent(std::string name) {
    for (int i = 0; i < schedule.size(); i++) {
        if (schedule[i].name == name) {
            schedule.erase(schedule.begin() + i);
            break;
        }
    }
}

int main() {
    addEvent("Meeting", "10:00");
    addEvent("Lunch", "12:00");
    viewSchedule();
    deleteEvent("Meeting");
    viewSchedule();
    return 0;
}
