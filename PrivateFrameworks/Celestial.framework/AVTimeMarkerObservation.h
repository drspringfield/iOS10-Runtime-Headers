/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSArray;

@interface AVTimeMarkerObservation : NSObject  {
    id _observer;
    NSArray *_times;
    id _context;
    int _currentIndex;
}


- (double)prevInterestingTime;
- (double)nextInterestingTime;
- (BOOL)gotoTime:(double)arg1;
- (id)initWithObserver:(id)arg1 times:(id)arg2 context:(id)arg3 currentIndex:(int)arg4;
- (id)context;
- (void)dealloc;
- (id)observer;
- (int)currentIndex;

@end
