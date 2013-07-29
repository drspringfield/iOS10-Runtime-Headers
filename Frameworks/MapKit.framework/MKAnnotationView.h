/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MKAnnotationManager, UICalloutView, VKAttributedRouteMatch, _MKAnnotationViewAnchor, UIView, UIImage, NSString, VKAnchorWrapper, <MKAnnotation>, MKUserLocationAnnotationViewProxy;

@interface MKAnnotationView : UIView <MKAnnotationRepresentation, MKLocatableObject> {
    BOOL _customTransformApplied;
    BOOL _internalTransformApplied;
    BOOL _animatingToCoordinate;
    BOOL _tracking;
    struct { 
        double latitude; 
        double longitude; 
    } _presentationCoordinate;
    double _presentationCourse;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _presentationCoordinateChangedCallback;

    MKUserLocationAnnotationViewProxy *_userLocationProxy;
    float _rotationRadians;
    _MKAnnotationViewAnchor *_anchor;
    VKAttributedRouteMatch *_routeMatch;
    float _mapRotationRadians;
    BOOL _explicitlyHidden;
    BOOL _hiddenForOffscreen;
    BOOL _hiddenForInvalidPoint;
    float _mapPitchRadians;
    int _mapDisplayStyle;
    MKAnnotationManager *_annotationManager;
    <MKAnnotation> *_annotation;
    UICalloutView *_calloutView;
    UIView *_leftCalloutAccessoryView;
    UIView *_rightCalloutAccessoryView;
    UIView *_detailCalloutAccessoryView;
    NSString *_reuseIdentifier;
    UIImage *_image;
    unsigned int _mapType;
    unsigned int _zIndex;
    struct CGPoint { 
        float x; 
        float y; 
    } _centerOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _calloutOffset;
    unsigned int _dragState;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _calloutHitTest;

    struct { 
        unsigned int disabled : 1; 
        unsigned int selected : 1; 
        unsigned int canShowCallout : 1; 
        unsigned int isHighlighted : 1; 
        unsigned int canDisplayDisclosureInCallout : 1; 
        unsigned int canDisplayPlacemarkInCallout : 1; 
        unsigned int draggable : 1; 
    } _flags;
    struct CGPoint { 
        float x; 
        float y; 
    } _leftCalloutOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _rightCalloutOffset;
}

@property(readonly) NSString * reuseIdentifier;
@property(retain) <MKAnnotation> * annotation;
@property(retain) UIImage * image;
@property struct CGPoint { float x1; float x2; } centerOffset;
@property struct CGPoint { float x1; float x2; } calloutOffset;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isHighlighted) BOOL highlighted;
@property(getter=isSelected) BOOL selected;
@property BOOL canShowCallout;
@property(retain) UIView * leftCalloutAccessoryView;
@property(retain) UIView * rightCalloutAccessoryView;
@property(getter=isDraggable) BOOL draggable;
@property unsigned int dragState;
@property(getter=_significantBounds,readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } significantBounds;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _significantFrame;
@property(retain) UIView * detailCalloutAccessoryView;
@property(setter=_setPresentationCoordinate:) struct { double x1; double x2; } _presentationCoordinate;
@property(setter=_setPresentationCoordinateChangedCallback:,copy) id _presentationCoordinateChangedCallback;
@property(setter=_setPresentationCourse:) double _presentationCourse;
@property(getter=_isAnimatingToCoordinate,setter=_setAnimatingToCoordinate:) BOOL _animatingToCoordinate;
@property(getter=_isTracking,setter=_setTracking:) BOOL _tracking;
@property(getter=_mapDisplayStyle,setter=_setMapDisplayStyle:) int mapDisplayStyle;
@property struct CGPoint { float x1; float x2; } leftCalloutOffset;
@property struct CGPoint { float x1; float x2; } rightCalloutOffset;
@property(copy) id _calloutHitTest;
@property(setter=_setAnnotationManager:) MKAnnotationManager * _annotationManager;
@property(readonly) VKAnchorWrapper * anchor;
@property(getter=_isHiddenForInvalidPoint,setter=_setHiddenForInvalidPoint:) BOOL hiddenForInvalidPoint;
@property(setter=_setRouteMatch:,retain) VKAttributedRouteMatch * _routeMatch;
@property(readonly) MKUserLocationAnnotationViewProxy * _userLocationProxy;
@property(getter=_mapRotationRadians,setter=_setMapRotationRadians:) float mapRotationRadians;
@property(getter=_mapPitchRadians,setter=_setMapPitchRadians:) float mapPitchRadians;
@property(readonly) struct { double x1; double x2; } coordinate;

