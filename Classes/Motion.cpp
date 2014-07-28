//
//  Motion.cpp
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 28..
//
//

#include "Motion.h"

Motion::Motion()
{
    _idleMotion = new CCAction();
    _runMotion = new CCAction();
    _deadMotion = new CCAction();
    _jumpMotion = new CCAction();
}
Motion::~Motion()
{
    
}

void Motion::Init()
{
    this->SetIdleMotion();
    this->SetRunMotion();
    this->SetDeadMotion();
    this->SetJumpMotion();
}

void Motion::SetIdleMotion()
{
    CCAnimation* animation = CCAnimation::create();
    animation->setDelayPerUnit(0.5f/3.0f);
    
    animation->addSpriteFrameWithFileName("breath1.png");
    animation->addSpriteFrameWithFileName("breath2.png");
    animation->addSpriteFrameWithFileName("breath3.png");
    animation->addSpriteFrameWithFileName("breath2.png");
    animation->addSpriteFrameWithFileName("breath1.png");
    
    _idleMotion = CCRepeatForever::create(CCAnimate::create(animation));
    _idleMotion->retain();

}
void Motion::SetRunMotion()
{
    CCAnimation* animation = CCAnimation::create();
    animation->setDelayPerUnit(0.5f/4.0f);  //값이 클을수록 느림
    
    char tmp[100];
    for(int i=1; i<14; i++)
    {
        sprintf(tmp,"charactor_run%d.png",i);
        animation->addSpriteFrameWithFileName(tmp);
    }
    _runMotion = CCRepeatForever::create(CCAnimate::create(animation));
    _runMotion->retain();

}
void Motion::SetDeadMotion()
{
    
}
void Motion::SetJumpMotion()
{
    
}


CCAction* Motion::GetIdleMotion()
{
    return _idleMotion;
}
CCAction* Motion::GetRunMotion()
{
   return _runMotion;
}
CCAction* Motion::GetDeadMotion()
{
    return _deadMotion;
}
CCAction* Motion::GetJumpMotion()
{
    return _jumpMotion;
}