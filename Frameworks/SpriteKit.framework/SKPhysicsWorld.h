/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class <SKPhysicsContactDelegate>;

@interface SKPhysicsWorld : NSObject <NSCoding> {
    float speed;
    <SKPhysicsContactDelegate> *_contactDelegate;
    struct CGPoint { 
        float x; 
        float y; 
    } _gravity;
}

@property struct CGPoint { float x1; float x2; } gravity;
@property float speed;
@property <SKPhysicsContactDelegate> * contactDelegate;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;

- (BOOL)hasBodies;
- (id)bodyAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2;
- (id)bodyInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)bodyAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)removeJoint:(id)arg1;
- (void)removeAllBodies;
- (void)removeAllJoints;
- (void)setContactDelegate:(id)arg1;
- (void)setSpeed:(float)arg1;
- (void)setGravity:(struct CGPoint { float x1; float x2; })arg1;
- (void)addJoint:(id)arg1;
- (void)addBody:(id)arg1;
- (id)contactDelegate;
- (float)speed;
- (struct CGPoint { float x1; float x2; })gravity;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2 usingBlock:(id)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint { float x1; float x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usingBlock:(id)arg2;
- (id).cxx_construct;
- (id)bodies;
- (BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned int)arg2 positionIterations:(unsigned int)arg3;
- (void)removeBody:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
