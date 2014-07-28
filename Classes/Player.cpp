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
    _parent           =   parent;
    _screenSize       =   CCDirector::sharedDirector()->getWinSize();
    _motion           =   new Motion();
    
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
    _motion->Init();
    _parent->addChild(_playerSprite);

    IdleMotion();
    return true;
}
void Player::IdleMotion()
{
    _playerSprite->stopAllActions();
    _playerSprite->runAction(_motion->GetIdleMotion());
    
}
void Player::RunMotion()
{
    _playerSprite->stopAllActions();
    _playerSprite->runAction(_motion->GetRunMotion());
}

void Player::JumpMotion()
{
    CCLog("JumpMotion Selected");
    _playerSprite->stopAllActions();
    _playerSprite->runAction(_motion->GetJumpMotion());
}

void Player::DeadMotion()
{
    _playerSprite->stopAllActions();
    _playerSprite->runAction(_motion->GetDeadMotion());
}
void Player::JumpButtonSelected()
{
    this->RunMotion();
}




