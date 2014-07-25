//
//  Intro.h
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 21..
//
//
#pragma once
#include <cocos2d.h>

USING_NS_CC;

class Intro : public cocos2d::CCLayer
{
public:
    virtual bool init();
    static CCScene* scene();
    
    void StartGame();
    void ExitGame();
    
    CREATE_FUNC(Intro);
};