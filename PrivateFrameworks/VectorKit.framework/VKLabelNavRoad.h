/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class VKLabelNavJunction, NSString, VKLabelTile, VKLabelNavRoadLabel;

@interface VKLabelNavRoad : NSObject <VKLabelNavFeature> {
    VKLabelTile *_tile;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; int x6; unsigned int x7; unsigned int x8; struct BRectImp<float> { struct Vec2Imp<float> { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct Vec2Imp<float> { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; struct { /* ? */ } *x10; struct { unsigned short x_11_1_1[2]; unsigned short x_11_1_2[2]; } x11; unsigned char x12; } *_data;
    int _vertexIndexA;
    int _vertexIndexB;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; } *_junctionA;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; } *_junctionB;
    VKLabelNavJunction *_navJunctionA;
    struct vector<geo::Vec2Imp<double>, vk_allocator<geo::Vec2Imp<double> > > { 
        struct Vec2Imp<double> {} *__begin_; 
        struct Vec2Imp<double> {} *__end_; 
        struct __compressed_pair<geo::Vec2Imp<double> *, vk_allocator<geo::Vec2Imp<double> > > { 
            struct Vec2Imp<double> {} *__first_; 
        } __end_cap_; 
    } _simplifiedPoints;
    struct Vec2Imp<float> { 
        float x; 
        float y; 
    } _direction;
    BOOL _isRoadLabelUnique;
    BOOL _isOnRoute;
    BOOL _isStartOfRoadName;
    BOOL _isInGuidance;
    BOOL _isGuidanceStepStart;
    BOOL _areLabelsDisabled;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    } _routeOffset;
    float _routeCrossProduct;
    int _intraRoadPriority;
    double _length;
    NSString *_name;
    NSString *_shieldDisplayGroup;
    NSString *_shieldGroup;
    VKLabelNavRoadLabel *_roadSign;
    VKLabelNavRoadLabel *_roadShield;
    BOOL _areNavStylesInitialized;
    BOOL _hasVisibleSigns;
    BOOL _hasVisibleShields;
    BOOL _suppressRoadSignIfShieldPresent;
}

@property(readonly) VKLabelTile * tile;
@property(readonly) NSString * name;
@property(readonly) const char * cstrName;
@property(readonly) NSString * shieldDisplayGroup;
@property(readonly) NSString * shieldGroup;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }* junctionB;
@property(readonly) VKLabelNavJunction * navJunctionA;
@property struct Vec2Imp<float> { float x1; float x2; } direction;
@property BOOL isOnRoute;
@property BOOL isStartOfRoadName;
@property BOOL isInGuidance;
@property BOOL isGuidanceStepStart;
@property BOOL areLabelsDisabled;
@property struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property float routeCrossProduct;
@property int intraRoadPriority;
@property BOOL isRoadLabelUnique;
@property(readonly) BOOL isAwayFromRoute;
@property(readonly) BOOL suppressRoadSignIfShieldPresent;
@property(readonly) BOOL isRamp;
@property(readonly) BOOL isOnewayToJunction;
@property(readonly) int roadClass;
@property(readonly) int roadSignAlignment;


- (BOOL)suppressRoadSignIfShieldPresent;
- (id)navJunctionA;
- (void)setIsRoadLabelUnique:(BOOL)arg1;
- (BOOL)isRoadLabelUnique;
- (void)setAreLabelsDisabled:(BOOL)arg1;
- (BOOL)areLabelsDisabled;
- (void)setIntraRoadPriority:(int)arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; struct { /* ? */ } *x5; }*)junctionB;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setRouteCrossProduct:(float)arg1;
- (float)routeCrossProduct;
- (void)setIsGuidanceStepStart:(BOOL)arg1;
- (void)setIsInGuidance:(BOOL)arg1;
- (void)setIsStartOfRoadName:(BOOL)arg1;
- (void)setIsOnRoute:(BOOL)arg1;
- (void)appendSimplifiedWorldRoadPoints:(struct vector<geo::Vec2Imp<double>, vk_allocator<geo::Vec2Imp<double> > > { struct Vec2Imp<double> {} *x1; struct Vec2Imp<double> {} *x2; struct __compressed_pair<geo::Vec2Imp<double> *, vk_allocator<geo::Vec2Imp<double> > > { struct Vec2Imp<double> {} *x_3_1_1; } x3; }*)arg1;
- (void)recreateRoadSignWithAlignment:(int)arg1 navContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg2;
- (void)createLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 minRouteDistance:(float)arg6 roadGraph:(id)arg7;
- (id)shieldGroup;
- (BOOL)hasVisibleShields;
- (BOOL)hasVisibleSigns;
- (BOOL)matchesRoad:(id)arg1;
- (BOOL)matchesRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (void)getRoadEdge:(struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1;
- (BOOL)isOnewayToJunction;
- (void)prepareStyleVarsWithContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1;
- (const char *)cstrName;
- (id)initWithRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 navJunctionA:(id)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 tile:(id)arg4;
- (BOOL)isGuidanceStepStart;
- (int)intraRoadPriority;
- (BOOL)isInGuidance;
- (BOOL)isStartOfRoadName;
- (id)shieldDisplayGroup;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)clearRoadSign;
- (id)_newLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1 isShieldLabel:(BOOL)arg2 worldPoint:(struct VKPoint { double x1; double x2; double x3; })arg3 alignment:(int)arg4;
- (int)roadSignAlignment;
- (BOOL)_findLabelAnchorPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg1 isShieldLabel:(BOOL)arg2 desiredOffsetDistance:(float)arg3 maxOffsetDistance:(float)arg4 minJunctionDistance:(float)arg5 roadGraph:(id)arg6;
- (float)_findRoadOffsetForDistanceToRay:(float)arg1 rayStart:(struct VKPoint { double x1; double x2; double x3; })arg2 rayVector:(struct Vec2Imp<float> { float x1; float x2; })arg3 roadGraph:(id)arg4;
- (id)labelWithType:(BOOL)arg1;
- (BOOL)_worldPointForRoadOffset:(float)arg1 worldPoint:(struct VKPoint { double x1; double x2; double x3; }*)arg2;
- (BOOL)isOnRoute;
- (void)_worldRoadPoints:(struct vector<geo::Vec2Imp<double>, vk_allocator<geo::Vec2Imp<double> > > { struct Vec2Imp<double> {} *x1; struct Vec2Imp<double> {} *x2; struct __compressed_pair<geo::Vec2Imp<double> *, vk_allocator<geo::Vec2Imp<double> > > { struct Vec2Imp<double> {} *x_3_1_1; } x3; }*)arg1;
- (BOOL)isAwayFromRoute;
- (id)tile;
- (int)roadClass;
- (BOOL)isRamp;
- (BOOL)hasShield;
- (double)length;
- (id)name;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (struct Vec2Imp<float> { float x1; float x2; })direction;
- (void)setDirection:(struct Vec2Imp<float> { float x1; float x2; })arg1;

@end
