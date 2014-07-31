//
//  TouchManager.cpp
//  Knight-Run
//
//  Created by LeeChungHee on 2014. 7. 31..
//
//

#include "TouchManager.h"

TouchManager::TouchManager()
{
    
}

TouchManager::~TouchManager()
{
    
}

void TouchManager::AddtoTouchBegan(CCPoint touchPoint)
{
    _touchBegan.push_back(touchPoint);
    CCLog("%f%f",_touchBegan.back().x,_touchBegan.back().y);
}

void TouchManager::AddtoTouchEnded(CCPoint touchPoint)
{
    _touchEnded.push_back(touchPoint);
    CCLog("%f%f",_touchEnded.back().x,_touchEnded.back().y);
}

void TouchManager::CombineTouchEvent()
{
    while (1)
    {
        if(_touchBegan.size() != _touchEnded.size())
        {
            _touchBegan.clear();
            _touchEnded.clear();
            _touchCombine.clear();
            return;
        }
        if(_touchBegan.empty())
        {
            return;
        }
        CCPoint tmpPoint = _touchBegan.back() - _touchEnded.back();
        _touchCombine.push_back( tmpPoint );
        _touchBegan.pop_back();
        _touchEnded.pop_back();
    }
}

TouchManager::TouchType TouchManager::CheckTouchEvent()
{
    if(_touchCombine.size() >= Incorrect)
    {
        return Incorrect;
    }
    return (TouchType)_touchCombine.size();
}

void TouchManager::CallTouchEventTest()
{
    TouchType EventType = CheckTouchEvent();
    switch (EventType)
    {
        case OneFingerDrag:
            CCLog("OneFingerDrag Call");
            break;
        case TwoFingersDrag:
            CCLog("TwoFingersDrag Call");
            break;
        case ThreeFingersDrag:
            CCLog("ThreeFingersDrag Call");
            break;
        default:
            break;
    }
}





