//
//  GameMain.h
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 21..
//
//
#pragma once
#include "cocos2d.h"
#include "Player.h"
#include "JumpButton.h"


USING_NS_CC;

class GameMain : public CCLayerColor
{
private:
    Player*         _player;
    CCSize          _winSize;
    JumpButton*     _jumpbutton;
    
public:
    GameMain();
    ~GameMain();

public:
    virtual bool init();
    static CCScene* scene();
    void menuCloseCallback(CCObject* pSender);
    void JumpEvent();
    
    void ccTouchesBegan(CCSet* pTouches, CCEvent* pEvent);
    void ccTouchesMoved(CCSet* pTouches, CCEvent* pEvent);
    void ccTouchesEnded(CCSet* pTouches, CCEvent* pEvent);
    
    CREATE_FUNC(GameMain);
};