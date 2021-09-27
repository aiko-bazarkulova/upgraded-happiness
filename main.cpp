#include <iostream>
#include <vector>
#include "Person.h"

using namespace std;

void changeLuck(Person &lhs, Person &rhs){
    int ths = lhs.getLuck();
    lhs.setLuck(rhs.getLuck());
    rhs.setLuck(ths);
}

int main() {

    // PART 1

    // task 1

    // create a vector and insert 5 random objects of Person



    srand(NULL);

    vector<Person> persons;

    persons.push_back(*new Person("Azamat", 10, rand() % 100));
    persons.push_back(*new Person("Maksat", 20, rand() % 100));
    persons.push_back(*new Person("Qazbek", 40, rand() % 100));
    persons.push_back(*new Person("Nurbek", 2, rand() % 100));
    persons.push_back(*new Person("Aiboolat", 18, rand() % 100));

    int max_length = persons[0].getLuck();
    Person person_max_length;

    for(const Person &cur_person : persons){
        if(cur_person.getLuck() > max_length){
            max_length = cur_person.getLuck();
            person_max_length = cur_person;
        }
    }
    cout << "Person with maximum length is: " << person_max_length.getName() << ". His luck is: " << person_max_length.getLuck() << "\n";

    // task 2
    // swap luck of two persons by function passing parameters by reference

    Person a = *new Person("Hello", 23, 0);
    Person b = *new Person("World", 56, 100);

    cout << "Old luck's: " << a.getLuck() << " " << b.getLuck() << "\n";

    swap(a, b);

    cout << "New luck's: " << a.getLuck() << " " << b.getLuck() << '\n';

    // task 3
    // Create Person dynamically

    Person *person = new Person("Example", 34, 75);

    // we created a pointer person which point to newly created object created in dynamic memory

    // after using it, when we don't need it anymore, we can free space using delete

    delete person;

    // and now if we try to use person, we get error, because we already deleted it.

}
