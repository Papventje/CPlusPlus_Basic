#include <iostream>
#include "Object.cpp"

int main()
{
    Object* caravan;
    caravan = new Object("Caravan", "Grijs");

    Object* koffer;
    koffer = new Object("Koffer", "Grijs");

    Object* sokken;
    sokken = new Object("Sokken", "Grijs");

    koffer->AddObject(sokken);
    caravan->AddObject(koffer);

    caravan->ListObjects();
}
