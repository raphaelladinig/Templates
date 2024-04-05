#include <bits/stdc++.h>

using namespace std;

const int curLevel = 0;
const int tasks = 0;
string filename;
void writeOutput(string input);

//---------------------------------------------------------------------------------------------------------------------------

string solve() {
    ifstream inputFile("in/" + filename + ".in");
    string result = "";

    if (inputFile.is_open()) {

        inputFile.close();
    }

    return result;
}

//---------------------------------------------------------------------------------------------------------------------------

int main() {
    for (int curTask = 1; curTask <= tasks; curTask++) {
        try {
            filename = "level" + to_string(curLevel) + "_" + to_string(curTask);
            writeOutput(solve());
            cout << "SUCCESS\n";
        } catch (const exception &e) {
            cout << "ERROR: " << e.what() << "\n";
        }
    }
    return 0;
}

void writeOutput(string input) {
    ofstream outputFile("out/" + filename + ".out");

    if (outputFile.is_open()) {
        outputFile << input;
    }
    outputFile.close();
}
