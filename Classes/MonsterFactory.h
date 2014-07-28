//
//  MonsterFactory.h
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 24..
//
//
#pragma once
#include "cocos2d.h"
USING_NS_CC;

class MonsterFactory
{
private:
    CCNode* _parent;
    
public:
    virtual void Init();
    
};
