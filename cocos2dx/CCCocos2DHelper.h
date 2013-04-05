#ifndef CCCOCOS2DHELPER_H
#define CCCOCOS2DHELPER_H

#include "CCPlatformMacros.h"
#include "CCObject.h"

namespace cocos2d {

enum {
    RENDER_SPRITE_WITHOUT_FRAME = 0,
    RENDER_SPRITE_WITH_BOUNDBOX,
    RENDER_SPRITE_WITH_TEXTUREBOX,

};

class CCCocos2DHelper : public CCObject
{
    CC_PROPERTY( int, _sprite_debug_draw, SpriteRenderType );
public:
    CCCocos2DHelper();

    static CCCocos2DHelper& sharedC2DHelper();

protected:
    static CCCocos2DHelper* instance;

};

}

#endif // CCCOCOS2DHELPER_H
