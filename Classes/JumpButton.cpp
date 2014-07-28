//
//  JumpButton.cpp
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 24..
//
//

#include "JumpButton.h"

JumpButton::JumpButton(CCNode* parent, Player* player)
{
    _parent = parent;
    _player = player;
}

JumpButton::~JumpButton()
{
    
}

CCMenu* JumpButton::Init()
{
    CCMenuItemImage* jump = CCMenuItemImage::create("JumpNormal.png","JumpSelected.png",(CCObject*)_player,menu_selector(Player::JumpButtonSelected));
    _jumpbutton = CCMenu::create(jump,NULL);
    CCSize winSize = CCDirector::sharedDirector()->getWinSize();
    _jumpbutton->setPosition(ccp((winSize.width*0.9),winSize.height/4));
    
    return _jumpbutton;
}
