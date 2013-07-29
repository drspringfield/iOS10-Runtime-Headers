/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPolylineOverlay, GEOMapRegion, NSMutableSet, NSSet;

@interface VKPolylineGroupOverlay : NSObject <VKOverlay> {
    NSMutableSet *_polylines;
    GEOMapRegion *_boundingMapRegion;
    struct __CFSet { } *_observers;
    VKPolylineOverlay *_selectedPolyline;
}

@property(readonly) NSSet * polylines;
@property(retain) VKPolylineOverlay * selectedPolyline;
@property(readonly) GEOMapRegion * boundingMapRegion;
@property(readonly) struct { double x1; double x2; } coordinate;


- (id)selectedPolyline;
- (id)polylines;
- (void)setSelectedPolyline:(id)arg1;
- (void)removePolyline:(id)arg1;
- (void)addPolyline:(id)arg1;
- (void)_updateBoundingMapRegion;
- (id)boundingMapRegion;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;

@end
