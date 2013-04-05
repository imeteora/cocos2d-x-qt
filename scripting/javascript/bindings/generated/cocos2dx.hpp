#ifndef __cocos2dx_h__
#define __cocos2dx_h__

#include "cocos2d.h"
#include "ScriptingCore.h"
#include "cocos2d_specifics.hpp"

extern JSClass  *js_cocos2dx_CCAction_class;
extern JSObject *js_cocos2dx_CCAction_prototype;

JSBool js_cocos2dx_CCAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCAction_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_setOriginalTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_setTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_getOriginalTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_getTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_setTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_getTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAction_CCAction(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFiniteTimeAction_class;
extern JSObject *js_cocos2dx_CCFiniteTimeAction_prototype;

JSBool js_cocos2dx_CCFiniteTimeAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFiniteTimeAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFiniteTimeAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFiniteTimeAction_setDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFiniteTimeAction_getDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFiniteTimeAction_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFiniteTimeAction_CCFiniteTimeAction(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSpeed_class;
extern JSObject *js_cocos2dx_CCSpeed_prototype;

JSBool js_cocos2dx_CCSpeed_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSpeed_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSpeed(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSpeed_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_setInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_setSpeed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_getInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_getSpeed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpeed_CCSpeed(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFollow_class;
extern JSObject *js_cocos2dx_CCFollow_prototype;

JSBool js_cocos2dx_CCFollow_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFollow_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFollow(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFollow_initWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFollow_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFollow_setBoudarySet(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFollow_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFollow_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFollow_isBoundarySet(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFollow_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFollow_CCFollow(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTouch_class;
extern JSObject *js_cocos2dx_CCTouch_prototype;

JSBool js_cocos2dx_CCTouch_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTouch_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTouch(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTouch_getPreviousLocationInView(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTouch_getLocation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTouch_getDelta(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTouch_setTouchInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTouch_getID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTouch_getLocationInView(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTouch_getPreviousLocation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTouch_CCTouch(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSet_class;
extern JSObject *js_cocos2dx_CCSet_prototype;

JSBool js_cocos2dx_CCSet_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSet_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSet(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSet_count(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSet_addObject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSet_mutableCopy(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSet_anyObject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSet_removeAllObjects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSet_removeObject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSet_copy(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSet_containsObject(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCNode_class;
extern JSObject *js_cocos2dx_CCNode_prototype;

JSBool js_cocos2dx_CCNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCNode_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getScriptHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_convertToWorldSpaceAR(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_isIgnoreAnchorPointForPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setRotation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setZOrder(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_scheduleUpdateWithPriority(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_unregisterScriptHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_convertToWorldSpace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setSkewX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setSkewY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_convertTouchToNodeSpace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_removeAllChildrenWithCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getRotationX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getRotationY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_unscheduleUpdate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setParent(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_numberOfRunningActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_stopActionByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_reorderChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setPositionY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setPositionX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_isVisible(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_convertToNodeSpaceAR(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setShaderProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_scheduleUpdateWithPriorityLua(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getRotation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_resumeSchedulerAndActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getZOrder(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getAnchorPointInPoints(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_runAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_transform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setVertexZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setScheduler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_stopAllActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getSkewX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getSkewY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_ignoreAnchorPointForPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getActionByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setRotationX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setRotationY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getScheduler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getOrderOfArrival(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setActionManager(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_isRunning(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getParent(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getPositionY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getPositionX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_removeChildByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setVisible(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_pauseSchedulerAndActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getVertexZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode__setZOrder(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getChildByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setOrderOfArrival(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_cleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setGrid(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_boundingBox(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_transformAncestors(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setUserObject(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_registerScriptHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_removeFromParentAndCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_convertTouchToNodeSpaceAR(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_sortAllChildren(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_convertToNodeSpace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getCamera(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_setTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_scheduleUpdate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_stopAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_getActionManager(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCNode_CCNode(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTexture2D_class;
extern JSObject *js_cocos2dx_CCTexture2D_prototype;

JSBool js_cocos2dx_CCTexture2D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTexture2D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTexture2D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTexture2D_getShaderProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_getMaxT(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_stringForFormat(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_initWithImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_setShaderProgram(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_getMaxS(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_hasPremultipliedAlpha(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_getPixelsHigh(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_bitsPerPixelForFormat(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_getName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_initWithString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_setMaxT(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_drawInRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_getContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_setAliasTexParameters(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_setAntiAliasTexParameters(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_generateMipmap(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_getPixelFormat(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_getContentSizeInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_getPixelsWide(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_drawAtPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_hasMipmaps(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_initWithPVRFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_setMaxS(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_setDefaultAlphaPixelFormat(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_defaultAlphaPixelFormat(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_PVRImagesHavePremultipliedAlpha(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTexture2D_CCTexture2D(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSpriteFrame_class;
extern JSObject *js_cocos2dx_CCSpriteFrame_prototype;

JSBool js_cocos2dx_CCSpriteFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSpriteFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSpriteFrame(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSpriteFrame_setRotated(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_getOffset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_setRectInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_getRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_setOffsetInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_getRectInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_setOriginalSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_getOriginalSizeInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_setOriginalSizeInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_setOffset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_initWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_isRotated(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_initWithTextureFilename(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_setRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_getOffsetInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_getOriginalSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrame_createWithTexture(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCAnimationFrame_class;
extern JSObject *js_cocos2dx_CCAnimationFrame_prototype;

JSBool js_cocos2dx_CCAnimationFrame_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCAnimationFrame_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCAnimationFrame(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCAnimationFrame_setSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationFrame_getUserInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationFrame_setDelayUnits(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationFrame_getSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationFrame_getDelayUnits(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationFrame_setUserInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationFrame_initWithSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationFrame_CCAnimationFrame(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCAnimation_class;
extern JSObject *js_cocos2dx_CCAnimation_prototype;

JSBool js_cocos2dx_CCAnimation_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCAnimation_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCAnimation(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCAnimation_getLoops(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_setFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_getFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_addSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_setRestoreOriginalFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_setDelayPerUnit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_initWithAnimationFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_initWithSpriteFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_setLoops(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_addSpriteFrameWithFileName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_getTotalDelayUnits(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_getDelayPerUnit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_getRestoreOriginalFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_getDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_addSpriteFrameWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimation_CCAnimation(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCActionInterval_class;
extern JSObject *js_cocos2dx_CCActionInterval_prototype;

JSBool js_cocos2dx_CCActionInterval_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCActionInterval_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCActionInterval(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCActionInterval_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInterval_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInterval_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInterval_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInterval_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInterval_getElapsed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInterval_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInterval_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInterval_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSequence_class;
extern JSObject *js_cocos2dx_CCSequence_prototype;

JSBool js_cocos2dx_CCSequence_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSequence_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSequence(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSequence_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSequence_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSequence_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSequence_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSequence_initWithTwoActions(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCRepeat_class;
extern JSObject *js_cocos2dx_CCRepeat_prototype;

JSBool js_cocos2dx_CCRepeat_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCRepeat_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCRepeat(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCRepeat_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeat_setInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeat_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeat_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeat_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeat_getInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeat_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeat_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeat_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCRepeatForever_class;
extern JSObject *js_cocos2dx_CCRepeatForever_prototype;

JSBool js_cocos2dx_CCRepeatForever_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCRepeatForever_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCRepeatForever(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCRepeatForever_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeatForever_setInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeatForever_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeatForever_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeatForever_getInnerAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeatForever_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeatForever_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeatForever_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRepeatForever_CCRepeatForever(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSpawn_class;
extern JSObject *js_cocos2dx_CCSpawn_prototype;

JSBool js_cocos2dx_CCSpawn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSpawn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSpawn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSpawn_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpawn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpawn_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpawn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpawn_initWithTwoActions(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCRotateTo_class;
extern JSObject *js_cocos2dx_CCRotateTo_prototype;

JSBool js_cocos2dx_CCRotateTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCRotateTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCRotateTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCRotateTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRotateTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRotateTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRotateTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCRotateBy_class;
extern JSObject *js_cocos2dx_CCRotateBy_prototype;

JSBool js_cocos2dx_CCRotateBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCRotateBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCRotateBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCRotateBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRotateBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRotateBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRotateBy_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRotateBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCMoveBy_class;
extern JSObject *js_cocos2dx_CCMoveBy_prototype;

JSBool js_cocos2dx_CCMoveBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCMoveBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCMoveBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCMoveBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMoveBy_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMoveBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMoveBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMoveBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCMoveTo_class;
extern JSObject *js_cocos2dx_CCMoveTo_prototype;

JSBool js_cocos2dx_CCMoveTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCMoveTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCMoveTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCMoveTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMoveTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMoveTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSkewTo_class;
extern JSObject *js_cocos2dx_CCSkewTo_prototype;

JSBool js_cocos2dx_CCSkewTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSkewTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSkewTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSkewTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSkewTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSkewTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSkewTo_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSkewTo_CCSkewTo(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSkewBy_class;
extern JSObject *js_cocos2dx_CCSkewBy_prototype;

JSBool js_cocos2dx_CCSkewBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSkewBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSkewBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSkewBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSkewBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSkewBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSkewBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCJumpBy_class;
extern JSObject *js_cocos2dx_CCJumpBy_prototype;

JSBool js_cocos2dx_CCJumpBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCJumpBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCJumpBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCJumpBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpBy_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCJumpTo_class;
extern JSObject *js_cocos2dx_CCJumpTo_prototype;

JSBool js_cocos2dx_CCJumpTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCJumpTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCJumpTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCJumpTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCBezierBy_class;
extern JSObject *js_cocos2dx_CCBezierBy_prototype;

JSBool js_cocos2dx_CCBezierBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCBezierBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCBezierBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCBezierBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBezierBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBezierBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBezierBy_update(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCBezierTo_class;
extern JSObject *js_cocos2dx_CCBezierTo_prototype;

JSBool js_cocos2dx_CCBezierTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCBezierTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCBezierTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCBezierTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBezierTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCScaleTo_class;
extern JSObject *js_cocos2dx_CCScaleTo_prototype;

JSBool js_cocos2dx_CCScaleTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCScaleTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCScaleTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCScaleTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScaleTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScaleTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScaleTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCScaleBy_class;
extern JSObject *js_cocos2dx_CCScaleBy_prototype;

JSBool js_cocos2dx_CCScaleBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCScaleBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCScaleBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCScaleBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScaleBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScaleBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCBlink_class;
extern JSObject *js_cocos2dx_CCBlink_prototype;

JSBool js_cocos2dx_CCBlink_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCBlink_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCBlink(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCBlink_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBlink_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBlink_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBlink_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBlink_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBlink_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFadeIn_class;
extern JSObject *js_cocos2dx_CCFadeIn_prototype;

JSBool js_cocos2dx_CCFadeIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFadeIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFadeIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFadeIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFadeOut_class;
extern JSObject *js_cocos2dx_CCFadeOut_prototype;

JSBool js_cocos2dx_CCFadeOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFadeOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFadeOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFadeOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFadeTo_class;
extern JSObject *js_cocos2dx_CCFadeTo_prototype;

JSBool js_cocos2dx_CCFadeTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFadeTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFadeTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFadeTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTintTo_class;
extern JSObject *js_cocos2dx_CCTintTo_prototype;

JSBool js_cocos2dx_CCTintTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTintTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTintTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTintTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTintTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTintTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTintTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTintBy_class;
extern JSObject *js_cocos2dx_CCTintBy_prototype;

JSBool js_cocos2dx_CCTintBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTintBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTintBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTintBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTintBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTintBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTintBy_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTintBy_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCDelayTime_class;
extern JSObject *js_cocos2dx_CCDelayTime_prototype;

JSBool js_cocos2dx_CCDelayTime_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCDelayTime_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCDelayTime(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCDelayTime_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDelayTime_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDelayTime_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCAnimate_class;
extern JSObject *js_cocos2dx_CCAnimate_prototype;

JSBool js_cocos2dx_CCAnimate_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCAnimate_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCAnimate(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCAnimate_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimate_getAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimate_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimate_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimate_initWithAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimate_setAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimate_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimate_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimate_CCAnimate(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTargetedAction_class;
extern JSObject *js_cocos2dx_CCTargetedAction_prototype;

JSBool js_cocos2dx_CCTargetedAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTargetedAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTargetedAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTargetedAction_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTargetedAction_setForcedTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTargetedAction_initWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTargetedAction_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTargetedAction_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTargetedAction_getForcedTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTargetedAction_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTargetedAction_CCTargetedAction(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCActionCamera_class;
extern JSObject *js_cocos2dx_CCActionCamera_prototype;

JSBool js_cocos2dx_CCActionCamera_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCActionCamera_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCActionCamera(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCActionCamera_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionCamera_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionCamera_CCActionCamera(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCOrbitCamera_class;
extern JSObject *js_cocos2dx_CCOrbitCamera_prototype;

JSBool js_cocos2dx_CCOrbitCamera_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCOrbitCamera_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCOrbitCamera(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCOrbitCamera_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCOrbitCamera_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCOrbitCamera_sphericalRadius(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCOrbitCamera_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCOrbitCamera_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCOrbitCamera_CCOrbitCamera(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCActionManager_class;
extern JSObject *js_cocos2dx_CCActionManager_prototype;

JSBool js_cocos2dx_CCActionManager_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCActionManager_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCActionManager(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCActionManager_getActionByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_removeActionByTag(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_removeAllActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_addAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_resumeTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_pauseTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_removeAllActionsFromTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_resumeTargets(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_removeAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_numberOfRunningActionsInTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_pauseAllRunningActions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionManager_CCActionManager(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCActionEase_class;
extern JSObject *js_cocos2dx_CCActionEase_prototype;

JSBool js_cocos2dx_CCActionEase_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCActionEase_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCActionEase(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCActionEase_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionEase_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionEase_stop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionEase_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionEase_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionEase_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseRateAction_class;
extern JSObject *js_cocos2dx_CCEaseRateAction_prototype;

JSBool js_cocos2dx_CCEaseRateAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseRateAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseRateAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseRateAction_setRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseRateAction_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseRateAction_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseRateAction_getRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseRateAction_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseIn_class;
extern JSObject *js_cocos2dx_CCEaseIn_prototype;

JSBool js_cocos2dx_CCEaseIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseOut_class;
extern JSObject *js_cocos2dx_CCEaseOut_prototype;

JSBool js_cocos2dx_CCEaseOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseInOut_class;
extern JSObject *js_cocos2dx_CCEaseInOut_prototype;

JSBool js_cocos2dx_CCEaseInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseExponentialIn_class;
extern JSObject *js_cocos2dx_CCEaseExponentialIn_prototype;

JSBool js_cocos2dx_CCEaseExponentialIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseExponentialIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseExponentialIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseExponentialIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseExponentialIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseExponentialIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseExponentialOut_class;
extern JSObject *js_cocos2dx_CCEaseExponentialOut_prototype;

JSBool js_cocos2dx_CCEaseExponentialOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseExponentialOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseExponentialOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseExponentialOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseExponentialOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseExponentialOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseExponentialInOut_class;
extern JSObject *js_cocos2dx_CCEaseExponentialInOut_prototype;

JSBool js_cocos2dx_CCEaseExponentialInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseExponentialInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseExponentialInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseExponentialInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseExponentialInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseExponentialInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseSineIn_class;
extern JSObject *js_cocos2dx_CCEaseSineIn_prototype;

JSBool js_cocos2dx_CCEaseSineIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseSineIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseSineIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseSineIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseSineIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseSineIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseSineOut_class;
extern JSObject *js_cocos2dx_CCEaseSineOut_prototype;

JSBool js_cocos2dx_CCEaseSineOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseSineOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseSineOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseSineOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseSineOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseSineOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseSineInOut_class;
extern JSObject *js_cocos2dx_CCEaseSineInOut_prototype;

JSBool js_cocos2dx_CCEaseSineInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseSineInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseSineInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseSineInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseSineInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseSineInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseElastic_class;
extern JSObject *js_cocos2dx_CCEaseElastic_prototype;

JSBool js_cocos2dx_CCEaseElastic_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseElastic_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseElastic(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseElastic_setPeriod(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseElastic_initWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseElastic_getPeriod(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseElastic_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseElastic_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseElasticIn_class;
extern JSObject *js_cocos2dx_CCEaseElasticIn_prototype;

JSBool js_cocos2dx_CCEaseElasticIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseElasticIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseElasticIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseElasticIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseElasticIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseElasticIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseElasticOut_class;
extern JSObject *js_cocos2dx_CCEaseElasticOut_prototype;

JSBool js_cocos2dx_CCEaseElasticOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseElasticOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseElasticOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseElasticOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseElasticOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseElasticOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseElasticInOut_class;
extern JSObject *js_cocos2dx_CCEaseElasticInOut_prototype;

JSBool js_cocos2dx_CCEaseElasticInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseElasticInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseElasticInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseElasticInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseElasticInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseElasticInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseBounce_class;
extern JSObject *js_cocos2dx_CCEaseBounce_prototype;

JSBool js_cocos2dx_CCEaseBounce_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseBounce_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseBounce(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseBounce_bounceTime(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBounce_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBounce_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseBounceIn_class;
extern JSObject *js_cocos2dx_CCEaseBounceIn_prototype;

JSBool js_cocos2dx_CCEaseBounceIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseBounceIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseBounceIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseBounceIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBounceIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBounceIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseBounceOut_class;
extern JSObject *js_cocos2dx_CCEaseBounceOut_prototype;

JSBool js_cocos2dx_CCEaseBounceOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseBounceOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseBounceOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseBounceOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBounceOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBounceOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseBounceInOut_class;
extern JSObject *js_cocos2dx_CCEaseBounceInOut_prototype;

JSBool js_cocos2dx_CCEaseBounceInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseBounceInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseBounceInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseBounceInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBounceInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBounceInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseBackIn_class;
extern JSObject *js_cocos2dx_CCEaseBackIn_prototype;

JSBool js_cocos2dx_CCEaseBackIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseBackIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseBackIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseBackIn_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBackIn_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBackIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseBackOut_class;
extern JSObject *js_cocos2dx_CCEaseBackOut_prototype;

JSBool js_cocos2dx_CCEaseBackOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseBackOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseBackOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseBackOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBackOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBackOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCEaseBackInOut_class;
extern JSObject *js_cocos2dx_CCEaseBackInOut_prototype;

JSBool js_cocos2dx_CCEaseBackInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCEaseBackInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCEaseBackInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCEaseBackInOut_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBackInOut_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCEaseBackInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCActionInstant_class;
extern JSObject *js_cocos2dx_CCActionInstant_prototype;

JSBool js_cocos2dx_CCActionInstant_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCActionInstant_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCActionInstant(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCActionInstant_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInstant_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInstant_step(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInstant_isDone(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionInstant_CCActionInstant(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCShow_class;
extern JSObject *js_cocos2dx_CCShow_prototype;

JSBool js_cocos2dx_CCShow_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCShow_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCShow(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCShow_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShow_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShow_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShow_CCShow(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCHide_class;
extern JSObject *js_cocos2dx_CCHide_prototype;

JSBool js_cocos2dx_CCHide_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCHide_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCHide(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCHide_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCHide_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCHide_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCHide_CCHide(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCToggleVisibility_class;
extern JSObject *js_cocos2dx_CCToggleVisibility_prototype;

JSBool js_cocos2dx_CCToggleVisibility_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCToggleVisibility_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCToggleVisibility(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCToggleVisibility_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCToggleVisibility_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCToggleVisibility_CCToggleVisibility(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFlipX_class;
extern JSObject *js_cocos2dx_CCFlipX_prototype;

JSBool js_cocos2dx_CCFlipX_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFlipX_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFlipX(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFlipX_initWithFlipX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipX_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipX_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipX_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipX_CCFlipX(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFlipY_class;
extern JSObject *js_cocos2dx_CCFlipY_prototype;

JSBool js_cocos2dx_CCFlipY_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFlipY_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFlipY(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFlipY_initWithFlipY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipY_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipY_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipY_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipY_CCFlipY(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCPlace_class;
extern JSObject *js_cocos2dx_CCPlace_prototype;

JSBool js_cocos2dx_CCPlace_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCPlace_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCPlace(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCPlace_initWithPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCPlace_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCPlace_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCPlace_CCPlace(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCCallFunc_class;
extern JSObject *js_cocos2dx_CCCallFunc_prototype;

JSBool js_cocos2dx_CCCallFunc_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCCallFunc_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCCallFunc(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCCallFunc_execute(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCallFunc_initWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCallFunc_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCallFunc_getTargetCallback(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCallFunc_getScriptHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCallFunc_setTargetCallback(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCallFunc_CCCallFunc(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCGridAction_class;
extern JSObject *js_cocos2dx_CCGridAction_prototype;

JSBool js_cocos2dx_CCGridAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCGridAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCGridAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCGridAction_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGridAction_getGrid(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGridAction_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGridAction_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGridAction_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCGrid3DAction_class;
extern JSObject *js_cocos2dx_CCGrid3DAction_prototype;

JSBool js_cocos2dx_CCGrid3DAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCGrid3DAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCGrid3DAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCGrid3DAction_setVertex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGrid3DAction_getGrid(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGrid3DAction_vertex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGrid3DAction_originalVertex(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTiledGrid3DAction_class;
extern JSObject *js_cocos2dx_CCTiledGrid3DAction_prototype;

JSBool js_cocos2dx_CCTiledGrid3DAction_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTiledGrid3DAction_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTiledGrid3DAction(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTiledGrid3DAction_tile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTiledGrid3DAction_setTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTiledGrid3DAction_originalTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTiledGrid3DAction_getGrid(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCWaves3D_class;
extern JSObject *js_cocos2dx_CCWaves3D_prototype;

JSBool js_cocos2dx_CCWaves3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCWaves3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCWaves3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCWaves3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves3D_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves3D_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves3D_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves3D_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFlipX3D_class;
extern JSObject *js_cocos2dx_CCFlipX3D_prototype;

JSBool js_cocos2dx_CCFlipX3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFlipX3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFlipX3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFlipX3D_initWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipX3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipX3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipX3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFlipY3D_class;
extern JSObject *js_cocos2dx_CCFlipY3D_prototype;

JSBool js_cocos2dx_CCFlipY3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFlipY3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFlipY3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFlipY3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFlipY3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCLens3D_class;
extern JSObject *js_cocos2dx_CCLens3D_prototype;

JSBool js_cocos2dx_CCLens3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCLens3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCLens3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCLens3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLens3D_setLensEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLens3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLens3D_getLensEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLens3D_setPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLens3D_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLens3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCRipple3D_class;
extern JSObject *js_cocos2dx_CCRipple3D_prototype;

JSBool js_cocos2dx_CCRipple3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCRipple3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCRipple3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCRipple3D_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRipple3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRipple3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRipple3D_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRipple3D_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRipple3D_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRipple3D_setPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRipple3D_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRipple3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCShaky3D_class;
extern JSObject *js_cocos2dx_CCShaky3D_prototype;

JSBool js_cocos2dx_CCShaky3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCShaky3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCShaky3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCShaky3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShaky3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShaky3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCLiquid_class;
extern JSObject *js_cocos2dx_CCLiquid_prototype;

JSBool js_cocos2dx_CCLiquid_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCLiquid_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCLiquid(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCLiquid_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLiquid_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLiquid_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLiquid_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLiquid_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLiquid_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLiquid_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCWaves_class;
extern JSObject *js_cocos2dx_CCWaves_prototype;

JSBool js_cocos2dx_CCWaves_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCWaves_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCWaves(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCWaves_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWaves_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTwirl_class;
extern JSObject *js_cocos2dx_CCTwirl_prototype;

JSBool js_cocos2dx_CCTwirl_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTwirl_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTwirl(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTwirl_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTwirl_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTwirl_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTwirl_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTwirl_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTwirl_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTwirl_setPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTwirl_getPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTwirl_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCPageTurn3D_class;
extern JSObject *js_cocos2dx_CCPageTurn3D_prototype;

JSBool js_cocos2dx_CCPageTurn3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCPageTurn3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCPageTurn3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCPageTurn3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCPageTurn3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCProgressTo_class;
extern JSObject *js_cocos2dx_CCProgressTo_prototype;

JSBool js_cocos2dx_CCProgressTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCProgressTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCProgressTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCProgressTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCProgressFromTo_class;
extern JSObject *js_cocos2dx_CCProgressFromTo_prototype;

JSBool js_cocos2dx_CCProgressFromTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCProgressFromTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCProgressFromTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCProgressFromTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressFromTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressFromTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressFromTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressFromTo_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCShakyTiles3D_class;
extern JSObject *js_cocos2dx_CCShakyTiles3D_prototype;

JSBool js_cocos2dx_CCShakyTiles3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCShakyTiles3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCShakyTiles3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCShakyTiles3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShakyTiles3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShakyTiles3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCShatteredTiles3D_class;
extern JSObject *js_cocos2dx_CCShatteredTiles3D_prototype;

JSBool js_cocos2dx_CCShatteredTiles3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCShatteredTiles3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCShatteredTiles3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCShatteredTiles3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShatteredTiles3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShatteredTiles3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCShuffleTiles_class;
extern JSObject *js_cocos2dx_CCShuffleTiles_prototype;

JSBool js_cocos2dx_CCShuffleTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCShuffleTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCShuffleTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCShuffleTiles_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShuffleTiles_placeTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShuffleTiles_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShuffleTiles_getDelta(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShuffleTiles_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShuffleTiles_shuffle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCShuffleTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFadeOutTRTiles_class;
extern JSObject *js_cocos2dx_CCFadeOutTRTiles_prototype;

JSBool js_cocos2dx_CCFadeOutTRTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFadeOutTRTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFadeOutTRTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFadeOutTRTiles_turnOnTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOutTRTiles_turnOffTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOutTRTiles_transformTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOutTRTiles_testFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOutTRTiles_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOutTRTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFadeOutBLTiles_class;
extern JSObject *js_cocos2dx_CCFadeOutBLTiles_prototype;

JSBool js_cocos2dx_CCFadeOutBLTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFadeOutBLTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFadeOutBLTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFadeOutBLTiles_testFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOutBLTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFadeOutUpTiles_class;
extern JSObject *js_cocos2dx_CCFadeOutUpTiles_prototype;

JSBool js_cocos2dx_CCFadeOutUpTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFadeOutUpTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFadeOutUpTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFadeOutUpTiles_transformTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOutUpTiles_testFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOutUpTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFadeOutDownTiles_class;
extern JSObject *js_cocos2dx_CCFadeOutDownTiles_prototype;

JSBool js_cocos2dx_CCFadeOutDownTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFadeOutDownTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFadeOutDownTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFadeOutDownTiles_testFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFadeOutDownTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTurnOffTiles_class;
extern JSObject *js_cocos2dx_CCTurnOffTiles_prototype;

JSBool js_cocos2dx_CCTurnOffTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTurnOffTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTurnOffTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTurnOffTiles_turnOnTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTurnOffTiles_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTurnOffTiles_turnOffTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTurnOffTiles_shuffle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTurnOffTiles_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTurnOffTiles_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTurnOffTiles_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCWavesTiles3D_class;
extern JSObject *js_cocos2dx_CCWavesTiles3D_prototype;

JSBool js_cocos2dx_CCWavesTiles3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCWavesTiles3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCWavesTiles3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCWavesTiles3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWavesTiles3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWavesTiles3D_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWavesTiles3D_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWavesTiles3D_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWavesTiles3D_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCWavesTiles3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCJumpTiles3D_class;
extern JSObject *js_cocos2dx_CCJumpTiles3D_prototype;

JSBool js_cocos2dx_CCJumpTiles3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCJumpTiles3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCJumpTiles3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCJumpTiles3D_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpTiles3D_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpTiles3D_getAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpTiles3D_setAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpTiles3D_getAmplitude(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpTiles3D_setAmplitudeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCJumpTiles3D_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSplitRows_class;
extern JSObject *js_cocos2dx_CCSplitRows_prototype;

JSBool js_cocos2dx_CCSplitRows_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSplitRows_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSplitRows(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSplitRows_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSplitRows_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSplitRows_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSplitRows_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSplitCols_class;
extern JSObject *js_cocos2dx_CCSplitCols_prototype;

JSBool js_cocos2dx_CCSplitCols_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSplitCols_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSplitCols(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSplitCols_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSplitCols_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSplitCols_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSplitCols_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCActionTween_class;
extern JSObject *js_cocos2dx_CCActionTween_prototype;

JSBool js_cocos2dx_CCActionTween_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCActionTween_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCActionTween(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCActionTween_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionTween_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionTween_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionTween_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCActionTween_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCCardinalSplineTo_class;
extern JSObject *js_cocos2dx_CCCardinalSplineTo_prototype;

JSBool js_cocos2dx_CCCardinalSplineTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCCardinalSplineTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCCardinalSplineTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCCardinalSplineTo_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCardinalSplineTo_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCardinalSplineTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCardinalSplineTo_getPoints(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCardinalSplineTo_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCardinalSplineTo_updatePosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCardinalSplineTo_CCCardinalSplineTo(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCCardinalSplineBy_class;
extern JSObject *js_cocos2dx_CCCardinalSplineBy_prototype;

JSBool js_cocos2dx_CCCardinalSplineBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCCardinalSplineBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCCardinalSplineBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCCardinalSplineBy_startWithTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCardinalSplineBy_updatePosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCardinalSplineBy_reverse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCardinalSplineBy_CCCardinalSplineBy(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCCatmullRomTo_class;
extern JSObject *js_cocos2dx_CCCatmullRomTo_prototype;

JSBool js_cocos2dx_CCCatmullRomTo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCCatmullRomTo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCCatmullRomTo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCCatmullRomTo_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCCatmullRomBy_class;
extern JSObject *js_cocos2dx_CCCatmullRomBy_prototype;

JSBool js_cocos2dx_CCCatmullRomBy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCCatmullRomBy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCCatmullRomBy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCCatmullRomBy_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCAtlasNode_class;
extern JSObject *js_cocos2dx_CCAtlasNode_prototype;

JSBool js_cocos2dx_CCAtlasNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCAtlasNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCAtlasNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCAtlasNode_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_setTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_getTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_getQuadsToDraw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_updateAtlasValues(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_initWithTileFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_setQuadsToDraw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAtlasNode_CCAtlasNode(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCDrawNode_class;
extern JSObject *js_cocos2dx_CCDrawNode_prototype;

JSBool js_cocos2dx_CCDrawNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCDrawNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCDrawNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCDrawNode_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDrawNode_clear(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDrawNode_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDrawNode_drawDot(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDrawNode_drawSegment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDrawNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDrawNode_CCDrawNode(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCCamera_class;
extern JSObject *js_cocos2dx_CCCamera_prototype;

JSBool js_cocos2dx_CCCamera_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCCamera_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCCamera(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCCamera_locate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_restore(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_setUpXYZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_setCenterXYZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_setEyeXYZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_getCenterXYZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_getEyeXYZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_isDirty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_getUpXYZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_setDirty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_getZEye(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCCamera_CCCamera(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSprite_class;
extern JSObject *js_cocos2dx_CCSprite_prototype;

JSBool js_cocos2dx_CCSprite_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSprite_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSprite(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSprite_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_isFlipX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setDisplayFrameWithAnimationName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setRotationY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_getBatchNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_isTextureRectRotated(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setVertexZ(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_getTextureRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setTextureRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_initWithSpriteFrameName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_isFrameDisplayed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_getAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setDisplayFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_getOffsetPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setBatchNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setRotationX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_initWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setFlipY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setFlipX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_removeAllChildrenWithCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_sortAllChildren(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setRotation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setDirty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_isDirty(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_reorderChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_ignoreAnchorPointForPosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_initWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_getTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_initWithSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_updateTransform(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_isFlipY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setVertexRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setSkewX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setSkewY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_setVisible(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_createWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_createWithSpriteFrameName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_createWithSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSprite_CCSprite(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCLabelTTF_class;
extern JSObject *js_cocos2dx_CCLabelTTF_prototype;

JSBool js_cocos2dx_CCLabelTTF_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCLabelTTF_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCLabelTTF(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCLabelTTF_setFontName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_setDimensions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_getFontSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_getString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_setVerticalAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_getFontName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_setString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_initWithString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_getDimensions(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_setFontSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_setHorizontalAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_getVerticalAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_getHorizontalAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_node(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelTTF_CCLabelTTF(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCDirector_class;
extern JSObject *js_cocos2dx_CCDirector_prototype;

JSBool js_cocos2dx_CCDirector_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCDirector_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCDirector(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCDirector_pause(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setDelegate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setContentScaleFactor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getContentScaleFactor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getWinSizeInPixels(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setKeypadDispatcher(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setActionManager(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setAlphaBlending(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_popToRootScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getNotificationNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getWinSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_end(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_isSendCleanupToScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getVisibleOrigin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_mainLoop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setDepthTest(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getSecondsPerFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_convertToUI(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setAccelerometer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setScheduler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_startAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getRunningScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_stopAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setGLDefaultValues(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_resume(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setTouchDispatcher(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_isNextDeltaTimeZero(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getDelegate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setOpenGLView(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_convertToGL(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_purgeCachedData(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getTotalFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_runWithScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setNotificationNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_drawScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_popScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_isDisplayStats(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setProjection(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getZEye(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setNextDeltaTimeZero(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getVisibleSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getScheduler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_pushScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getClassTypeInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getAnimationInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_isPaused(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setDisplayStats(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_replaceScene(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_setAnimationInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_getActionManager(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCDirector_sharedDirector(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCGrid3D_class;
extern JSObject *js_cocos2dx_CCGrid3D_prototype;

JSBool js_cocos2dx_CCGrid3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCGrid3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCGrid3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCGrid3D_calculateVertexPoints(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGrid3D_setVertex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGrid3D_reuse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGrid3D_vertex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGrid3D_blit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGrid3D_originalVertex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGrid3D_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCGrid3D_CCGrid3D(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTiledGrid3D_class;
extern JSObject *js_cocos2dx_CCTiledGrid3D_prototype;

JSBool js_cocos2dx_CCTiledGrid3D_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTiledGrid3D_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTiledGrid3D(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTiledGrid3D_calculateVertexPoints(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTiledGrid3D_reuse(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTiledGrid3D_originalTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTiledGrid3D_tile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTiledGrid3D_setTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTiledGrid3D_blit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTiledGrid3D_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTiledGrid3D_CCTiledGrid3D(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCLabelAtlas_class;
extern JSObject *js_cocos2dx_CCLabelAtlas_prototype;

JSBool js_cocos2dx_CCLabelAtlas_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCLabelAtlas_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCLabelAtlas(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCLabelAtlas_setString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelAtlas_initWithString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelAtlas_updateAtlasValues(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelAtlas_getString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelAtlas_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelAtlas_CCLabelAtlas(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSpriteBatchNode_class;
extern JSObject *js_cocos2dx_CCSpriteBatchNode_prototype;

JSBool js_cocos2dx_CCSpriteBatchNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSpriteBatchNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSpriteBatchNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSpriteBatchNode_appendChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_reorderBatch(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_removeChildAtIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_removeSpriteFromAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_atlasIndexForChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_increaseAtlasCapacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_insertChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_lowestAtlasIndexInChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_initWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_setTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_removeAllChildrenWithCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_sortAllChildren(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_reorderChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_initWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_rebuildIndexInOrder(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_getTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_getDescendants(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_highestAtlasIndexInChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteBatchNode_createWithTexture(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCLabelBMFont_class;
extern JSObject *js_cocos2dx_CCLabelBMFont_prototype;

JSBool js_cocos2dx_CCLabelBMFont_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCLabelBMFont_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCLabelBMFont(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCLabelBMFont_setAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_createFontChars(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_getString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_getFntFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_updateLabel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setWidth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_initWithString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setFntFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setLineBreakWithoutSpace(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_updateString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setCString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_setAlignment(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_purgeCachedData(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLabelBMFont_CCLabelBMFont(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCLayer_class;
extern JSObject *js_cocos2dx_CCLayer_prototype;

JSBool js_cocos2dx_CCLayer_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCLayer_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCLayer(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCLayer_unregisterScriptTouchHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_keyBackClicked(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_ccTouchBegan(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_setAccelerometerInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_ccTouchesCancelled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_unregisterScriptAccelerateHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_ccTouchesMoved(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_registerScriptAccelerateHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_getTouchMode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_setAccelerometerEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_isTouchEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_getScriptAccelerateHandlerEntry(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_getScriptKeypadHandlerEntry(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_ccTouchMoved(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_setTouchEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_unregisterScriptKeypadHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_isKeypadEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_ccTouchesEnded(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_setTouchMode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_isAccelerometerEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_ccTouchEnded(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_registerScriptTouchHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_ccTouchCancelled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_getScriptTouchHandlerEntry(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_ccTouchesBegan(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_setTouchPriority(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_getTouchPriority(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_setKeypadEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_registerWithTouchDispatcher(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_keyMenuClicked(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_registerScriptKeypadHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayer_CCLayer(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCLayerColor_class;
extern JSObject *js_cocos2dx_CCLayerColor_prototype;

JSBool js_cocos2dx_CCLayerColor_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCLayerColor_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCLayerColor(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCLayerColor_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_changeWidthAndHeight(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_initWithColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_changeWidth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_setContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_changeHeight(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_node(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerColor_CCLayerColor(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCLayerGradient_class;
extern JSObject *js_cocos2dx_CCLayerGradient_prototype;

JSBool js_cocos2dx_CCLayerGradient_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCLayerGradient_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCLayerGradient(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCLayerGradient_getStartColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_isCompressedInterpolation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_getStartOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_setVector(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_setStartOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_setCompressedInterpolation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_setEndOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_getVector(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_initWithColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_setEndColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_getEndColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_getEndOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_setStartColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_node(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerGradient_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCLayerMultiplex_class;
extern JSObject *js_cocos2dx_CCLayerMultiplex_prototype;

JSBool js_cocos2dx_CCLayerMultiplex_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCLayerMultiplex_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCLayerMultiplex(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCLayerMultiplex_initWithArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerMultiplex_switchToAndReleaseMe(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerMultiplex_addLayer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerMultiplex_switchTo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerMultiplex_node(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCLayerMultiplex_CCLayerMultiplex(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCScene_class;
extern JSObject *js_cocos2dx_CCScene_prototype;

JSBool js_cocos2dx_CCScene_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCScene_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCScene(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCScene_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScene_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScene_CCScene(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionEaseScene_class;
extern JSObject *js_cocos2dx_CCTransitionEaseScene_prototype;

JSBool js_cocos2dx_CCTransitionEaseScene_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionEaseScene_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionEaseScene(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionEaseScene_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionScene_class;
extern JSObject *js_cocos2dx_CCTransitionScene_prototype;

JSBool js_cocos2dx_CCTransitionScene_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionScene_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionScene(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionScene_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionScene_finish(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionScene_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionScene_cleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionScene_hideOutShowIn(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionScene_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionScene_CCTransitionScene(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionSceneOriented_class;
extern JSObject *js_cocos2dx_CCTransitionSceneOriented_prototype;

JSBool js_cocos2dx_CCTransitionSceneOriented_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionSceneOriented_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionSceneOriented(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionSceneOriented_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSceneOriented_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSceneOriented_CCTransitionSceneOriented(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionRotoZoom_class;
extern JSObject *js_cocos2dx_CCTransitionRotoZoom_prototype;

JSBool js_cocos2dx_CCTransitionRotoZoom_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionRotoZoom_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionRotoZoom(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionRotoZoom_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionRotoZoom_CCTransitionRotoZoom(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionJumpZoom_class;
extern JSObject *js_cocos2dx_CCTransitionJumpZoom_prototype;

JSBool js_cocos2dx_CCTransitionJumpZoom_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionJumpZoom_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionJumpZoom(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionJumpZoom_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionJumpZoom_CCTransitionJumpZoom(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionMoveInL_class;
extern JSObject *js_cocos2dx_CCTransitionMoveInL_prototype;

JSBool js_cocos2dx_CCTransitionMoveInL_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionMoveInL_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionMoveInL(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionMoveInL_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionMoveInL_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionMoveInL_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionMoveInL_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionMoveInL_CCTransitionMoveInL(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionMoveInR_class;
extern JSObject *js_cocos2dx_CCTransitionMoveInR_prototype;

JSBool js_cocos2dx_CCTransitionMoveInR_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionMoveInR_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionMoveInR(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionMoveInR_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionMoveInR_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionMoveInR_CCTransitionMoveInR(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionMoveInT_class;
extern JSObject *js_cocos2dx_CCTransitionMoveInT_prototype;

JSBool js_cocos2dx_CCTransitionMoveInT_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionMoveInT_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionMoveInT(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionMoveInT_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionMoveInT_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionMoveInT_CCTransitionMoveInT(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionMoveInB_class;
extern JSObject *js_cocos2dx_CCTransitionMoveInB_prototype;

JSBool js_cocos2dx_CCTransitionMoveInB_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionMoveInB_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionMoveInB(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionMoveInB_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionMoveInB_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionMoveInB_CCTransitionMoveInB(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionSlideInL_class;
extern JSObject *js_cocos2dx_CCTransitionSlideInL_prototype;

JSBool js_cocos2dx_CCTransitionSlideInL_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionSlideInL_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionSlideInL(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionSlideInL_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInL_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInL_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInL_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInL_CCTransitionSlideInL(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionSlideInR_class;
extern JSObject *js_cocos2dx_CCTransitionSlideInR_prototype;

JSBool js_cocos2dx_CCTransitionSlideInR_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionSlideInR_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionSlideInR(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionSlideInR_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInR_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInR_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInR_CCTransitionSlideInR(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionSlideInB_class;
extern JSObject *js_cocos2dx_CCTransitionSlideInB_prototype;

JSBool js_cocos2dx_CCTransitionSlideInB_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionSlideInB_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionSlideInB(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionSlideInB_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInB_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInB_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInB_CCTransitionSlideInB(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionSlideInT_class;
extern JSObject *js_cocos2dx_CCTransitionSlideInT_prototype;

JSBool js_cocos2dx_CCTransitionSlideInT_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionSlideInT_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionSlideInT(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionSlideInT_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInT_initScenes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInT_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSlideInT_CCTransitionSlideInT(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionShrinkGrow_class;
extern JSObject *js_cocos2dx_CCTransitionShrinkGrow_prototype;

JSBool js_cocos2dx_CCTransitionShrinkGrow_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionShrinkGrow_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionShrinkGrow(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionShrinkGrow_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionShrinkGrow_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionShrinkGrow_CCTransitionShrinkGrow(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionFlipX_class;
extern JSObject *js_cocos2dx_CCTransitionFlipX_prototype;

JSBool js_cocos2dx_CCTransitionFlipX_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionFlipX_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionFlipX(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionFlipX_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFlipX_CCTransitionFlipX(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionFlipY_class;
extern JSObject *js_cocos2dx_CCTransitionFlipY_prototype;

JSBool js_cocos2dx_CCTransitionFlipY_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionFlipY_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionFlipY(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionFlipY_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFlipY_CCTransitionFlipY(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionFlipAngular_class;
extern JSObject *js_cocos2dx_CCTransitionFlipAngular_prototype;

JSBool js_cocos2dx_CCTransitionFlipAngular_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionFlipAngular_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionFlipAngular(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionFlipAngular_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFlipAngular_CCTransitionFlipAngular(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionZoomFlipX_class;
extern JSObject *js_cocos2dx_CCTransitionZoomFlipX_prototype;

JSBool js_cocos2dx_CCTransitionZoomFlipX_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionZoomFlipX_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionZoomFlipX(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionZoomFlipX_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionZoomFlipX_CCTransitionZoomFlipX(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionZoomFlipY_class;
extern JSObject *js_cocos2dx_CCTransitionZoomFlipY_prototype;

JSBool js_cocos2dx_CCTransitionZoomFlipY_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionZoomFlipY_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionZoomFlipY(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionZoomFlipY_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionZoomFlipY_CCTransitionZoomFlipY(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionZoomFlipAngular_class;
extern JSObject *js_cocos2dx_CCTransitionZoomFlipAngular_prototype;

JSBool js_cocos2dx_CCTransitionZoomFlipAngular_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionZoomFlipAngular_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionZoomFlipAngular(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionZoomFlipAngular_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionZoomFlipAngular_CCTransitionZoomFlipAngular(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionFade_class;
extern JSObject *js_cocos2dx_CCTransitionFade_prototype;

JSBool js_cocos2dx_CCTransitionFade_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionFade_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionFade(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionFade_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFade_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFade_CCTransitionFade(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionCrossFade_class;
extern JSObject *js_cocos2dx_CCTransitionCrossFade_prototype;

JSBool js_cocos2dx_CCTransitionCrossFade_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionCrossFade_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionCrossFade(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionCrossFade_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionCrossFade_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionCrossFade_CCTransitionCrossFade(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionTurnOffTiles_class;
extern JSObject *js_cocos2dx_CCTransitionTurnOffTiles_prototype;

JSBool js_cocos2dx_CCTransitionTurnOffTiles_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionTurnOffTiles_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionTurnOffTiles(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionTurnOffTiles_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionTurnOffTiles_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionTurnOffTiles_CCTransitionTurnOffTiles(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionSplitCols_class;
extern JSObject *js_cocos2dx_CCTransitionSplitCols_prototype;

JSBool js_cocos2dx_CCTransitionSplitCols_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionSplitCols_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionSplitCols(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionSplitCols_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSplitCols_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSplitCols_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSplitCols_CCTransitionSplitCols(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionSplitRows_class;
extern JSObject *js_cocos2dx_CCTransitionSplitRows_prototype;

JSBool js_cocos2dx_CCTransitionSplitRows_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionSplitRows_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionSplitRows(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionSplitRows_action(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSplitRows_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionSplitRows_CCTransitionSplitRows(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionFadeTR_class;
extern JSObject *js_cocos2dx_CCTransitionFadeTR_prototype;

JSBool js_cocos2dx_CCTransitionFadeTR_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionFadeTR_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionFadeTR(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionFadeTR_easeActionWithAction(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFadeTR_actionWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFadeTR_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFadeTR_CCTransitionFadeTR(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionFadeBL_class;
extern JSObject *js_cocos2dx_CCTransitionFadeBL_prototype;

JSBool js_cocos2dx_CCTransitionFadeBL_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionFadeBL_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionFadeBL(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionFadeBL_actionWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFadeBL_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFadeBL_CCTransitionFadeBL(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionFadeUp_class;
extern JSObject *js_cocos2dx_CCTransitionFadeUp_prototype;

JSBool js_cocos2dx_CCTransitionFadeUp_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionFadeUp_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionFadeUp(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionFadeUp_actionWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFadeUp_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFadeUp_CCTransitionFadeUp(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionFadeDown_class;
extern JSObject *js_cocos2dx_CCTransitionFadeDown_prototype;

JSBool js_cocos2dx_CCTransitionFadeDown_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionFadeDown_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionFadeDown(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionFadeDown_actionWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFadeDown_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionFadeDown_CCTransitionFadeDown(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionPageTurn_class;
extern JSObject *js_cocos2dx_CCTransitionPageTurn_prototype;

JSBool js_cocos2dx_CCTransitionPageTurn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionPageTurn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionPageTurn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionPageTurn_actionWithSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionPageTurn_initWithDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionPageTurn_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionPageTurn_CCTransitionPageTurn(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionProgress_class;
extern JSObject *js_cocos2dx_CCTransitionProgress_prototype;

JSBool js_cocos2dx_CCTransitionProgress_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionProgress_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionProgress(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionProgress_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTransitionProgress_CCTransitionProgress(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionProgressRadialCCW_class;
extern JSObject *js_cocos2dx_CCTransitionProgressRadialCCW_prototype;

JSBool js_cocos2dx_CCTransitionProgressRadialCCW_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionProgressRadialCCW_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionProgressRadialCCW(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionProgressRadialCCW_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionProgressRadialCW_class;
extern JSObject *js_cocos2dx_CCTransitionProgressRadialCW_prototype;

JSBool js_cocos2dx_CCTransitionProgressRadialCW_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionProgressRadialCW_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionProgressRadialCW(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionProgressRadialCW_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionProgressHorizontal_class;
extern JSObject *js_cocos2dx_CCTransitionProgressHorizontal_prototype;

JSBool js_cocos2dx_CCTransitionProgressHorizontal_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionProgressHorizontal_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionProgressHorizontal(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionProgressHorizontal_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionProgressVertical_class;
extern JSObject *js_cocos2dx_CCTransitionProgressVertical_prototype;

JSBool js_cocos2dx_CCTransitionProgressVertical_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionProgressVertical_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionProgressVertical(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionProgressVertical_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionProgressInOut_class;
extern JSObject *js_cocos2dx_CCTransitionProgressInOut_prototype;

JSBool js_cocos2dx_CCTransitionProgressInOut_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionProgressInOut_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionProgressInOut(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionProgressInOut_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTransitionProgressOutIn_class;
extern JSObject *js_cocos2dx_CCTransitionProgressOutIn_prototype;

JSBool js_cocos2dx_CCTransitionProgressOutIn_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTransitionProgressOutIn_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTransitionProgressOutIn(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTransitionProgressOutIn_create(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCMenuItem_class;
extern JSObject *js_cocos2dx_CCMenuItem_prototype;

JSBool js_cocos2dx_CCMenuItem_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCMenuItem_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCMenuItem(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCMenuItem_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItem_activate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItem_unregisterScriptTapHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItem_isEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItem_selected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItem_getScriptTapHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItem_isSelected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItem_registerScriptTapHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItem_unselected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItem_rect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItem_CCMenuItem(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCMenuItemLabel_class;
extern JSObject *js_cocos2dx_CCMenuItemLabel_prototype;

JSBool js_cocos2dx_CCMenuItemLabel_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCMenuItemLabel_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCMenuItemLabel(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCMenuItemLabel_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_setLabel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_activate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_getDisabledColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_setString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_selected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_setDisabledColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_getLabel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_unselected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemLabel_CCMenuItemLabel(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCMenuItemAtlasFont_class;
extern JSObject *js_cocos2dx_CCMenuItemAtlasFont_prototype;

JSBool js_cocos2dx_CCMenuItemAtlasFont_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCMenuItemAtlasFont_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCMenuItemAtlasFont(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCMenuItemAtlasFont_CCMenuItemAtlasFont(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCMenuItemFont_class;
extern JSObject *js_cocos2dx_CCMenuItemFont_prototype;

JSBool js_cocos2dx_CCMenuItemFont_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCMenuItemFont_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCMenuItemFont(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCMenuItemFont_setFontNameObj(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemFont_fontNameObj(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemFont_setFontSizeObj(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemFont_fontSizeObj(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemFont_setFontName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemFont_fontName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemFont_fontSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemFont_setFontSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemFont_CCMenuItemFont(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCMenuItemSprite_class;
extern JSObject *js_cocos2dx_CCMenuItemSprite_prototype;

JSBool js_cocos2dx_CCMenuItemSprite_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCMenuItemSprite_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCMenuItemSprite(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCMenuItemSprite_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_selected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_setNormalImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_setDisabledImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_setSelectedImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_getDisabledImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_getSelectedImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_getNormalImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_unselected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemSprite_CCMenuItemSprite(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCMenuItemImage_class;
extern JSObject *js_cocos2dx_CCMenuItemImage_prototype;

JSBool js_cocos2dx_CCMenuItemImage_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCMenuItemImage_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCMenuItemImage(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCMenuItemImage_setDisabledSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemImage_setSelectedSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemImage_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemImage_setNormalSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemImage_CCMenuItemImage(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCMenuItemToggle_class;
extern JSObject *js_cocos2dx_CCMenuItemToggle_prototype;

JSBool js_cocos2dx_CCMenuItemToggle_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCMenuItemToggle_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCMenuItemToggle(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCMenuItemToggle_setSubItems(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_initWithItem(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_setSelectedIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_getSelectedIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_addSubItem(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_activate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_selected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_unselected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_selectedItem(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenuItemToggle_CCMenuItemToggle(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCMenu_class;
extern JSObject *js_cocos2dx_CCMenu_prototype;

JSBool js_cocos2dx_CCMenu_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCMenu_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCMenu(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCMenu_initWithArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_alignItemsVertically(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_ccTouchBegan(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_ccTouchEnded(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_isEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_setHandlerPriority(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_alignItemsHorizontallyWithPadding(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_alignItemsHorizontally(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_ccTouchMoved(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_ccTouchCancelled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_alignItemsVerticallyWithPadding(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_registerWithTouchDispatcher(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCMenu_CCMenu(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCProgressTimer_class;
extern JSObject *js_cocos2dx_CCProgressTimer_prototype;

JSBool js_cocos2dx_CCProgressTimer_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCProgressTimer_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCProgressTimer(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCProgressTimer_setAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_setBarChangeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_setReverseDirection(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_setPercentage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_setType(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_getPercentage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_setSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_getSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_setMidpoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_getMidpoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_getType(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_isReverseDirection(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_getBarChangeRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_initWithSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCProgressTimer_CCProgressTimer(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCRenderTexture_class;
extern JSObject *js_cocos2dx_CCRenderTexture_prototype;

JSBool js_cocos2dx_CCRenderTexture_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCRenderTexture_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCRenderTexture(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCRenderTexture_clearStencil(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_begin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_listenToForeground(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_getClearDepth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_getClearStencil(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_end(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_setClearStencil(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_initWithWidthAndHeight(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_getSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_isAutoDraw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_setClearFlags(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_saveToFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_setAutoDraw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_setClearColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_endToLua(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_beginWithClear(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_clearDepth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_getClearColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_listenToBackground(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_clear(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_getClearFlags(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_newCCImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_setClearDepth(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_setSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCRenderTexture_CCRenderTexture(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleBatchNode_class;
extern JSObject *js_cocos2dx_CCParticleBatchNode_prototype;

JSBool js_cocos2dx_CCParticleBatchNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleBatchNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleBatchNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleBatchNode_removeChildAtIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_draw(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_initWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_disableParticle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_removeAllChildrenWithCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_getTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_insertChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_initWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_reorderChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_setTextureAtlas(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_createWithTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleBatchNode_CCParticleBatchNode(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleSystem_class;
extern JSObject *js_cocos2dx_CCParticleSystem_prototype;

JSBool js_cocos2dx_CCParticleSystem_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleSystem_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleSystem(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleSystem_getStartSizeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_isFull(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getBatchNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getStartColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getPositionType(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setPosVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getEndSpin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setRotatePerSecondVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getStartSpinVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getEndSpinVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_stopSystem(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getEndSizeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setRotation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setTangentialAccel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setScaleY(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setScaleX(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getRadialAccel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setStartRadius(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setRotatePerSecond(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setEndSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getGravity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getTangentialAccel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setEndRadius(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getAngle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getSpeed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setEndColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setStartSpin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getPosVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_updateWithNoTime(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_isBlendAdditive(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getAngleVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setPositionType(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getEndRadius(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getSourcePosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setLifeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setEndColorVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_updateQuadWithParticle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getStartSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setStartSpinVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_resetSystem(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setAtlasIndex(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setTangentialAccelVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setEndRadiusVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_isActive(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setRadialAccelVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setStartSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setSpeed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getStartSpin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getRotatePerSecond(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_initParticle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setEmitterMode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setSourcePosition(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getRadialAccelVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setBlendAdditive(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setLife(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setAngleVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setEndSizeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setAngle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setBatchNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getTangentialAccelVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getEmitterMode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setEndSpinVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_initWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getSpeedVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setStartColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getRotatePerSecondVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getEndSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getLife(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setSpeedVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setAutoRemoveOnFinish(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setGravity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_postStep(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setEmissionRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getEndColorVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getEmissionRate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getEndColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getLifeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setStartSizeVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_addParticle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getStartRadius(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getParticleCount(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getStartRadiusVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setStartColorVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setEndSpin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setRadialAccel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_initWithDictionary(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_isAutoRemoveOnFinish(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_setStartRadiusVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getEndRadiusVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_getStartColorVar(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystem_CCParticleSystem(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleSystemQuad_class;
extern JSObject *js_cocos2dx_CCParticleSystemQuad_prototype;

JSBool js_cocos2dx_CCParticleSystemQuad_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleSystemQuad_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleSystemQuad(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleSystemQuad_initTexCoordsWithRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystemQuad_setTextureWithRect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystemQuad_setDisplayFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystemQuad_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystemQuad_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSystemQuad_CCParticleSystemQuad(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleFire_class;
extern JSObject *js_cocos2dx_CCParticleFire_prototype;

JSBool js_cocos2dx_CCParticleFire_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleFire_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleFire(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleFire_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFire_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFire_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFire_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFire_CCParticleFire(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleFireworks_class;
extern JSObject *js_cocos2dx_CCParticleFireworks_prototype;

JSBool js_cocos2dx_CCParticleFireworks_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleFireworks_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleFireworks(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleFireworks_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFireworks_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFireworks_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFireworks_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFireworks_CCParticleFireworks(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleSun_class;
extern JSObject *js_cocos2dx_CCParticleSun_prototype;

JSBool js_cocos2dx_CCParticleSun_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleSun_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleSun(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleSun_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSun_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSun_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSun_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSun_CCParticleSun(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleGalaxy_class;
extern JSObject *js_cocos2dx_CCParticleGalaxy_prototype;

JSBool js_cocos2dx_CCParticleGalaxy_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleGalaxy_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleGalaxy(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleGalaxy_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleGalaxy_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleGalaxy_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleGalaxy_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleGalaxy_CCParticleGalaxy(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleFlower_class;
extern JSObject *js_cocos2dx_CCParticleFlower_prototype;

JSBool js_cocos2dx_CCParticleFlower_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleFlower_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleFlower(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleFlower_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFlower_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFlower_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFlower_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleFlower_CCParticleFlower(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleMeteor_class;
extern JSObject *js_cocos2dx_CCParticleMeteor_prototype;

JSBool js_cocos2dx_CCParticleMeteor_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleMeteor_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleMeteor(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleMeteor_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleMeteor_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleMeteor_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleMeteor_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleMeteor_CCParticleMeteor(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleSpiral_class;
extern JSObject *js_cocos2dx_CCParticleSpiral_prototype;

JSBool js_cocos2dx_CCParticleSpiral_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleSpiral_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleSpiral(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleSpiral_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSpiral_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSpiral_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSpiral_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSpiral_CCParticleSpiral(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleExplosion_class;
extern JSObject *js_cocos2dx_CCParticleExplosion_prototype;

JSBool js_cocos2dx_CCParticleExplosion_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleExplosion_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleExplosion(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleExplosion_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleExplosion_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleExplosion_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleExplosion_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleExplosion_CCParticleExplosion(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleSmoke_class;
extern JSObject *js_cocos2dx_CCParticleSmoke_prototype;

JSBool js_cocos2dx_CCParticleSmoke_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleSmoke_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleSmoke(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleSmoke_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSmoke_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSmoke_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSmoke_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSmoke_CCParticleSmoke(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleSnow_class;
extern JSObject *js_cocos2dx_CCParticleSnow_prototype;

JSBool js_cocos2dx_CCParticleSnow_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleSnow_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleSnow(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleSnow_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSnow_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSnow_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSnow_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleSnow_CCParticleSnow(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParticleRain_class;
extern JSObject *js_cocos2dx_CCParticleRain_prototype;

JSBool js_cocos2dx_CCParticleRain_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParticleRain_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParticleRain(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParticleRain_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleRain_initWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleRain_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleRain_createWithTotalParticles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParticleRain_CCParticleRain(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCFileUtils_class;
extern JSObject *js_cocos2dx_CCFileUtils_prototype;

JSBool js_cocos2dx_CCFileUtils_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCFileUtils_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCFileUtils(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCFileUtils_isPopupNotify(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_setResourceDirectory(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_getResourceDirectory(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_purgeCachedEntries(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_fullPathFromRelativeFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_getFileData(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_setFilenameLookupDictionary(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_setPopupNotify(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_getFileDataFromZip(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_getClassTypeInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_fullPathForFilename(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_getWriteablePath(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_fullPathFromRelativePath(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_loadFilenameLookupDictionaryFromFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_purgeFileUtils(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCFileUtils_sharedFileUtils(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCAnimationCache_class;
extern JSObject *js_cocos2dx_CCAnimationCache_prototype;

JSBool js_cocos2dx_CCAnimationCache_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCAnimationCache_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCAnimationCache(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCAnimationCache_animationByName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationCache_addAnimationsWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationCache_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationCache_addAnimationsWithDictionary(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationCache_removeAnimationByName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationCache_addAnimation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationCache_purgeSharedAnimationCache(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationCache_sharedAnimationCache(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCAnimationCache_CCAnimationCache(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCSpriteFrameCache_class;
extern JSObject *js_cocos2dx_CCSpriteFrameCache_prototype;

JSBool js_cocos2dx_CCSpriteFrameCache_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCSpriteFrameCache_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCSpriteFrameCache(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCSpriteFrameCache_addSpriteFramesWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrameCache_addSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrameCache_removeUnusedSpriteFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrameCache_spriteFrameByName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrameCache_removeSpriteFramesFromFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrameCache_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrameCache_removeSpriteFrames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrameCache_removeSpriteFramesFromTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrameCache_removeSpriteFrameByName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrameCache_purgeSharedSpriteFrameCache(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCSpriteFrameCache_sharedSpriteFrameCache(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTextureCache_class;
extern JSObject *js_cocos2dx_CCTextureCache_prototype;

JSBool js_cocos2dx_CCTextureCache_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTextureCache_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTextureCache(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTextureCache_dumpCachedTextureInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_addUIImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_removeTextureForKey(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_textureForKey(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_snapshotTextures(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_addPVRImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_addImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_removeAllTextures(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_removeUnusedTextures(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_removeTexture(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_purgeSharedTextureCache(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_reloadAllTextures(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_sharedTextureCache(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTextureCache_CCTextureCache(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCParallaxNode_class;
extern JSObject *js_cocos2dx_CCParallaxNode_prototype;

JSBool js_cocos2dx_CCParallaxNode_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCParallaxNode_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCParallaxNode(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCParallaxNode_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParallaxNode_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParallaxNode_removeAllChildrenWithCleanup(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParallaxNode_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParallaxNode_getParallaxArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParallaxNode_setParallaxArray(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParallaxNode_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCParallaxNode_CCParallaxNode(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTMXObjectGroup_class;
extern JSObject *js_cocos2dx_CCTMXObjectGroup_prototype;

JSBool js_cocos2dx_CCTMXObjectGroup_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTMXObjectGroup_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTMXObjectGroup(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTMXObjectGroup_setPositionOffset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXObjectGroup_objectNamed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXObjectGroup_getPositionOffset(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXObjectGroup_getObjects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXObjectGroup_setGroupName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXObjectGroup_getProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXObjectGroup_getGroupName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXObjectGroup_setProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXObjectGroup_propertyNamed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXObjectGroup_setObjects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXObjectGroup_CCTMXObjectGroup(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTMXLayerInfo_class;
extern JSObject *js_cocos2dx_CCTMXLayerInfo_prototype;

JSBool js_cocos2dx_CCTMXLayerInfo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTMXLayerInfo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTMXLayerInfo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTMXLayerInfo_setProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayerInfo_getProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayerInfo_CCTMXLayerInfo(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTMXTilesetInfo_class;
extern JSObject *js_cocos2dx_CCTMXTilesetInfo_prototype;

JSBool js_cocos2dx_CCTMXTilesetInfo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTMXTilesetInfo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTMXTilesetInfo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTMXTilesetInfo_rectForGID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTilesetInfo_CCTMXTilesetInfo(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTMXMapInfo_class;
extern JSObject *js_cocos2dx_CCTMXMapInfo_prototype;

JSBool js_cocos2dx_CCTMXMapInfo_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTMXMapInfo_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTMXMapInfo(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTMXMapInfo_getTileProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setObjectGroups(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_initWithTMXFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setTMXFileName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setLayers(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setStoringCharacters(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getStoringCharacters(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getParentElement(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getLayerAttribs(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getLayers(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getTilesets(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getParentGID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setParentElement(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setParentGID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_parseXMLString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getObjectGroups(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setLayerAttribs(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getTMXFileName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setCurrentString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_initWithXML(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setTileProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setMapSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_parseXMLFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getMapSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_setTilesets(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_getCurrentString(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_formatWithTMXFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_formatWithXML(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXMapInfo_CCTMXMapInfo(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTMXLayer_class;
extern JSObject *js_cocos2dx_CCTMXLayer_prototype;

JSBool js_cocos2dx_CCTMXLayer_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTMXLayer_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTMXLayer(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTMXLayer_addChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_tileGIDAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_positionAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_setLayerOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_getTiles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_releaseMap(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_setTiles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_getLayerSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_setMapTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_getLayerOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_setProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_setLayerName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_removeTileAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_initWithTilesetInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_setupTiles(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_setTileGID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_getMapTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_propertyNamed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_setLayerSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_getLayerName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_setTileSet(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_removeChild(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_getTileSet(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_getProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_tileAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXLayer_CCTMXLayer(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTMXTiledMap_class;
extern JSObject *js_cocos2dx_CCTMXTiledMap_prototype;

JSBool js_cocos2dx_CCTMXTiledMap_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTMXTiledMap_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTMXTiledMap(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTMXTiledMap_propertiesForGID(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_setObjectGroups(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_setTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_setMapSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_getTileSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_getObjectGroups(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_initWithXML(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_initWithTMXFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_objectGroupNamed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_getMapSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_getProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_setMapOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_setProperties(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_layerNamed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_getMapOrientation(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_propertyNamed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_createWithXML(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTMXTiledMap_CCTMXTiledMap(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTileMapAtlas_class;
extern JSObject *js_cocos2dx_CCTileMapAtlas_prototype;

JSBool js_cocos2dx_CCTileMapAtlas_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTileMapAtlas_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTileMapAtlas(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTileMapAtlas_initWithTileFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTileMapAtlas_releaseMap(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTileMapAtlas_getTGAInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTileMapAtlas_tileAt(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTileMapAtlas_setTile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTileMapAtlas_setTGAInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTileMapAtlas_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTileMapAtlas_CCTileMapAtlas(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCTimer_class;
extern JSObject *js_cocos2dx_CCTimer_prototype;

JSBool js_cocos2dx_CCTimer_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCTimer_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCTimer(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCTimer_getInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTimer_setInterval(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTimer_initWithScriptHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTimer_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTimer_getScriptHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTimer_timerWithScriptHandler(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCTimer_CCTimer(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCScheduler_class;
extern JSObject *js_cocos2dx_CCScheduler_prototype;

JSBool js_cocos2dx_CCScheduler_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCScheduler_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCScheduler(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCScheduler_setTimeScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_unscheduleUpdateForTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_scheduleUpdateForTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_unscheduleAll(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_unscheduleAllWithMinPriority(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_isTargetPaused(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_update(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_unscheduleScriptEntry(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_unscheduleAllForTarget(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_scheduleScriptFunc(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_getTimeScale(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScheduler_CCScheduler(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_SimpleAudioEngine_class;
extern JSObject *js_cocos2dx_SimpleAudioEngine_prototype;

JSBool js_cocos2dx_SimpleAudioEngine_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_SimpleAudioEngine_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_SimpleAudioEngine(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_SimpleAudioEngine_stopAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_getBackgroundMusicVolume(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_isBackgroundMusicPlaying(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_getEffectsVolume(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_setBackgroundMusicVolume(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_stopEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_stopBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_playBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_pauseAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_preloadBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_resumeBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_playEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_rewindBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_willPlayBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_unloadEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_preloadEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_setEffectsVolume(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_pauseEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_getClassTypeInfo(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_resumeAllEffects(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_pauseBackgroundMusic(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_resumeEffect(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_end(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_SimpleAudioEngine_sharedEngine(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCBReader_class;
extern JSObject *js_cocos2dx_CCBReader_prototype;

JSBool js_cocos2dx_CCBReader_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCBReader_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCBReader(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCBReader_getOwnerCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_setCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_getOwnerCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_getOwnerOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_getCCBRootPath(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_getOwnerOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_readUTF8(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_setAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_getAnimationManagersForNodes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_getNodesWithAnimationManagers(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_getAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBReader_CCBReader(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCScale9Sprite_class;
extern JSObject *js_cocos2dx_CCScale9Sprite_prototype;

JSBool js_cocos2dx_CCScale9Sprite_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCScale9Sprite_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCScale9Sprite(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCScale9Sprite_getCapInsets(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_initWithSpriteFrameName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_updateWithBatchNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_setInsetBottom(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_visit(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_setInsetTop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_setPreferredSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_setSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_getColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_initWithBatchNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_getInsetBottom(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_resizableSpriteWithCapInsets(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_setContentSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_getInsetRight(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_getOriginalSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_initWithFile(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_setColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_getInsetTop(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_setInsetLeft(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_initWithSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_getPreferredSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_setCapInsets(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_getInsetLeft(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_setInsetRight(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_createWithSpriteFrameName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_createWithSpriteFrame(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCScale9Sprite_CCScale9Sprite(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCControlButton_class;
extern JSObject *js_cocos2dx_CCControlButton_prototype;

JSBool js_cocos2dx_CCControlButton_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCControlButton_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCControlButton(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCControlButton_setTitleColorDispatchTable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_isPushed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setSelected(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setTitleLabel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_ccTouchBegan(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setTitleTTFSizeForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setAdjustBackgroundImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_ccTouchEnded(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setHighlighted(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setBackgroundSpriteDispatchTable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setZoomOnTouchDown(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getTitleDispatchTable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setLabelAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_ccTouchCancelled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getLabelAnchorPoint(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_initWithBackgroundSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getTitleTTFSizeForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setTitleDispatchTable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setTitleTTFForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setPreferredSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setTitleLabelForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_ccTouchMoved(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getOpacity(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getCurrentTitleColor(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getTitleColorDispatchTable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setEnabled(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getBackgroundSpriteForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getHorizontalOrigin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setMargins(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_needsLayout(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_initWithTitleAndFontNameAndFontSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setTitleBMFontForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getTitleTTFForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getBackgroundSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getTitleColorForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setTitleColorForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_doesAdjustBackgroundImage(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setBackgroundSpriteFrameForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setBackgroundSpriteForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getTitleLabelDispatchTable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_initWithLabelAndBackgroundSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setTitleLabelDispatchTable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getTitleLabel(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getPreferredSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getVerticalMargin(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getBackgroundSpriteDispatchTable(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getTitleLabelForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getCurrentTitle(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getTitleBMFontForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setTitleForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_setBackgroundSprite(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getZoomOnTouchDown(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_getTitleForState(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_create(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCControlButton_CCControlButton(JSContext *cx, uint32_t argc, jsval *vp);

extern JSClass  *js_cocos2dx_CCBAnimationManager_class;
extern JSObject *js_cocos2dx_CCBAnimationManager_prototype;

JSBool js_cocos2dx_CCBAnimationManager_constructor(JSContext *cx, uint32_t argc, jsval *vp);
void js_cocos2dx_CCBAnimationManager_finalize(JSContext *cx, JSObject *obj);
void js_register_cocos2dx_CCBAnimationManager(JSContext *cx, JSObject *global);
void register_all_cocos2dx(JSContext* cx, JSObject* obj);
JSBool js_cocos2dx_CCBAnimationManager_moveAnimationsFromNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_setAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getDocumentCallbackNames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_setBaseValue(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getDocumentOutletNodes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_addNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getLastCompletedSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_setRootNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_addDocumentOutletName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getSequences(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_setDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getDocumentOutletNames(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_init(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_runAnimationsForSequenceNamedTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_setRootContainerSize(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_runAnimationsForSequenceIdTweenDuration(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getRunningSequenceName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getAutoPlaySequenceId(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_addDocumentCallbackName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getRootNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_addDocumentOutletNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_setDelegate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_addDocumentCallbackNode(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getDelegate(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_runAnimations(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_runAnimationsForSequenceNamed(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getDocumentCallbackNodes(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_setSequences(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_debug(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_getDocumentControllerName(JSContext *cx, uint32_t argc, jsval *vp);
JSBool js_cocos2dx_CCBAnimationManager_CCBAnimationManager(JSContext *cx, uint32_t argc, jsval *vp);
#endif

