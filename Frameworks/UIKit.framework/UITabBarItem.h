/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIView, NSString, UIImage, UIColor;

@interface UITabBarItem : UIBarItem  {
    NSString *_title;
    SEL _action;
    id _target;
    UIImage *_templateImage;
    UIImage *_selectedTemplateImage;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _imageInsets;
    NSString *_badgeValue;
    UIView *_view;
    int _tag;
    id _appearanceStorage;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int animatedBadge : 1; 
        unsigned int customSelectedImage : 1; 
        unsigned int customUnselectedImage : 1; 
    } _tabBarItemFlags;
    int _barMetrics;
    int _imageStyle;
    UIColor *_tintColor;
}

@property(retain) UIView * view;
@property BOOL viewIsCustom;
@property BOOL animatedBadge;
@property(retain) UIImage * unselectedImage;
@property SEL action;
@property id target;
@property(retain) UIImage * selectedImage;
@property(copy) NSString * badgeValue;
@property(setter=_setBarMetrics:) int _barMetrics;
@property(setter=_setImageStyle:) int _imageStyle;
@property(setter=_setTintColor:,retain) UIColor * _tintColor;

+ (id)_appearanceBlindViewClasses;

- (void)setTitle:(id)arg1;
- (id)title;
- (id)nextResponder;
- (BOOL)_isSelected;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setImage:(id)arg1;
- (id)image;
- (id)init;
- (void)setTarget:(id)arg1;
- (void)dealloc;
- (id)_updateImageWithTintColor:(id)arg1 isSelected:(BOOL)arg2 getImageOffset:(struct UIOffset { float x1; float x2; }*)arg3;
- (void)setUnselectedImage:(id)arg1;
- (BOOL)animatedBadge;
- (void)setAnimatedBadge:(BOOL)arg1;
- (void)setViewIsCustom:(BOOL)arg1;
- (id)_internalTemplateImages;
- (id)finishedUnselectedImage;
- (id)finishedSelectedImage;
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (void)_setInternalTemplateImage:(id)arg1;
- (void)_setInternalTitle:(id)arg1;
- (struct UIOffset { float x1; float x2; })titlePositionAdjustment;
- (void)setTitlePositionAdjustment:(struct UIOffset { float x1; float x2; })arg1;
- (BOOL)viewIsCustom;
- (void)_updateViewForIdiom:(int)arg1;
- (void)_updateButtonForTintColor:(id)arg1 selected:(BOOL)arg2;
- (void)_updateViewForIdiom:(int)arg1 positionItems:(BOOL)arg2;
- (id)_createViewForTabBar:(id)arg1 showingBadge:(BOOL)arg2 idiom:(int)arg3;
- (int)_imageStyle;
- (void)_setImageStyle:(int)arg1;
- (void)_setBarMetrics:(int)arg1;
- (void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned int)arg3;
- (id)_createViewForTabBar:(id)arg1 showingBadge:(BOOL)arg2 withTint:(BOOL)arg3 idiom:(int)arg4;
- (int)_barMetrics;
- (void)_updateToMatchCurrentState;
- (void)_setSelected:(BOOL)arg1;
- (void)setSelectedImage:(id)arg1;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (id)_internalTemplateImage;
- (id)badgeValue;
- (id)_internalTitle;
- (id)initWithTabBarSystemItem:(int)arg1 tag:(int)arg2;
- (void)setBadgeValue:(id)arg1;
- (id)unselectedImage;
- (id)selectedImage;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(int)arg3;
- (void)setAction:(SEL)arg1;
- (id)_tintColor;
- (void)_setTintColor:(id)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (int)systemItem;
- (BOOL)isSystemItem;
- (void)_updateView;
- (int)tag;
- (void)setTag:(int)arg1;
- (void)setView:(id)arg1;
- (SEL)action;
- (id)view;
- (id)target;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;

@end
