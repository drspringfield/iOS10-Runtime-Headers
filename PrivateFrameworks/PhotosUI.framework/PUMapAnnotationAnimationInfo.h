/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMapAnnotationAnimationInfo : NSObject  {
    BOOL _remove;
    id _annotation;
    id _destinationAnnotation;
    int _fadeType;
    id _annotationForCountSwap;
    int _reason;
    struct { 
        double latitude; 
        double longitude; 
    } _sourceCoordinate;
    struct { 
        double latitude; 
        double longitude; 
    } _destinationCoordinate;
}

@property(readonly) id annotation;
@property(readonly) id destinationAnnotation;
@property(readonly) struct { double x1; double x2; } sourceCoordinate;
@property(readonly) struct { double x1; double x2; } destinationCoordinate;
@property(readonly) int fadeType;
@property(readonly) BOOL remove;
@property(readonly) id annotationForCountSwap;
@property(readonly) int reason;


- (id)annotationForCountSwap;
- (int)fadeType;
- (struct { double x1; double x2; })destinationCoordinate;
- (struct { double x1; double x2; })sourceCoordinate;
- (id)destinationAnnotation;
- (id)initWithAnnotation:(id)arg1 destinationAnnotation:(id)arg2 sourceCoordinate:(struct { double x1; double x2; })arg3 destinationCoordinate:(struct { double x1; double x2; })arg4 fadeType:(int)arg5 remove:(BOOL)arg6 annotationForCountSwap:(id)arg7 reason:(int)arg8;
- (int)reason;
- (void).cxx_destruct;
- (id)annotation;
- (BOOL)remove;

@end
