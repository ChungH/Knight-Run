//
//  GameMain.cpp
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 21..
//
//

#include "GameMain.h"

GameMain::GameMain()
{
    _player = NULL;
    _jumpbutton = NULL;
    _winSize = CCDirector::sharedDirector()->getWinSize();
}

GameMain::~GameMain()
{
    
}

CCScene* GameMain::scene()
{
    CCScene*    scene = CCScene::create();
    
    GameMain*   layer = GameMain::create();
    
    scene -> addChild(layer);

    return scene;
}

bool GameMain::init()
{
    //화면세팅
    if(!CCLayerColor::initWithColor(ccc4(255,255,255,255)))
    {
        return false;
    }
    CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
    
    //종료메뉴
    CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
                                                          "CloseNormal.png",
                                                          "CloseSelected.png",
                                                          this,
                                                          menu_selector(GameMain::menuCloseCallback));
    
	pCloseItem->setPosition(ccp(origin.x + visibleSize.width - pCloseItem->getContentSize().width/2 ,
                                origin.y + pCloseItem->getContentSize().height/2));
    CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
    pMenu->setPosition(CCPointZero);
    this->addChild(pMenu, 1);
    
    //코드추가
    _player = new Player(this);
    _jumpbutton = new JumpButton(this,_player);
    CCPoint playerStartPoint(_winSize.width/8,_winSize.height/2);
    _player->Init(playerStartPoint);
    this->addChild(_jumpbutton->Init());
    this->setTouchEnabled(true);
    return true;
}

void GameMain::menuCloseCallback(CCObject* pSender)
{
#if (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT) || (CC_TARGET_PLATFORM == CC_PLATFORM_WP8)
	CCMessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
#else
    CCDirector::sharedDirector()->end();
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
#endif
    
}



void GameMain::ccTouchesBegan(CCSet* pTouches, CCEvent* pEvent)
{
    CCLog("1");
}
void GameMain::ccTouchesMoved(CCSet* pTouches, CCEvent* pEvent)
{
    CCLog("2");
}
void GameMain::ccTouchesEnded(CCSet* pTouches, CCEvent* pEvent)
{
    CCLog("3");
}