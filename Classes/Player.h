//
//  Player.h
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 21..
//
//
#pragma once
#include "cocos2d.h"
USING_NS_CC;

class Player {
private:
    CCSprite* _playerSprite;
    CCNode*   _parent;
    CCSize    _screenSize;
public:
    Player(CCNode* parent);
    ~Player();
    
public:
    bool Init(const CCPoint& startpoint);
    void IdleMotion();
    void RunMotion();
    void JumpMotion();

};