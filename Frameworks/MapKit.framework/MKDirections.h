/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEODirectionsRouteRequest, MKDirectionsRequest, GEOQuickETARequester, GEOQuickETARequest, <MKLocationManagerOperation>;

@interface MKDirections : NSObject  {
    MKDirectionsRequest *_request;
    GEODirectionsRouteRequest *_geoRequest;
    GEOQuickETARequest *_etaRequest;
    GEOQuickETARequester *_etaRequester;
    <MKLocationManagerOperation> *_locationOperation;
}

@property(getter=isCalculating,readonly) BOOL calculating;


- (void)calculateETAWithCompletionHandler:(id)arg1;
- (void)calculateDirectionsWithCompletionHandler:(id)arg1;
- (void)_calculateETAWithCompletionHandler:(id)arg1;
- (void)_establishCurrentLocationAndThen:(id)arg1;
- (BOOL)isCalculating;
- (void)_cleanupLocationOperation;
- (void)dealloc;
- (void)cancel;
- (id)initWithRequest:(id)arg1;

@end
