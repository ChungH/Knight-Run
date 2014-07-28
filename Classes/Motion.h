//
//  Motion.h
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 28..
//
//

#pragma once
#include "cocos2d.h"

USING_NS_CC;

class Motion{
private:
    CCAction* _idleMotion;
    CCAction* _runMotion;
    CCAction* _deadMotion;
    CCAction* _jumpMotion;
    
public:
    Motion();
    ~Motion();
    
public:
    
    void SetIdleMotion();
    void SetRunMotion();
    void SetDeadMotion();
    void SetJumpMotion();
    void Init();
    
    CCAction* GetIdleMotion();
    CCAction* GetRunMotion();
    CCAction* GetDeadMotion();
    CCAction* GetJumpMotion();
    
};
