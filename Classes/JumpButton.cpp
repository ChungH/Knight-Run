//
//  JumpButton.cpp
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 24..
//
//

#include "JumpButton.h"

JumpButton::JumpButton()
{
    _parent = NULL;
}

JumpButton::JumpButton(CCNode* parent)
{
    this->_parent = parent;
}

JumpButton::~JumpButton()
{
    
}

void JumpButton::Init()
{
    CCMenuItemImage* jumpbutton = CCMenuItemImage::create("JumpNormal.png","JumpSelected.png",_parent,menu_selector(JumpButton::SelectedButton));
    
    CCMenu* jump = CCMenu::create(jumpbutton,NULL);
    CCSize winSize = CCDirector::sharedDirector()->getWinSize();
    jump->setPosition(ccp((winSize.width*0.9),winSize.height/4));
    _parent->addChild(jump);
}

void JumpButton::SelectedButton()
{
    
}