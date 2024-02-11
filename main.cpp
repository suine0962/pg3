﻿#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <list>

int main()
{

    std::list<const char*> yamanoteStationName = {
        "Tokyo",
        "Kanda",
        "Akihabara",
        "Okachimachi",
        "Ueno",
        "Uguisudani",
        "Nippori",
        "Tabata",
        "Komagome",
        "Sugamo",
        "Otsuka",
        "Ikebukuro",
        "Mejiro",
        "Takadanobaba",
        "Shin-Okubo",
        "Shinjuku",
        "Yoyogi",
        "Harajuku",
        "Shibuya",
        "Ebisu",
        "Meguro",
        "Gotanda",
        "Osaki",
        "Shinagawa",
        "Tamachi",
        "Hamamatsucho",
        "Shimbashi",
        "Yurakucho",
    };

    std::cout << "1970年の山手線駅一覧" << std::endl;

    for (auto& name : yamanoteStationName) {
        std::cout << name << std::endl;
    }

    std::cout << "\n" << std::endl;

    auto findStationNameIterator = std::find(yamanoteStationName.begin(), yamanoteStationName.end(), "Nippori");
    findStationNameIterator++;
    yamanoteStationName.insert(findStationNameIterator, "Nishi-Nippori");

    std::cout << "2019年の山手線駅一覧" << std::endl;

    for (auto& name : yamanoteStationName) {
        std::cout << name << std::endl;
    }

    std::cout << "\n" << std::endl;

    findStationNameIterator = std::find(yamanoteStationName.begin(), yamanoteStationName.end(), "Shinagawa");
    findStationNameIterator++;
    findStationNameIterator = yamanoteStationName.insert(findStationNameIterator, "Takanawa Gateway");

    std::cout << "2022年の山手線駅一覧" << std::endl;

    for (auto& name : yamanoteStationName) {
        std::cout << name << std::endl;
    }

    return 0;
}