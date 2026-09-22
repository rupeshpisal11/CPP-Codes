// Program 09: Smart Agriculture Sensor Monitor
// Unit I - Class and object, encapsulation, parameterized constructor, vector of objects
// Compile: g++ -std=c++17 -Wall program09.cpp -o program09

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Each sensor object keeps its own ID, moisture reading and time stamp.
class SoilSensor {
// Encapsulation: data members are hidden from outside code.
private:
  string sensorId;
  double moistureLevel;
  string timestamp;

public:
  // Parameterized constructor: sets the initial state using an initializer list.
  SoilSensor(string id, double moisture, string time)
     : sensorId(id), moistureLevel(moisture), timestamp(time) {}

  // Updates the sensor with a new reading and time.
  void readSensor(double newMoisture, string newTime) {

         moistureLevel = newMoisture;
         timestamp = newTime;
     }

     // const: this function only reads data and does not modify the object.
     void displayData() const {
         cout << "Sensor: " << sensorId
            << " | Moisture: " << moistureLevel << "%"
            << " | Time: " << timestamp << endl;
     }
};

int main() {
     // A vector stores several sensor objects.
     vector<SoilSensor> farmSensors;
     // emplace_back builds each sensor directly inside the vector.
     farmSensors.emplace_back("S001", 45.2, "08:00");
     farmSensors.emplace_back("S002", 52.8, "08:00");
     farmSensors.emplace_back("S003", 38.5, "08:00");

     cout << "=== Morning Sensor Readings ===" << endl;
     // Range-based loop; const auto& avoids copying each sensor.
     for (const auto& sensor : farmSensors) {
         sensor.displayData();
     }

     // Update only the first sensor; the others keep their old state.
     farmSensors[0].readSensor(47.5, "09:00");
     cout << "\n=== Updated Reading ===" << endl;
     farmSensors[0].displayData();
}
