#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;

    // Create and open a text file for writing
    cout << "Enter the name of the file to create: ";
    cin >> filename;
    ofstream file_data(filename);

    // Write to the file
    file_data << "Files can be tricky, but it is fun enough!";

    // Close the file
    file_data.close();

    // Open the same file for reading
    cout << "\nEnter the name of the file to open: ";
    cin >> filename;
    ifstream file_reader(filename);

    if (file_reader.is_open()) {
        string line;
        while (getline(file_reader, line)) {
            cout << line << endl;
        }
        file_reader.close();
    } else {
        cout << "Unable to open the file for reading." << endl;
    }

    return 0;
}
