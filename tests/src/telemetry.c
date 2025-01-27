#include "test.h"

const char* const pilots[] = {
    "Pierre Gasly",
    "Charles Leclerc",
    "Max Verstappen",
    "Lando Norris",
    "Sebastian Vettel",
    "Daniel Ricciardo",
    "Lance Stroll",
    "Carlos Sainz",
    "Antonio Giovinazzi",
    "Kevin Magnussen",
    "Alexander Albon",
    "Nicholas Latifi",
    "Lewis Hamilton",
    "Romain Grosjean",
    "George Russell",
    "Sergio Perez",
    "Daniil Kvyat",
    "Kimi Raikkonen",
    "Esteban Ocon",
    "Valtteri Bottas"
};

int test_getpilotid(unsigned counter)
{
    custom_assert(getPilotId("Alexander Albon") == 10, counter);
    custom_assert(getPilotId("Max Verstappen") == 2, counter);
    custom_assert(getPilotId("Pierre Gasly") == 0, counter);
    custom_assert(getPilotId("Valtteri Bottas") == 19, counter);
    return 1;
}
