//
//  JumpButton.cpp
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 24..
//
//

#include "JumpButton.h"

JumpButton::JumpButton(CCNode* parent,Player* player)
{
    this->_parent = parent;
    this->_player = player;
}

JumpButton::~JumpButton()
{
    
}

void JumpButton::Init()
{
    CCMenuItemImage* jump = CCMenuItemImage::create("JumpNormal.png","JumpSelected.png",_parent,menu_selector(JumpButton::SelectedButton));
    
    CCMenu* jumpbutton = CCMenu::create(jump,NULL);
    CCSize winSize = CCDirector::sharedDirector()->getWinSize();
    jumpbutton->setPosition(ccp((winSize.width*0.9),winSize.height/4));
    _parent->addChild(jumpbutton);
}

void JumpButton::SelectedButton()
{
    //여기서 에러남다
    Player* player = _player;
    
    player->RunMotion();
}