/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIFont, _UILabelScaledMetrics, NSAttributedString, NSString, NSMutableAttributedString, NSMutableDictionary, UIColor;

@interface UILabel : UIView <NSCoding> {
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    UIColor *_highlightedColor;
    int _numberOfLines;
    int _measuredNumberOfLines;
    float _lastLineBaseline;
    float _minimumScaleFactor;
    NSMutableAttributedString *_attributedText;
    NSAttributedString *_synthesizedAttributedText;
    NSMutableDictionary *_defaultAttributes;
    float _minimumFontSize;
    int _lineSpacing;
    id _layout;
    _UILabelScaledMetrics *_scaledMetrics;
    struct { 
        unsigned int unused1 : 3; 
        unsigned int highlighted : 1; 
        unsigned int autosizeTextToFit : 1; 
        unsigned int autotrackTextToFit : 1; 
        unsigned int baselineAdjustment : 2; 
        unsigned int unused2 : 2; 
        unsigned int enabled : 1; 
        unsigned int wordRoundingEnabled : 1; 
        unsigned int explicitAlignment : 1; 
        unsigned int marqueeEnabled : 1; 
        unsigned int marqueeRunable : 1; 
        unsigned int marqueeRequired : 1; 
        unsigned int drawsLetterpress : 1; 
        unsigned int unused3 : 1; 
        unsigned int usesExplicitPreferredMaxLayoutWidth : 1; 
        unsigned int determiningPreferredMaxLayoutWidth : 1; 
        unsigned int inSecondConstraintsPass : 1; 
        unsigned int drawsDebugBaselines : 1; 
        unsigned int explicitBaselineOffset : 1; 
        unsigned int usesSimpleTextEffects : 1; 
    } _textLabelFlags;
    float _preferredMaxLayoutWidth;
}

