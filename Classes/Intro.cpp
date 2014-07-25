//
//  Intro.cpp
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 21..
//
//

#include "Intro.h"
#include "GameMain.h"


CCScene* Intro::scene()
{
    CCScene *scene = CCScene::create();
    
    Intro *layer = Intro::create();
    
    scene -> addChild(layer);
    
    return scene;
}

bool Intro::init()
{
    if(!CCLayer::init())
    {
        return false;
    }
    //Logo 띄우기
    CCSprite* logo = new CCSprite;
    logo->initWithFile("Logo.png");
    CCSize winsize = CCDirector::sharedDirector()->getWinSize();
    logo->setPosition(ccp(winsize.width/2,(winsize.height*2/3)));
    this->addChild(logo);
    
    //Menu 생성
    CCLabelTTF *startLabel = CCLabelTTF::create("GAME START!","Marker Felt",35);
    CCMenuItemLabel *startMenuItem = CCMenuItemLabel::create(startLabel,this,menu_selector(Intro::StartGame));
    CCLabelTTF *exitLabel = CCLabelTTF::create("EXIT","Marker Felt",35);
    CCMenuItemLabel *exitMenuItem = CCMenuItemLabel::create(exitLabel,this, menu_selector(Intro::ExitGame));
    CCMenu *menu = CCMenu::create(startMenuItem,exitMenuItem,NULL);
    menu->setPosition(ccp(winsize.width/2,winsize.height/3));
    menu->alignItemsVerticallyWithPadding(50);
    this->addChild(menu);
    
    return true;
}

void Intro::StartGame()
{
    CCScene *gameScene = GameMain::scene();
    CCDirector::sharedDirector()->replaceScene(gameScene);
}

void Intro::ExitGame()
{
    CCDirector::sharedDirector()->end();
    exit(0);
}