#ifndef BASEDATA_CARTOTEKA_H
#define BASEDATA_CARTOTEKA_H


#include <fstream>
#include <list>

using namespace std;

class Cartoteka {
private:
    string author; // автор
    string name; // название
    string publishing; // издательство
    string year; // год издания
    string section; // радел(спец. литература, хобби, хуеби)
    string avail; // наличие
    string valuation; // оценка
    static int pole;

public:
    void read(ifstream &in);

    void GenCard(list <Cartoteka> &lst);

    bool compare_my_class_na_easy_brat_function(Cartoteka &b);

    friend ostream &operator<<(ostream &os, const Cartoteka &o);

    void setAuthor(const string &author);

    void setName(const string &name);

    void setPublishing(const string &publishing);

    void setYear(const string &year);

    void setSection(const string &section);

    void setAvail(const string &avail);

    Cartoteka();

    void setValuation(const string &valuation);

    static int getPole();

    static void setPole(int pole);

};

#endif //BASEDATA_CARTOTEKA_H
