/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentInset;
    float _arrowHeight;
    struct CGSize { 
        float width; 
        float height; 
    } _preferredContentSize;
    unsigned int _preferredArrowDirections;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _containingFrame;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _containingFrameInsets;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _targetRect;
    BOOL _constrainToTargetRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    float _offset;
    unsigned int _arrowDirection;
    BOOL _preferLandscapeOrientations;
    BOOL _updatesEnabled;
    NSMutableArray *_candidates;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInset;
@property float arrowHeight;
@property struct CGSize { float x1; float x2; } preferredContentSize;
@property unsigned int preferredArrowDirections;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } containingFrame;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } containingFrameInsets;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } targetRect;
@property BOOL constrainToTargetRect;
@property BOOL preferLandscapeOrientations;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(readonly) float offset;
@property(readonly) unsigned int arrowDirection;
@property(getter=_updatesEnabled,setter=_setUpdatesEnabled:) BOOL updatesEnabled;

+ (id)_observationKeys;

- (void)setProperties:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (float)offset;
- (id)candidates;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)_updatesEnabled;
- (float)arrowHeight;
- (struct CGSize { float x1; float x2; })_popoverViewSizeForContentSize:(struct CGSize { float x1; float x2; })arg1 arrowDirection:(unsigned int)arg2;
- (BOOL)preferLandscapeOrientations;
- (BOOL)constrainToTargetRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })containingFrameInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })containingFrame;
- (unsigned int)preferredArrowDirections;
- (void)_updateOutputs;
- (void)setPreferLandscapeOrientations:(BOOL)arg1;
- (void)setConstrainToTargetRect:(BOOL)arg1;
- (void)setContainingFrameInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContainingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPreferredArrowDirections:(unsigned int)arg1;
- (void)setArrowHeight:(float)arg1;
- (void)_setUpdatesEnabled:(BOOL)arg1;
- (unsigned int)arrowDirection;
- (void)setTargetRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })targetRect;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
