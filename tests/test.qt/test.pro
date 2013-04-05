QT       += core gui opengl

TARGET = test
TEMPLATE = app

CONFIG(debug, debug|release) {
    DESTDIR = ../../Debug.qt
}

CONFIG(release, debug|release) {
    DESTDIR = ../../Release.qt
}

DEFINES += CC_UNDER_QT _USE_MATH_DEFINES

LIBS += -L$(DESTDIR) -llibcocos2d -llibCocosDenshion -llibBox2d -llibchipmunk

win32 {
    INCLUDEPATH += ../../cocos2dx\platform/third_party/win32
}

INCLUDEPATH += ../../cocos2dx\platform \
        ../../cocos2dx/include \
        ../../cocos2dx \
        ../../CocosDenshion/include \
        ../../chipmunk/include/chipmunk \
        ../ \
        ../..

HEADERS += \
    ../AppDelegate.h \
    ../tests/tests.h \
    ../tests/testResource.h \
    ../tests/testBasic.h \
    ../tests/controller.h \
    ../tests/AccelerometerTest/AccelerometerTest.h \
    ../tests/ActionManagerTest/ActionManagerTest.h \
    ../tests/ActionsTest/ActionsTest.h \
    ../tests/Box2DTest/Box2dTest.h \
    ../tests/Box2DTestBed/Tests/Web.h \
    ../tests/Box2DTestBed/Tests/VerticalStack.h \
    ../tests/Box2DTestBed/Tests/VaryingRestitution.h \
    ../tests/Box2DTestBed/Tests/VaryingFriction.h \
    ../tests/Box2DTestBed/Tests/Tumbler.h \
    ../tests/Box2DTestBed/Tests/TimeOfImpact.h \
    ../tests/Box2DTestBed/Tests/Tiles.h \
    ../tests/Box2DTestBed/Tests/TheoJansen.h \
    ../tests/Box2DTestBed/Tests/SphereStack.h \
    ../tests/Box2DTestBed/Tests/SliderCrank.h \
    ../tests/Box2DTestBed/Tests/ShapeEditing.h \
    ../tests/Box2DTestBed/Tests/SensorTest.h \
    ../tests/Box2DTestBed/Tests/RopeJoint.h \
    ../tests/Box2DTestBed/Tests/Rope.h \
    ../tests/Box2DTestBed/Tests/Revolute.h \
    ../tests/Box2DTestBed/Tests/RayCast.h \
    ../tests/Box2DTestBed/Tests/Pyramid.h \
    ../tests/Box2DTestBed/Tests/Pulleys.h \
    ../tests/Box2DTestBed/Tests/Prismatic.h \
    ../tests/Box2DTestBed/Tests/PolyShapes.h \
    ../tests/Box2DTestBed/Tests/PolyCollision.h \
    ../tests/Box2DTestBed/Tests/Pinball.h \
    ../tests/Box2DTestBed/Tests/OneSidedPlatform.h \
    ../tests/Box2DTestBed/Tests/Gears.h \
    ../tests/Box2DTestBed/Tests/EdgeTest.h \
    ../tests/Box2DTestBed/Tests/EdgeShapes.h \
    ../tests/Box2DTestBed/Tests/DynamicTreeTest.h \
    ../tests/Box2DTestBed/Tests/DumpShell.h \
    ../tests/Box2DTestBed/Tests/Dominos.h \
    ../tests/Box2DTestBed/Tests/DistanceTest.h \
    ../tests/Box2DTestBed/Tests/ContinuousTest.h \
    ../tests/Box2DTestBed/Tests/Confined.h \
    ../tests/Box2DTestBed/Tests/CompoundShapes.h \
    ../tests/Box2DTestBed/Tests/CollisionProcessing.h \
    ../tests/Box2DTestBed/Tests/CollisionFiltering.h \
    ../tests/Box2DTestBed/Tests/CharacterCollision.h \
    ../tests/Box2DTestBed/Tests/Chain.h \
    ../tests/Box2DTestBed/Tests/Car.h \
    ../tests/Box2DTestBed/Tests/Cantilever.h \
    ../tests/Box2DTestBed/Tests/BulletTest.h \
    ../tests/Box2DTestBed/Tests/Bridge.h \
    ../tests/Box2DTestBed/Tests/Breakable.h \
    ../tests/Box2DTestBed/Tests/BodyTypes.h \
    ../tests/Box2DTestBed/Tests/ApplyForce.h \
    ../tests/Box2DTestBed/Tests/AddPair.h \
    ../tests/Box2DTestBed/Test.h \
    ../tests/Box2DTestBed/GLES-Render.h \
    ../tests/Box2DTestBed/Box2dView.h \
    ../tests/BugsTest/Bug-458/QuestionContainerSprite.h \
    ../tests/BugsTest/Bug-458/Bug-458.h \
    ../tests/BugsTest/BugsTest.h \
    ../tests/BugsTest/Bug-1174.h \
    ../tests/BugsTest/Bug-1159.h \
    ../tests/BugsTest/Bug-914.h \
    ../tests/BugsTest/Bug-899.h \
    ../tests/BugsTest/Bug-886.h \
    ../tests/BugsTest/Bug-624.h \
    ../tests/BugsTest/Bug-422.h \
    ../tests/BugsTest/Bug-350.h \
    ../tests/ChipmunkTest/drawSpace.h \
    ../tests/ChipmunkTest/cocos2dChipmunkDemo.h \
    ../tests/ChipmunkTest/ChipmunkDemo.h \
    ../tests/ChipmunkTest/drawSpace.h \
    ../tests/ChipmunkTest/cocos2dChipmunkDemo.h \
    ../tests/ChipmunkTest/ChipmunkDemo.h \
    ../tests/ClickAndMoveTest/ClickAndMoveTest.h \
    ../tests/ClickAndMoveTest/ClickAndMoveTest.h \
    ../tests/CocosDenshionTest/CocosDenshionTest.h \
    ../tests/CocosNodeTest/CocosNodeTest.h \
    ../tests/CurrentLanguageTest/CurrentLanguageTest.h \
    ../tests/DirectorTest/DirectorTest.h \
    ../tests/DrawPrimitivesTest/DrawPrimitivesTest.h \
    ../tests/EaseActionsTest/EaseActionsTest.h \
    ../tests/EffectsAdvancedTest/EffectsAdvancedTest.h \
    ../tests/EffectsTest/EffectsTest.h \
    ../tests/FontTest/FontTest.h \
    ../tests/HiResTest/HiResTest.h \
    ../tests/IntervalTest/IntervalTest.h \
    ../tests/KeypadTest/KeypadTest.h \
    ../tests/LabelTest/LabelTest.h \
    ../tests/LayerTest/LayerTest.h \
    ../tests/MenuTest/MenuTest.h \
    ../tests/MotionStreakTest/MotionStreakTest.h \
    ../tests/MotionStreakTest/MotionStreakTest.h \
    ../tests/MotionStreakTest/MotionStreakTest.h \
    ../tests/ParallaxTest/ParallaxTest.h \
    ../tests/ParticleTest/ParticleTest.h \
    ../tests/PerformanceTest/PerformanceTouchesTest.h \
    ../tests/PerformanceTest/PerformanceTextureTest.h \
    ../tests/PerformanceTest/PerformanceTest.h \
    ../tests/PerformanceTest/PerformanceSpriteTest.h \
    ../tests/PerformanceTest/PerformanceParticleTest.h \
    ../tests/PerformanceTest/PerformanceNodeChildrenTest.h \
    ../tests/PerformanceTest/PerformanceTouchesTest.h \
    ../tests/PerformanceTest/PerformanceTextureTest.h \
    ../tests/PerformanceTest/PerformanceTest.h \
    ../tests/PerformanceTest/PerformanceSpriteTest.h \
    ../tests/PerformanceTest/PerformanceParticleTest.h \
    ../tests/PerformanceTest/PerformanceNodeChildrenTest.h \
    ../tests/ProgressActionsTest/ProgressActionsTest.h \
    ../tests/ParticleTest/ParticleTest.h \
    ../tests/ProgressActionsTest/ProgressActionsTest.h \
    ../tests/RenderTextureTest/RenderTextureTest.h \
    ../tests/RotateWorldTest/RotateWorldTest.h \
    ../tests/SceneTest/SceneTest.h \
    ../tests/SceneTest/SceneTest.h \
    ../tests/SchedulerTest/SchedulerTest.h \
    ../tests/SpriteTest/SpriteTest.h \
    ../tests/TextInputTest/TextInputTest.h \
    ../tests/Texture2dTest/Texture2dTest.h \
    ../tests/TextureCacheTest/TextureCacheTest.h \
    ../tests/TileMapTest/TileMapTest.h \
    ../tests/TouchesTest/TouchesTest.h \
    ../tests/TouchesTest/Paddle.h \
    ../tests/TouchesTest/Ball.h \
    ../tests/TransitionsTest/TransitionsTest.h \
    ../tests/UserDefaultTest/UserDefaultTest.h \
    ../tests/ZwoptexTest/ZwoptexTest.h

