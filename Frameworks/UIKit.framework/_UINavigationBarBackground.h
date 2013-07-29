/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, _UIBackdropView, UIColor, _UINavigationBarAppearanceStorage, UIView;

@interface _UINavigationBarBackground : _UIBarBackgroundImageView  {
    UIColor *_barTintColor;
    _UINavigationBarAppearanceStorage *_appearanceStorage;
    UIImageView *_shadowView;
    _UIBackdropView *_adaptiveBackdrop;
    struct { 
        unsigned int barTranslucence : 3; 
        unsigned int barStyle : 3; 
        unsigned int backgroundImageNeedsUpdate : 1; 
        unsigned int isContainedInPopover : 1; 
        unsigned int barWantsAdaptiveBackdrop : 1; 
    } _navbarFlags;
}

@property int barStyle;
@property(retain) UIColor * barTintColor;
@property(retain) _UINavigationBarAppearanceStorage * appearanceStorage;
@property(setter=_setShadowView:,retain) UIView * _shadowView;
@property(getter=isTranslucent) BOOL translucent;
@property BOOL barWantsAdaptiveBackdrop;


- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)_customShadowImageForSearchBar;
- (void)_setShadowView:(id)arg1;
- (BOOL)barWantsAdaptiveBackdrop;
- (id)_currentCustomBackgroundDedicatedToBarMetrics:(int*)arg1 barPosition:(int*)arg2;
- (id)barTintColor;
- (void)_setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forceUpdateBackgroundImage:(BOOL)arg2;
- (id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1;
- (id)_currentCustomBackground;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)setBarTintColor:(id)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (int)barStyle;
- (void)setBarWantsAdaptiveBackdrop:(BOOL)arg1;
- (void)setBarStyle:(int)arg1;
- (void)updateBackgroundImage;
- (id)appearanceStorage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 barStyle:(int)arg2 barTintColor:(id)arg3 appearance:(id)arg4 barTranslucence:(int)arg5;
- (id)_shadowView;
- (void)setAppearanceStorage:(id)arg1;
- (void)didMoveToSuperview;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)isTranslucent;

@end
