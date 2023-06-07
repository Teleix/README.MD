#include <iostream>
#include <string>

using namespace std;

// Define constants
const int BASE_PRICE = 1000;
const int DISCOUNT_THRESHOLD = 10;

int main() {
    // Initialize variables
    int totalCost = 0;
    bool discountApplied = false;

    // Display program title and welcome message
    cout << "Solar Travel Booking System" << endl;
    cout << "Welcome to IE Solar Travel!" << endl;

    // Prompt user for destination
    cout << "Please enter your destination: ";
    string destination;
    getline(cin, destination);

    // Prompt user for number of travelers
    cout << "How many travelers are there? ";
    int numOfTravelers;
    cin >> numOfTravelers;

    // Calculate total cost based on the number of travelers
    totalCost = BASE_PRICE * numOfTravelers;

    // Check if discount applies
    if (numOfTravelers >= DISCOUNT_THRESHOLD) {
        totalCost *= 0.9;
        discountApplied = true;
    }

    // Display the booking summary
    cout << "Booking Summary" << endl;
    cout << "-------------------------" << endl;
    cout << "Destination:        " << destination << endl;
    cout << "Number of Travelers: " << numOfTravelers << endl;
    cout << "Total Cost:         $" << totalCost << endl;
    cout << "-------------------------" << endl;


    // Check if IE Solar Travel is the destination
    if (destination == "IE Solar Travel") {
        cout << "You have chosen IE Solar Travel as your destination." << endl;
        cout << "Here are some additional features for IE Solar Travel:" << endl;
        // Provide additional features and options for IE Solar Travel
    }
    else {
        cout << "You have chosen a different destination." << endl;
        cout << "Enjoy your trip!" << endl;
    }

    // Display discount notification if applicable
    if (discountApplied) {
        cout << "A 10% discount has been applied to the total cost." << endl;
    }

    // Display program exit message
    cout << "Thank you for using the Solar Travel Booking System. Have a great day!" << endl;

    return 0;
}