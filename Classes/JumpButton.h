//
//  JumpButton.h
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 24..
//
//
#pragma once
#include "cocos2d.h"
#include "Player.h"

USING_NS_CC;

class JumpButton
{
private:
    CCNode*   _parent;
    Player*   _player;
    
public:
    JumpButton(CCNode* parent,Player* player);
    ~JumpButton();
    
public:
    void Init();
    void SelectedButton();
};