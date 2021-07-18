#ifndef ANGRY_CAT
#define ANGRY_CAT

#include <stdexcept>
using namespace std;

class AngryCat : public runtime_error
{
    public:
        AngryCatException() : runtime_error("Made kitty angry!")
        {

        }
    private:
};

#endif
