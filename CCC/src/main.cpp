#include <bits/stdc++.h>

using namespace std;

const int level = 0;
const int tasksNr = 0;
const string filename = "level" + to_string(level) + "_";

string code();
string processInput(int taskNr);
void writeOutput(int taskNr, string input);

int main() {
    for (int taskNr = 1; taskNr <= tasksNr; taskNr++) {
        try {
            writeOutput(taskNr, processInput(taskNr));
            cout << "SUCCESS\n";
        } catch (const exception& e) {
            cout << "ERROR: " << e.what() << "\n";
        }
    }
    return 0;
}

string code() { // Pass Variables
    string result = "";

    // Logic

    return result;
}

string processInput(int taskNr) {
    ifstream inputFile("in/" + filename + to_string(taskNr) + ".in");

    // Variables

    if (inputFile.is_open()) {
        // Fill Variables

        inputFile.close();
    }

    return code();
}

void writeOutput(int taskNr, string input) {
    ofstream outputFile("out/" + filename + to_string(taskNr) + ".out");

    if (outputFile.is_open()) {
        outputFile << input;
    }
    outputFile.close();
}
