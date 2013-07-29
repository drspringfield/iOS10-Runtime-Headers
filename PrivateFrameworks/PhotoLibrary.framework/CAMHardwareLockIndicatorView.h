/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSDictionary;

@interface CAMHardwareLockIndicatorView : UIView  {
    BOOL _focusLocked;
    BOOL _exposureLocked;
    NSDictionary *__indicatorTextAttributes;
}

@property(getter=isFocusLocked) BOOL focusLocked;
@property(getter=isExposureLocked) BOOL exposureLocked;
@property(readonly) NSDictionary * _indicatorTextAttributes;


- (BOOL)isExposureLocked;
- (BOOL)isFocusLocked;
- (struct CGSize { float x1; float x2; })_roundedSizeOfText:(id)arg1 withAttributes:(id)arg2;
- (id)_indicatorTextAttributes;
- (id)_textForCurrentHardwareState;
- (void)_commonCAMHardwareLockIndicatorViewInitialization;
- (void)_updateFromHardwareChange;
- (void)setExposureLocked:(BOOL)arg1;
- (void)setFocusLocked:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithCoder:(id)arg1;

@end
