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
    _playerSprite     =   new CCSprite;
    _parent     =   parent;
    _screenSize =   CCDirector::sharedDirector()->getWinSize();
    
}

Player::~Player()
{
    
}

bool Player::Init(const CCPoint& startpoint)
{
  
    if(_playerSprite->initWithFile("charactor.png") == false)
    {
        delete _playerSprite;
        return false;
    }
    _playerSprite->setPosition(startpoint);
    _playerSprite->setAnchorPoint(ccp(0.5f,0.5f));
    
    IdleMotion();
    return true;
}
void Player::IdleMotion()
{
    //    CCSpriteFrameCache* cache = CCSpriteFrameCache::sharedSpriteFrameCache();
    //    cache->addSpriteFramesWithFile("/Users/ChungH/Desktop/study/cocos2d-x-2.2.3/projects/Knight-Run/Resources/Charactor-align.plist");
    CCAnimation* animation = CCAnimation::create();
    animation->setDelayPerUnit(0.5f/4.0f);  //값이 클을수록 느림
    //    animation->addSpriteFrame(cache->spriteFrameByName("breath1"));
    //    animation->addSpriteFrame(cache->spriteFrameByName("breath2"));
    //    animation->addSpriteFrame(cache->spriteFrameByName("breath3"));
//    animation->addSpriteFrameWithFileName("breath1.png");
//    animation->addSpriteFrameWithFileName("breath2.png");
//    animation->addSpriteFrameWithFileName("breath3.png");
//    animation->addSpriteFrameWithFileName("breath2.png");
//    animation->addSpriteFrameWithFileName("breath1.png");
    
    animation->addSpriteFrameWithFileName("charactor_run1.png");
    animation->addSpriteFrameWithFileName("charactor_run2.png");
    animation->addSpriteFrameWithFileName("charactor_run3.png");
    animation->addSpriteFrameWithFileName("charactor_run4.png");
    animation->addSpriteFrameWithFileName("charactor_run5.png");
    animation->addSpriteFrameWithFileName("charactor_run6.png");
    animation->addSpriteFrameWithFileName("charactor_run7.png");
    animation->addSpriteFrameWithFileName("charactor_run8.png");
    animation->addSpriteFrameWithFileName("charactor_run9.png");
    animation->addSpriteFrameWithFileName("charactor_run10.png");
    animation->addSpriteFrameWithFileName("charactor_run11.png");
    animation->addSpriteFrameWithFileName("charactor_run12.png");
    animation->addSpriteFrameWithFileName("charactor_run13.png");
    CCAction* repeat = CCRepeatForever::create(CCAnimate::create(animation));
    _playerSprite->runAction(repeat);
    _parent->addChild(_playerSprite);
    
}
void Player::RunMotion()
{
    // 여기로 날아와서 하는데 스프라이트에 런액션때리려니 에러 찡
    _playerSprite->stopAllActions();
    CCAnimation* animation = CCAnimation::create();
    animation->setDelayPerUnit(0.5f/3.0f);
//
//    animation->addSpriteFrameWithFileName("charactor_run1.png");
//    animation->addSpriteFrameWithFileName("charactor_run2.png");
//    animation->addSpriteFrameWithFileName("charactor_run3.png");
//    animation->addSpriteFrameWithFileName("charactor_run4.png");
//    animation->addSpriteFrameWithFileName("charactor_run5.png");
//    animation->addSpriteFrameWithFileName("charactor_run6.png");
//    animation->addSpriteFrameWithFileName("charactor_run7.png");
//    animation->addSpriteFrameWithFileName("charactor_run8.png");
//    animation->addSpriteFrameWithFileName("charactor_run9.png");
//    animation->addSpriteFrameWithFileName("charactor_run10.png");
//    animation->addSpriteFrameWithFileName("charactor_run11.png");
//    animation->addSpriteFrameWithFileName("charactor_run12.png");
//    animation->addSpriteFrameWithFileName("charactor_run13.png");
    animation->addSpriteFrameWithFileName("breath1.png");
    animation->addSpriteFrameWithFileName("breath2.png");
    animation->addSpriteFrameWithFileName("breath3.png");
    animation->addSpriteFrameWithFileName("breath2.png");
    animation->addSpriteFrameWithFileName("breath1.png");


    _playerSprite->runAction(CCAnimate::create(animation));
}

void Player::JumpMotion()
{
    
}



