//
//  Player.cpp
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 21..
//
//

#include "Player.h"
USING_NS_CC;

Player::Player(CCNode* parent)
{
    _player     =   new CCSprite;
    _parent     =   parent;
    _screenSize =   CCDirector::sharedDirector()->getWinSize();
    
}

Player::~Player()
{
    
}

bool Player::Init(const CCPoint& startpoint)
{
  
    if(_player->initWithFile("charactor.png") == false)
    {
        delete _player;
        return false;
    }
    _player->setPosition(startpoint);
    _player->setAnchorPoint(ccp(0.5f,0.5f));
//    CCSpriteFrameCache* cache = CCSpriteFrameCache::sharedSpriteFrameCache();
//    cache->addSpriteFramesWithFile("/Users/ChungH/Desktop/study/cocos2d-x-2.2.3/projects/Knight-Run/Resources/Charactor-align.plist");
    CCAnimation* animation = CCAnimation::create();
    animation->setDelayPerUnit(0.5f/3.0f);  //값이 클을수록 느림
//    animation->addSpriteFrame(cache->spriteFrameByName("breath1"));
//    animation->addSpriteFrame(cache->spriteFrameByName("breath2"));
//    animation->addSpriteFrame(cache->spriteFrameByName("breath3"));
    animation->addSpriteFrameWithFileName("breath1.png");
    animation->addSpriteFrameWithFileName("breath2.png");
    animation->addSpriteFrameWithFileName("breath3.png");
    animation->addSpriteFrameWithFileName("breath2.png");
    animation->addSpriteFrameWithFileName("breath1.png");
    CCAction* repeat = CCRepeatForever::create(CCAnimate::create(animation));
    _player->runAction(repeat);
    _parent->addChild(_player);
    return true;
}
bool Player::StartRun()
{
    return true;
}
bool Player::Jump()
{
    return true;
}

