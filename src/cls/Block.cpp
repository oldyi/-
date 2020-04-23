/*
    created by 周鸿义 in 4/9
*/
#include "./head/Block.h"

Block::Block(){ //开始时默认无雷
    ifMine = false;
    ifShow = false;
    around = 0;
}

bool Block::getIfMine()const{
    return ifMine;
}

bool Block::getIfShow()const{
    return (ifShow);
}

void Block::setMine(){
    this->ifMine = true;
}

void Block::setIfShow(){
    this->ifShow = true;
}

int Block::getAround()const{
    return around;
}

void Block::setAround(int ar){
    around = ar;
}