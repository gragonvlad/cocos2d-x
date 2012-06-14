#ifndef _CCB_CCBSELECTORRESOLVER_H_
#define _CCB_CCBSELECTORRESOLVER_H_

#include "cocos2d.h"

NS_CC_EXT_BEGIN

class CCBSelectorResolver {
    public:
        virtual cocos2d::SEL_MenuHandler onResolveCCBCCMenuSelector(CCObject * pTarget, CCString * pSelectorName) = 0;
        virtual cocos2d::extension::SEL_CCControlHandler onResolveCCBCCControlSelector(CCObject * pTarget, CCString * pSelectorName) = 0;
};

NS_CC_EXT_END

#endif
