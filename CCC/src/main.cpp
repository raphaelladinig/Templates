#include <fstream>
#include <iostream>

using namespace std;

const int level = 0;
const int tasks[] = {0};

//---------------------------------------------------------------------------------------------------------------------------

string solve(string filename) {
    ifstream inputFile("in/" + filename + ".in");
    string result = "";

    if (inputFile.is_open()) {

        inputFile.close();
    } else {
        throw runtime_error("Could not open input file");
    }

    return result;
}

//---------------------------------------------------------------------------------------------------------------------------

int main() {
    for (int task : tasks) {
        try {
            string filename =
                "level" + to_string(level) + "_" + to_string(task);
            ofstream outputFile("out/" + filename + ".out");
            if (outputFile.is_open()) {
                outputFile << solve(filename);
            } else {
                throw runtime_error("Could not open output file");
            }
            outputFile.close();
            cout << "SUCCESS\n";
        } catch (const exception &e) {
            cout << "ERROR: " << e.what() << "\n";
        }
    }

    return 0;
}
