/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAbstractTransitionLayoutAttributes : UICollectionViewLayoutAttributes  {
    struct CGPoint { 
        float x; 
        float y; 
    } _extrapolationReferencePoint;
    double _progress;
}

@property struct CGPoint { float x1; float x2; } extrapolationReferencePoint;
@property double progress;


- (void)setExtrapolationReferencePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })rubberbandFromInitialPoint:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 withExtrapolatedPoint:(struct CGPoint { float x1; float x2; })arg3;
- (struct CGPoint { float x1; float x2; })extrapolatedPointFromReferencePointToPoint:(struct CGPoint { float x1; float x2; })arg1 forProgress:(double)arg2;
- (float)_rubberbandFromFloat:(float)arg1 toFloat:(float)arg2 withExtrapolatedFloat:(float)arg3;
- (struct CGPoint { float x1; float x2; })extrapolationReferencePoint;
- (void)updateForProgress;
- (double)progress;
- (void)setProgress:(double)arg1;

@end
