//
//  Player.h
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 21..
//
//
#pragma once
#include "cocos2d.h"
#include "Motion.h"

USING_NS_CC;



class Player{

private:
    CCSprite*       _playerSprite;
    CCNode*         _parent;
    CCSize          _screenSize;
    Motion*         _motion;

    
    int             _playerHP;
    
public:
    Player(CCNode* parent);
    ~Player();
    
public:
    bool Init(const CCPoint& startpoint);
    void JumpButtonSelected();
    void IdleMotion();
    void RunMotion();
    void JumpMotion();
    void DeadMotion();

};

