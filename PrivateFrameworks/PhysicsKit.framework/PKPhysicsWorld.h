/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, NSMutableDictionary, <PKPhysicsContactDelegate>;

@interface PKPhysicsWorld : NSObject <NSCoding> {
    struct b2World { struct b2BlockAllocator { struct b2Chunk {} *x_1_1_1; int x_1_1_2; int x_1_1_3; struct b2Block {} *x_1_1_4[14]; } x1; struct b2StackAllocator { BOOL x_2_1_1[102400]; int x_2_1_2; int x_2_1_3; int x_2_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; boolx_5_2_3; } x_2_1_5[32]; int x_2_1_6; } x2; int x3; struct b2ContactManager { struct b2BroadPhase { struct b2DynamicTree { int x_1_3_1; struct b2TreeNode {} *x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; unsigned int x_1_3_6; int x_1_3_7; } x_1_2_1; int x_1_2_2; int *x_1_2_3; int x_1_2_4; int x_1_2_5; struct b2Pair {} *x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; } x_4_1_1; struct b2Contact {} *x_4_1_2; int x_4_1_3; struct b2ContactFilter {} *x_4_1_4; struct b2ContactListener {} *x_4_1_5; struct b2BlockAllocator {} *x_4_1_6; } x4; struct b2Body {} *x5; struct b2Joint {} *x6; int x7; int x8; struct b2Vec2 { float x_9_1_1; float x_9_1_2; } x9; boolx10; struct b2DestructionListener {} *x11; struct b2Draw {} *x12; float x13; boolx14; boolx15; boolx16; boolx17; float x18; } *_world;
    struct b2Vec2 { 
        float x; 
        float y; 
    } _gravity;
    bool_doSleep;
    double _accumulatedDt;
    struct PKContactListener { 
        int (**_vptr$b2ContactListener)(); 
        NSMutableDictionary *_contacts; 
        <PKPhysicsContactDelegate> *_contactDelegate; 
    } _contactListener;
    float _speed;
    NSMutableArray *_bodies;
    NSMutableArray *_joints;
    NSMutableArray *_postStepBlocks;
}

@property bool _doSleep;
@property(retain) NSMutableArray * _bodies;
@property struct b2World { struct b2BlockAllocator { struct b2Chunk {} *x_1_1_1; int x_1_1_2; int x_1_1_3; struct b2Block {} *x_1_1_4[14]; } x1; struct b2StackAllocator { BOOL x_2_1_1[102400]; int x_2_1_2; int x_2_1_3; int x_2_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; boolx_5_2_3; } x_2_1_5[32]; int x_2_1_6; } x2; int x3; struct b2ContactManager { struct b2BroadPhase { struct b2DynamicTree { int x_1_3_1; struct b2TreeNode {} *x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; unsigned int x_1_3_6; int x_1_3_7; } x_1_2_1; int x_1_2_2; int *x_1_2_3; int x_1_2_4; int x_1_2_5; struct b2Pair {} *x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; } x_4_1_1; struct b2Contact {} *x_4_1_2; int x_4_1_3; struct b2ContactFilter {} *x_4_1_4; struct b2ContactListener {} *x_4_1_5; struct b2BlockAllocator {} *x_4_1_6; } x4; struct b2Body {} *x5; struct b2Joint {} *x6; int x7; int x8; struct b2Vec2 { float x_9_1_1; float x_9_1_2; } x9; boolx10; struct b2DestructionListener {} *x11; struct b2Draw {} *x12; float x13; boolx14; boolx15; boolx16; boolx17; float x18; }* _world;
@property struct b2Vec2 { float x1; float x2; } _gravity;
@property struct CGPoint { float x1; float x2; } gravity;
@property float speed;
@property float velocityThreshold;
@property <PKPhysicsContactDelegate> * contactDelegate;

+ (id)world;

- (void)set_gravity:(struct b2Vec2 { float x1; float x2; })arg1;
- (void)set_doSleep:(bool)arg1;
- (void)set_bodies:(id)arg1;
- (id)_bodies;
- (bool)_doSleep;
- (struct b2Vec2 { float x1; float x2; })_gravity;
- (void)setCollisionDelegate:(id)arg1;
- (BOOL)hasBodies;
- (float)velocityThreshold;
- (void)setVelocityThreshold:(float)arg1;
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
- (void)set_world:(struct b2World { struct b2BlockAllocator { struct b2Chunk {} *x_1_1_1; int x_1_1_2; int x_1_1_3; struct b2Block {} *x_1_1_4[14]; } x1; struct b2StackAllocator { BOOL x_2_1_1[102400]; int x_2_1_2; int x_2_1_3; int x_2_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; boolx_5_2_3; } x_2_1_5[32]; int x_2_1_6; } x2; int x3; struct b2ContactManager { struct b2BroadPhase { struct b2DynamicTree { int x_1_3_1; struct b2TreeNode {} *x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; unsigned int x_1_3_6; int x_1_3_7; } x_1_2_1; int x_1_2_2; int *x_1_2_3; int x_1_2_4; int x_1_2_5; struct b2Pair {} *x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; } x_4_1_1; struct b2Contact {} *x_4_1_2; int x_4_1_3; struct b2ContactFilter {} *x_4_1_4; struct b2ContactListener {} *x_4_1_5; struct b2BlockAllocator {} *x_4_1_6; } x4; struct b2Body {} *x5; struct b2Joint {} *x6; int x7; int x8; struct b2Vec2 { float x_9_1_1; float x_9_1_2; } x9; boolx10; struct b2DestructionListener {} *x11; struct b2Draw {} *x12; float x13; boolx14; boolx15; boolx16; boolx17; float x18; }*)arg1;
- (void)_runBlockOutsideOfTimeStep:(id)arg1;
- (id)init;
- (id)copy;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)bodies;
- (BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned int)arg2 positionIterations:(unsigned int)arg3;
- (id)collisionDelegate;
- (void)removeBody:(id)arg1;
- (struct b2World { struct b2BlockAllocator { struct b2Chunk {} *x_1_1_1; int x_1_1_2; int x_1_1_3; struct b2Block {} *x_1_1_4[14]; } x1; struct b2StackAllocator { BOOL x_2_1_1[102400]; int x_2_1_2; int x_2_1_3; int x_2_1_4; struct b2StackEntry { char *x_5_2_1; int x_5_2_2; boolx_5_2_3; } x_2_1_5[32]; int x_2_1_6; } x2; int x3; struct b2ContactManager { struct b2BroadPhase { struct b2DynamicTree { int x_1_3_1; struct b2TreeNode {} *x_1_3_2; int x_1_3_3; int x_1_3_4; int x_1_3_5; unsigned int x_1_3_6; int x_1_3_7; } x_1_2_1; int x_1_2_2; int *x_1_2_3; int x_1_2_4; int x_1_2_5; struct b2Pair {} *x_1_2_6; int x_1_2_7; int x_1_2_8; int x_1_2_9; } x_4_1_1; struct b2Contact {} *x_4_1_2; int x_4_1_3; struct b2ContactFilter {} *x_4_1_4; struct b2ContactListener {} *x_4_1_5; struct b2BlockAllocator {} *x_4_1_6; } x4; struct b2Body {} *x5; struct b2Joint {} *x6; int x7; int x8; struct b2Vec2 { float x_9_1_1; float x_9_1_2; } x9; boolx10; struct b2DestructionListener {} *x11; struct b2Draw {} *x12; float x13; boolx14; boolx15; boolx16; boolx17; float x18; }*)_world;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
