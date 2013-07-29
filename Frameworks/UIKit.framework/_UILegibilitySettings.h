/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, NSString;

@interface _UILegibilitySettings : NSObject  {
    int _style;
    UIColor *_contentColor;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_shadowColor;
    float _shadowRadius;
    float _shadowAlpha;
    float _imageOutset;
    NSString *_shadowCompositingFilterName;
}

@property int style;
@property(retain) UIColor * contentColor;
@property(retain) UIColor * primaryColor;
@property(retain) UIColor * secondaryColor;
@property(retain) UIColor * shadowColor;
@property float shadowRadius;
@property float shadowAlpha;
@property float imageOutset;
@property(copy) NSString * shadowCompositingFilterName;

+ (id)sharedInstanceForStyle:(int)arg1;

- (void)setStyle:(int)arg1;
- (void)setShadowRadius:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (id)shadowColor;
- (float)shadowRadius;
- (int)style;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)shadowCompositingFilterName;
- (float)imageOutset;
- (float)shadowAlpha;
- (id)secondaryColor;
- (id)initWithStyle:(int)arg1 primaryColor:(id)arg2 secondaryColor:(id)arg3 shadowColor:(id)arg4;
- (id)initWithContentColor:(id)arg1;
- (id)primaryColor;
- (void)setShadowCompositingFilterName:(id)arg1;
- (void)setImageOutset:(float)arg1;
- (void)setShadowAlpha:(float)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setPropertiesForStyle:(int)arg1;
- (id)initWithStyle:(int)arg1 contentColor:(id)arg2;
- (id)contentColor;
- (void)setContentColor:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (id)sb_description;
- (id)sb_styleString;

@end
