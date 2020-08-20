#pragma once
#include <string>

using namespace std;

/*
C.
*Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.
*Note: This information should be included in the degree.h file.
*/
enum class DegreeProgram {UNDECIDED, NETWORK, SECURITY, SOFTWARE};
static const string degreeProgramStr[] = {"UNDECIDED", "NETWORK", "SECURITY", "SOFTWARE"};