+ (unsigned int)_selectedZIndex;
+ (unsigned int)_zIndex;
+ (id)_disclosureCalloutButton;
+ (id)droppedPinTitle;
+ (id)currentLocationTitle;
+ (BOOL)_followsTerrain;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (struct CGPoint { float x1; float x2; })centerOffset;
- (void)setCenterOffset:(struct CGPoint { float x1; float x2; })arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (struct CGPoint { float x1; float x2; })calloutOffset;
- (void)setDragState:(unsigned int)arg1 animated:(BOOL)arg2;
- (unsigned int)_zIndex;
- (BOOL)_isHiddenForInvalidPoint;
- (void)_setMapPitchRadians:(float)arg1;
- (float)_mapPitchRadians;
- (float)_mapRotationRadians;
- (id)_routeMatch;
- (struct CGPoint { float x1; float x2; })rightCalloutOffset;
- (id)_calloutHitTest;
- (BOOL)_isTracking;
- (BOOL)_isAnimatingToCoordinate;
- (void)_setPresentationCourse:(double)arg1;
- (double)_presentationCourse;
- (void)_setPresentationCoordinateChangedCallback:(id)arg1;
- (BOOL)_canChangeOrientation;
- (void)_transitionFrom:(int)arg1 to:(int)arg2 duration:(double)arg3;
- (void)_enableRotationForHeadingMode:(float)arg1;
- (void)_resetZIndexNotify:(BOOL)arg1;
- (void)_setCanDisplayPlacemarkInCallout:(BOOL)arg1;
- (BOOL)_canDisplayPlacemarkInCallout;
- (void)_setCanDisplayDisclosureInCallout:(BOOL)arg1;
- (BOOL)_canDisplayDisclosureInCallout;
- (void)_setTracking:(BOOL)arg1;
- (void)_setAnimatingToCoordinate:(BOOL)arg1;
- (void)_setPresentationCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)canShowCallout;
- (BOOL)_hasAlternateOrientation;
- (unsigned int)_orientationCount;
- (void)_userTrackingModeDidChange:(id)arg1;
- (void)_setZIndex:(unsigned int)arg1 notify:(BOOL)arg2;
- (id)_presentationCoordinateChangedCallback;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantBounds;
- (struct CGPoint { float x1; float x2; })_draggingDropOffset;
- (void)_setZIndex:(unsigned int)arg1;
- (void)setDragState:(unsigned int)arg1;
- (void)_resetZIndex;
- (id)_contentLayer;
- (void)_setRotationRadians:(float)arg1 withAnimation:(id)arg2;
- (void)_setMapDisplayStyle:(int)arg1;
- (void)_setMapType:(unsigned int)arg1;
- (void)setRightCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setLeftCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCalloutOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setMapRotationRadians:(float)arg1;
- (void)_didUpdatePosition;
- (void)_updateFromMap;
- (void)_setHiddenForInvalidPoint:(BOOL)arg1;
- (unsigned int)dragState;
- (struct CGPoint { float x1; float x2; })leftCalloutOffset;
- (id)_calloutView;
- (void)set_calloutHitTest:(id)arg1;
- (void)_setCalloutView:(id)arg1;
- (int)_mapDisplayStyle;
- (void)_setHiddenForOffscreen:(BOOL)arg1;
- (id)detailCalloutAccessoryView;
- (void)setDetailCalloutAccessoryView:(id)arg1;
- (id)rightCalloutAccessoryView;
- (void)setRightCalloutAccessoryView:(id)arg1;
- (id)leftCalloutAccessoryView;
- (void)setLeftCalloutAccessoryView:(id)arg1;
- (void)_setAnnotationManager:(id)arg1;
- (void)setCanShowCallout:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_significantFrame;
- (void)_setRouteMatch:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_mapkit_visibleRect;
- (struct { double x1; double x2; })_presentationCoordinate;
- (unsigned int)_mapType;
- (id)_annotationContainer;
- (id)_annotationManager;
- (id)_vkMarker;
- (id)_userLocationProxy;
- (BOOL)isDraggable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setDraggable:(BOOL)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setImage:(struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 16; unsigned int x_4_1_7 : 2; } x4; }*)arg1;
- (struct UIImage { Class x1; void *x2; float x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 16; unsigned int x_4_1_7 : 2; } x4; }*)image;
- (void)dealloc;
- (void)setAnnotation:(id)arg1;
- (id)annotation;
- (id)anchor;
- (BOOL)isPersistent;
- (id)_containerView;
- (void)setSelected:(BOOL)arg1;
- (void)prepareForReuse;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)reuseIdentifier;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;

@end
