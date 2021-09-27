#ifndef ASSIGNMENTTWO_PERSON_H
#define ASSIGNMENTTWO_PERSON_H

#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    int luck;
public:
    Person();
    Person(const string &name, int age, int luck);

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    int getLuck() const;

    void setLuck(int luck);
};


#endif //ASSIGNMENTTWO_PERSON_H
