/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEOMapAccess, <VKRoutePreloadSession>;

@interface VKMapMatcher : NSObject <GEOMapAccessRestrictions> {
    GEOMapAccess *_map;
    <VKRoutePreloadSession> *_routePreloader;
}

@property(retain) <VKRoutePreloadSession> * routePreloader;
@property(readonly) BOOL allowsNetworkTileLoad;

+ (id)mapMatcherOfType:(id)arg1;

- (void)setRoutePreloader:(id)arg1;
- (id)routePreloader;
- (id)matchLocation:(id)arg1 transportType:(int)arg2;
- (id)tilesAround:(struct { double x1; double x2; })arg1 radius:(double)arg2;
- (BOOL)allowsNetworkTileLoad;
- (id)init;
- (void)dealloc;

@end