@property(readonly) float _capOffsetFromBoundsTop;
@property(readonly) float _firstLineBaselineOffsetFromBoundsTop;
@property(setter=_setFirstLineCapFrameOriginY:) float _firstLineCapFrameOriginY;
@property(setter=_setFirstLineBaselineFrameOriginY:) float _firstLineBaselineFrameOriginY;
@property(setter=_setLastLineBaselineFrameOriginY:) float _lastLineBaselineFrameOriginY;
@property(setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
@property(copy) NSString * text;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property int textAlignment;
@property int lineBreakMode;
@property(copy) NSAttributedString * attributedText;
@property(retain) UIColor * highlightedTextColor;
@property(getter=isHighlighted) BOOL highlighted;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(getter=isEnabled) BOOL enabled;
@property int numberOfLines;
@property BOOL adjustsFontSizeToFitWidth;
@property BOOL adjustsLetterSpacingToFitWidth;
@property float minimumFontSize;
@property int baselineAdjustment;
@property float minimumScaleFactor;
@property float preferredMaxLayoutWidth;
@property(readonly) float _lastLineBaseline;
@property int lineSpacing;
@property(getter=_synthesizedAttributedText,setter=_setSynthesizedAttributedText:,retain) NSAttributedString * _synthesizedAttributedText;

+ (struct CGSize { float x1; float x2; })_legacy_adjustSizeForWebKitConstraining:(struct CGSize { float x1; float x2; })arg1 withFont:(id)arg2;
+ (id)_defaultAttributes;
+ (id)defaultFont;

- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setMinimumFontSize:(float)arg1;
- (id)text;
- (void)setLineSpacing:(int)arg1;
- (void)setLineBreakMode:(int)arg1;
- (int)lineSpacing;
- (int)lineBreakMode;
- (id)font;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (id)color;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)minimumFontSize;
- (id)_image;
- (void)setMinimumScaleFactor:(float)arg1;
- (float)minimumScaleFactor;
- (void)_commonInit;
- (void)_setUsesSimpleTextEffects:(BOOL)arg1;
- (void)_setDrawsDebugBaselines:(BOOL)arg1;
- (BOOL)_drawsDebugBaselines;
- (BOOL)_usesSimpleTextEffects;
- (void)dealloc;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
- (struct CGSize { float x1; float x2; })rawSize;
- (void)setRawSize:(struct CGSize { float x1; float x2; })arg1;
- (void)drawContentsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)centersHorizontally;
- (void)setCentersHorizontally:(BOOL)arg1;
- (void)setColor:(id)arg1;
- (BOOL)autotrackTextToFit;
- (void)setAutotrackTextToFit:(BOOL)arg1;
- (void)_setColor:(id)arg1;
- (void)_setLastLineBaselineFrameOriginY:(float)arg1;
- (float)_lastLineBaselineFrameOriginY;
- (void)_setFirstLineBaselineFrameOriginY:(float)arg1;
- (float)_firstLineBaselineFrameOriginY;
- (void)_setFirstLineCapFrameOriginY:(float)arg1;
- (float)_firstLineCapFrameOriginY;
- (float)_firstLineBaselineOffsetFromBoundsTop;
- (float)_capOffsetFromBoundsTop;
- (float)preferredMaxLayoutWidth;
- (BOOL)drawsUnderline;
- (void)setDrawsUnderline:(BOOL)arg1;
- (BOOL)drawsLetterpress;
- (void)setDrawsLetterpress:(BOOL)arg1;
- (void)setMarqueeEnabled:(BOOL)arg1;
- (BOOL)_shouldDrawUnderlinesLikeWebKit;
- (void)_setWordRoundingEnabled:(BOOL)arg1;
- (void)_setInSecondConstraintsPass:(BOOL)arg1;
- (int)baselineAdjustment;
- (void)setAdjustsLetterSpacingToFitWidth:(BOOL)arg1;
- (float)shadowBlur;
- (void)setShadowBlur:(float)arg1;
- (void)_setShadowUIOffset:(struct UIOffset { float x1; float x2; })arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)_invalidateDefaultAttributes;
- (void)_setDefaultAttributes:(id)arg1;
- (void)setPreferredMaxLayoutWidth:(float)arg1;
- (BOOL)_drawsUnderline;
- (void)_stopMarqueeWithRedisplay:(BOOL)arg1;
- (void)_startMarquee;
- (BOOL)marqueeRunning;
- (void)_coordinateBeginTimeForMarqueeAnimations:(double)arg1;
- (float)_maximumMarqueeTextWidth;
- (id)_siblingMarqueeLabels;
- (void)setMarqueeRunning:(BOOL)arg1;
- (int)numberOfLines;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_isTextFieldCenteredLabel;
- (void)_startMarqueeIfNecessary;
- (void)_drawFullMarqueeTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })textSizeForWidth:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(int)arg2;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithEngine:(id)arg1;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (float)_preferredMaxLayoutWidth;
- (void)_drawTextInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 baselineCalculationOnly:(BOOL)arg2;
- (void)_setShadow:(id)arg1;
- (id)highlightedTextColor;
- (BOOL)_updateScaledMetricsForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_invalidateTextSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 limitedToNumberOfLines:(int)arg2 includingShadow:(BOOL)arg3;
- (void)setLetterpressStyle:(id)arg1;
- (BOOL)adjustsLetterSpacingToFitWidth;
- (BOOL)_attributedStringHasAttributesNotCoveredByPrimitives;
- (void)_setTextAlignment:(int)arg1;
- (void)_setText:(id)arg1;
- (void)_invalidateAsNeededForNewSize:(struct CGSize { float x1; float x2; })arg1 oldSize:(struct CGSize { float x1; float x2; })arg2;
- (id)currentTextColor;
- (id)_compatibilityAttributedString;
- (id)letterpressStyle;
- (id)_shadow;
- (void)_setSynthesizedAttributedText:(id)arg1;
- (id)_defaultAttributes;
- (float)_actualScaleFactor;
- (id)_associatedScalingLabel;
- (id)_disabledFontColor;
- (struct CGSize { float x1; float x2; })textSize;
- (id)_stringDrawingContext;
- (void)updateConstraints;
- (int)_measuredNumberOfLines;
- (void)setBaselineAdjustment:(int)arg1;
- (void)_setMinimumFontSize:(float)arg1;
- (void)setNumberOfLines:(int)arg1;
- (int)textAlignment;
- (id)textColor;
- (void)setTextAlignment:(int)arg1;
- (BOOL)adjustsFontSizeToFitWidth;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (id)attributedText;
- (float)_lastLineBaseline;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)_setFont:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (id)_synthesizedAttributedText;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)setFont:(id)arg1;
- (void)_setLineBreakMode:(int)arg1;
- (id)_scriptingInfo;
- (float)_baselineOffsetFromBottom;
- (float)_minimumFontSize;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)_setTextColor:(id)arg1;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (id)textAttributes;
- (BOOL)labelTextIsTruncated;

@end
