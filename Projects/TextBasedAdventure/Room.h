#ifndef MY_HEADER_H
#define ROOM_H

enum Direction{
    North = 0,
    East = 1,
    South = 2,
    West = 3
};

class Room{
    public:
        Direction openDoors[4];
     
};

#endif