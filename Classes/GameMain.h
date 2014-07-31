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
#include "TouchManager.h"


USING_NS_CC;

class GameMain : public CCLayerColor
{
public:
    enum { Disable = 0, Enable};
    
private:
    Player*         _player;
    JumpButton*     _jumpbutton;
    CCSize          _winSize;
    TouchManager*   _touchManager;

    bool TouchCheckEnable = Enable;
public:
    GameMain();
    ~GameMain();

public:
    virtual bool init();
    static CCScene* scene();
    void menuCloseCallback(CCObject* pSender);
    void JumpEvent();
    
    virtual void registerWithTouchDispatcher(void);
    void ccTouchesBegan(CCSet* pTouches, CCEvent* pEvent);
    void ccTouchesMoved(CCSet* pTouches, CCEvent* pEvent);
    void ccTouchesEnded(CCSet* pTouches, CCEvent* pEvent);
    //CCSprite* CallTouchEvent();
    void CallTouchEventTest();
    
    CREATE_FUNC(GameMain);
};