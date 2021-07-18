#ifndef ANGRY_CAT
#define ANGRY_CAT

#include <stdexcept>
using namespace std;

class AngryCatException : public runtime_error
{
    public:
        AngryCatException() : runtime_error("Made kitty angry!")
        {
        }
        AngryCatException(const string &err) : runtime_error(err)
        {
        }
};

#endif
