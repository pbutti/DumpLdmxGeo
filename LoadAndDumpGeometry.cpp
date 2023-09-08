#include "G4VPhysicalVolume.hh"
#include "G4GDMLParser.hh"

#include <iostream>

int main() {
    std::cout << "Running..." << std::endl;

    G4GDMLParser parser;
    parser.Read("./detector.gdml");

    G4VPhysicalVolume * worldVolume = parser.GetWorldVolume();
    parser.Write("ldmx.gdml", worldVolume, true);

    return 0;
};
