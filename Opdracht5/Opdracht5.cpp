#include <iostream>
#include "Bibliotheek.cpp"

int main()
{
    Bibliotheek* bTheek;
    bTheek = new Bibliotheek();

    Boek* b;
    b = new Boek("Clockwork Angel, Cassandra Claire");

    bTheek->AddBook(b);
    bTheek->ListBooks();

    delete bTheek;
    delete b;
}