SOURCES += \
    main.cpp \
    ../AppDelegate.cpp \
    ../tests/testBasic.cpp \
    ../tests/controller.cpp \
    ../tests/AccelerometerTest/AccelerometerTest.cpp \
    ../tests/ActionManagerTest/ActionManagerTest.cpp \
    ../tests/ActionsTest/ActionsTest.cpp \
    ../tests/Box2DTest/Box2dTest.cpp \
    ../tests/Box2DTestBed/TestEntries.cpp \
    ../tests/Box2DTestBed/Test.cpp \
    ../tests/Box2DTestBed/GLES-Render.cpp \
    ../tests/Box2DTestBed/Box2dView.cpp \
    ../tests/BugsTest/Bug-458/QuestionContainerSprite.cpp \
    ../tests/BugsTest/Bug-458/Bug-458.cpp \
    ../tests/BugsTest/BugsTest.cpp \
    ../tests/BugsTest/Bug-1174.cpp \
    ../tests/BugsTest/Bug-1159.cpp \
    ../tests/BugsTest/Bug-914.cpp \
    ../tests/BugsTest/Bug-899.cpp \
    ../tests/BugsTest/Bug-886.cpp \
    ../tests/BugsTest/Bug-624.cpp \
    ../tests/BugsTest/Bug-422.cpp \
    ../tests/BugsTest/Bug-350.cpp \
    ../tests/ChipmunkTest/UnsafeOps.cpp \
    ../tests/ChipmunkTest/Tumble.cpp \
    ../tests/ChipmunkTest/TheoJansen.cpp \
    ../tests/ChipmunkTest/Tank.cpp \
    ../tests/ChipmunkTest/Springies.cpp \
    ../tests/ChipmunkTest/Simple.cpp \
    ../tests/ChipmunkTest/Sensors.cpp \
    ../tests/ChipmunkTest/Query.cpp \
    ../tests/ChipmunkTest/PyramidTopple.cpp \
    ../tests/ChipmunkTest/PyramidStack.cpp \
    ../tests/ChipmunkTest/Pump.cpp \
    ../tests/ChipmunkTest/Plink.cpp \
    ../tests/ChipmunkTest/Player.cpp \
    ../tests/ChipmunkTest/Planet.cpp \
    ../tests/ChipmunkTest/OneWay.cpp \
    ../tests/ChipmunkTest/MagnetsElectric.cpp \
    ../tests/ChipmunkTest/LogoSmash.cpp \
    ../tests/ChipmunkTest/Joints.cpp \
    ../tests/ChipmunkTest/drawSpace.cpp \
    ../tests/ChipmunkTest/cocos2dChipmunkDemo.cpp \
    ../tests/ChipmunkTest/Bounce.cpp \
    ../tests/ChipmunkTest/UnsafeOps.cpp \
    ../tests/ChipmunkTest/Tumble.cpp \
    ../tests/ChipmunkTest/TheoJansen.cpp \
    ../tests/ChipmunkTest/Tank.cpp \
    ../tests/ChipmunkTest/Springies.cpp \
    ../tests/ChipmunkTest/Simple.cpp \
    ../tests/ChipmunkTest/Sensors.cpp \
    ../tests/ChipmunkTest/Query.cpp \
    ../tests/ChipmunkTest/PyramidTopple.cpp \
    ../tests/ChipmunkTest/PyramidStack.cpp \
    ../tests/ChipmunkTest/Pump.cpp \
    ../tests/ChipmunkTest/Plink.cpp \
    ../tests/ChipmunkTest/Player.cpp \
    ../tests/ChipmunkTest/Planet.cpp \
    ../tests/ChipmunkTest/OneWay.cpp \
    ../tests/ChipmunkTest/MagnetsElectric.cpp \
    ../tests/ChipmunkTest/LogoSmash.cpp \
    ../tests/ChipmunkTest/Joints.cpp \
    ../tests/ChipmunkTest/drawSpace.cpp \
    ../tests/ChipmunkTest/cocos2dChipmunkDemo.cpp \
    ../tests/ChipmunkTest/Bounce.cpp \
    ../tests/ClickAndMoveTest/ClickAndMoveTest.cpp \
    ../tests/ClickAndMoveTest/ClickAndMoveTest.cpp \
    ../tests/CocosDenshionTest/CocosDenshionTest.cpp \
    ../tests/CocosNodeTest/CocosNodeTest.cpp \
    ../tests/CurrentLanguageTest/CurrentLanguageTest.cpp \
    ../tests/DirectorTest/DirectorTest.cpp \
    ../tests/DrawPrimitivesTest/DrawPrimitivesTest.cpp \
    ../tests/EaseActionsTest/EaseActionsTest.cpp \
    ../tests/EffectsAdvancedTest/EffectsAdvancedTest.cpp \
    ../tests/EffectsTest/EffectsTest.cpp \
    ../tests/FontTest/FontTest.cpp \
    ../tests/HiResTest/HiResTest.cpp \
    ../tests/IntervalTest/IntervalTest.cpp \
    ../tests/KeypadTest/KeypadTest.cpp \
    ../tests/LabelTest/LabelTest.cpp \
    ../tests/LayerTest/LayerTest.cpp \
    ../tests/MenuTest/MenuTest.cpp \
    ../tests/MotionStreakTest/MotionStreakTest.cpp \
    ../tests/MotionStreakTest/MotionStreakTest.cpp \
    ../tests/MotionStreakTest/MotionStreakTest.cpp \
    ../tests/ParallaxTest/ParallaxTest.cpp \
    ../tests/ParticleTest/ParticleTest.cpp \
    ../tests/PerformanceTest/PerformanceTouchesTest.cpp \
    ../tests/PerformanceTest/PerformanceTextureTest.cpp \
    ../tests/PerformanceTest/PerformanceTest.cpp \
    ../tests/PerformanceTest/PerformanceSpriteTest.cpp \
    ../tests/PerformanceTest/PerformanceParticleTest.cpp \
    ../tests/PerformanceTest/PerformanceNodeChildrenTest.cpp \
    ../tests/PerformanceTest/PerformanceTouchesTest.cpp \
    ../tests/PerformanceTest/PerformanceTextureTest.cpp \
    ../tests/PerformanceTest/PerformanceTest.cpp \
    ../tests/PerformanceTest/PerformanceSpriteTest.cpp \
    ../tests/PerformanceTest/PerformanceParticleTest.cpp \
    ../tests/PerformanceTest/PerformanceNodeChildrenTest.cpp \
    ../tests/ProgressActionsTest/ProgressActionsTest.cpp \
    ../tests/ParticleTest/ParticleTest.cpp \
    ../tests/ProgressActionsTest/ProgressActionsTest.cpp \
    ../tests/RenderTextureTest/RenderTextureTest.cpp \
    ../tests/RotateWorldTest/RotateWorldTest.cpp \
    ../tests/SceneTest/SceneTest.cpp \
    ../tests/SceneTest/SceneTest.cpp \
    ../tests/SchedulerTest/SchedulerTest.cpp \
    ../tests/SpriteTest/SpriteTest.cpp \
    ../tests/TextInputTest/TextInputTest.cpp \
    ../tests/Texture2dTest/Texture2dTest.cpp \
    ../tests/TextureCacheTest/TextureCacheTest.cpp \
    ../tests/TileMapTest/TileMapTest.cpp \
    ../tests/TouchesTest/TouchesTest.cpp \
    ../tests/TouchesTest/Paddle.cpp \
    ../tests/TouchesTest/Ball.cpp \
    ../tests/TransitionsTest/TransitionsTest.cpp \
    ../tests/UserDefaultTest/UserDefaultTest.cpp \
    ../tests/ZwoptexTest/ZwoptexTest.cpp
