#pragma once
#include "Piece.h"
#include <string>

using namespace std;
class Queen : public Piece {
    public:
        string getType() {
            string dummy = "Queen";
            return dummy;
        }
};
