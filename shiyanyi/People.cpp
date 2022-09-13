//
// Created by R on 2022/9/6.
//

#include "People.h"

People::People(int num,string name,int id,Date birth){
    People::num = num;
    People::name = name;
    People::id = id;
    People::birth = birth;
}
People::People(const People &people){
    num = people.num;
    name = people.name;
    id = people.id;
    birth = people.birth;
}

void People::peopleInput(int num,string name,int id,Date birth){
    People::num = num;
    People::name = name;
    People::id = id;
    People::birth = birth;
}
void People::display(){
    cout << "ÐòºÅ£º" << num << endl;
    cout << "ÐÕÃû£º" << name << endl;
    cout << "id£º" << id << endl;
    cout << "ÉúÈÕ£º" ;
    birth.display();
}

People::~People(){

}