/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class PKPhysicsWorld, SKPhysicsWorld, UIColor, SKView, NSMutableDictionary;

@interface SKScene : SKEffectNode  {
    double _lastUpdate;
    double _pausedTime;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _visibleRect;
    int _scaleMode;
    NSMutableDictionary *_touchMap;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounds;
    BOOL _isSetup;
    BOOL _usesExplicitUpdate;
    BOOL _usesExplicitRender;
    id _view;
    BOOL __needsUpdate;
    BOOL __needsRender;
    SKPhysicsWorld *_physicsWorld;
    PKPhysicsWorld *__pkPhysicsWorld;
}

@property BOOL _usesExplicitUpdate;
@property BOOL _usesExplicitRender;
@property struct CGSize { float x1; float x2; } size;
@property int scaleMode;
@property(retain) UIColor * backgroundColor;
@property struct CGPoint { float x1; float x2; } anchorPoint;
@property(readonly) SKPhysicsWorld * physicsWorld;
@property(readonly) SKView * view;
@property BOOL _needsUpdate;
@property BOOL _needsRender;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } visibleRect;
@property struct CGSize { float x1; float x2; } visibleRectSize;
@property struct CGPoint { float x1; float x2; } visibleRectCenter;
@property(retain) PKPhysicsWorld * _pkPhysicsWorld;

+ (id)sceneWithContentsOfFile:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)sceneWithSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)sceneWithContentsOfFile:(id)arg1;

- (void)_setNeedsRender;
- (void)_setNeedsUpdate;
- (BOOL)_usesExplicitRender;
- (BOOL)_usesExplicitUpdate;
- (id)_pkPhysicsWorld;
- (void)set_needsRender:(BOOL)arg1;
- (BOOL)_needsRender;
- (void)set_needsUpdate:(BOOL)arg1;
- (BOOL)_needsUpdate;
- (void)willMoveFromView:(id)arg1;
- (void)_didMoveToView:(id)arg1;
- (struct CGPoint { float x1; float x2; })visibleRectCenter;
- (void)setVisibleRectCenter:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })visibleRectSize;
- (void)setVisibleRectSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPointToView:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertPointFromView:(struct CGPoint { float x1; float x2; })arg1;
- (void)didSimulatePhysics;
- (void)didEvaluateActions;
- (void)didMoveToView:(id)arg1;
- (void)didChangeSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)set_usesExplicitUpdate:(BOOL)arg1;
- (void)set_usesExplicitRender:(BOOL)arg1;
- (void)set_pkPhysicsWorld:(id)arg1;
- (id)physicsWorld;
- (void)setScaleMode:(int)arg1;
- (int)scaleMode;
- (void)setBackgroundColor:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)backgroundColor;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (id)initWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)update:(double)arg1;
- (id)view;
- (struct CGPoint { float x1; float x2; })position;
- (void)_update:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
