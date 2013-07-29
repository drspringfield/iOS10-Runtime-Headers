/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIActivityIndicatorView, UIImageView, UIView;

@interface CAMShutterButton : UIButton  {
    BOOL _pulsing;
    BOOL _spinning;
    BOOL __small;
    int _mode;
    UIView *__outerView;
    UIImageView *__outerImageView;
    UIView *__innerView;
    UIActivityIndicatorView *__progressActivityIndicatorView;
}

@property int mode;
@property(getter=isPulsing) BOOL pulsing;
@property(getter=isSpinning) BOOL spinning;
@property(getter=_isSmall,setter=_setSmall:) BOOL _small;
@property(readonly) UIView * _outerView;
@property(readonly) UIImageView * _outerImageView;
@property(readonly) UIView * _innerView;
@property(readonly) UIActivityIndicatorView * _progressActivityIndicatorView;

+ (id)smallShutterButton;
+ (id)shutterButton;

- (id)_progressActivityIndicatorView;
- (id)_outerImageView;
- (BOOL)_isSmall;
- (BOOL)isSpinning;
- (BOOL)isPulsing;
- (void)setPulsing:(BOOL)arg1;
- (BOOL)_isStopMode:(int)arg1;
- (id)_colorForMode:(int)arg1;
- (id)_innerView;
- (float)_borderWidthForMode:(int)arg1;
- (id)_outerView;
- (id)_outerImageForMode:(int)arg1;
- (BOOL)_shouldUseImageViewForMode:(int)arg1;
- (void)_updateSpinningAnimations;
- (void)_performModeSwitchAnimationFromMode:(int)arg1 toMode:(int)arg2 animated:(BOOL)arg3;
- (float)_cornerRadiusForMode:(int)arg1;
- (struct CGSize { float x1; float x2; })_sizeForMode:(int)arg1;
- (void)_commonCAMShutterButtonInitialization;
- (void)_updateOuterAndInnerLayers;
- (void)_setSmall:(BOOL)arg1;
- (void)setMode:(int)arg1 animated:(BOOL)arg2;
- (void)_performHighlightAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMode:(int)arg1;
- (void)dealloc;
- (void)setSpinning:(BOOL)arg1;
- (int)mode;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;

@end
