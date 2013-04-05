#include "cccocos2dhelper.h"

namespace cocos2d {

/// static instance
CCCocos2DHelper* CCCocos2DHelper::instance = NULL;

CCCocos2DHelper::CCCocos2DHelper()
    : _sprite_debug_draw(2)
{
}

CCCocos2DHelper&
CCCocos2DHelper::sharedC2DHelper()
{
    if ( instance == NULL ) {
        instance = new CCCocos2DHelper;
    }
    return *instance;
}

void
CCCocos2DHelper::setSpriteRenderType(int var)
{
    this->_sprite_debug_draw = var;
    return;
}

int
CCCocos2DHelper::getSpriteRenderType()
{
    return this->_sprite_debug_draw;
}

}
