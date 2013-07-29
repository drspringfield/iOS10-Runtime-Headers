/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKMapView, NSString;

@interface VKPerformanceTest : NSObject  {
    VKMapView *_mapView;
    BOOL _running;
    int _loopCounter;
    int _resultCount;
    struct VKPerformanceTestResult_struct { char *x1; float x2[5]; } *_results;
    NSString *_outputHeader;
}

+ (void)runWithMapView:(id)arg1 outputHeader:(id)arg2;

- (void)printResults;
- (void)runTest:(int)arg1 step:(int)arg2;
- (void)tick:(int)arg1;
- (id)initWithMapView:(id)arg1 outputHeader:(id)arg2;
- (void)loop;
- (void)dealloc;
- (void)abort;

@end
