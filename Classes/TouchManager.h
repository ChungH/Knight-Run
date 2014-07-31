//
//  TouchManager.h
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 31..
//
//
#pragma once
#include "cocos2d.h"
#include <vector>
USING_NS_CC;


class TouchManager
{
public:
    enum TouchType {OneFingerDrag = 1 ,TwoFingersDrag, ThreeFingersDrag, Incorrect};
    
private:
    std::vector<CCPoint> _touchBegan;
    std::vector<CCPoint> _touchEnded;
    std::vector<CCPoint> _touchCombine;
    
public:
    TouchManager();
    ~TouchManager();
    
public:
    void AddtoTouchBegan(CCPoint touchPoint);
    void AddtoTouchEnded(CCPoint touchPoint);
    void CombineTouchEvent();
//    CCSprite* CallTouchEvent();
    void CallTouchEventTest();
    TouchType CheckTouchEvent();
};