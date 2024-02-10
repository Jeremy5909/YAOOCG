//
// Created by Jeremy Eiser Herczeg on 2/8/24.
//

#include "Room.h"

void Room::AddObject(const Object& toAdd) {
    pObjects.push_back(toAdd);
}

Object* Room::FindObjectByName(const std::string& name) {
    for (auto& obj : pObjects) {
        if(obj.getName() == name) {
            return &obj;
        }
    }
    return nullptr;
}

const std::vector<Object> &Room::getObjects() const {
    return pObjects;
}

const std::string &Room::getName() const {
    return pName;
}

Room::Room(const std::string &pName) : pName(pName) {}
