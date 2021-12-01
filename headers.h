#pragma once

struct coord
{
    int x;
    int y;
};

void scalpel(coord c1, coord c2)
{
    std:: cout << "Cut was made between " << c1.x << " " << c1.y << " and " << c2.x << " " << c2.y << std::endl;
}

void hemostat(coord c1)
{
    std::cout << "Clamp was made at " << c1.x << " " << c1.y << std::endl;
}

void tweezers(coord c1)
{
    std::cout << "Tweezers were used at " << c1.x << " " << c1.y << std::endl;
}

void suture(coord c1, coord c2)
{
    std:: cout << "Suture was made between " << c1.x << " " << c1.y << " and " << c2.x << " " << c2.y << std::endl;
}