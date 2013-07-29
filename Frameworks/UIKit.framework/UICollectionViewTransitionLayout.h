/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSMutableDictionary, UICollectionViewLayout;

@interface UICollectionViewTransitionLayout : UICollectionViewLayout  {
    UICollectionViewLayout *_fromLayout;
    UICollectionViewLayout *_toLayout;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _fromVisibleBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _toVisibleBounds;
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    BOOL _haveValidInfos;
    float _transitionProgress;
    NSMutableDictionary *_transitionInformationsDict;
    NSMutableDictionary *_currentLayoutInfos;
    BOOL _layoutIsValid;
    NSMutableArray *_disappearingLayoutAttributes;
    NSMutableArray *_appearingLayoutAttributes;
    float _accuracy;
}

@property float transitionProgress;
@property(readonly) UICollectionViewLayout * currentLayout;
@property(readonly) UICollectionViewLayout * nextLayout;


- (void)dealloc;
- (float)valueForAnimatedKey:(id)arg1;
- (void)updateValue:(float)arg1 forAnimatedKey:(id)arg2;
- (id)interpolatedLayoutAttributesFromLayoutAttributes:(id)arg1 toLayoutAttributes:(id)arg2 progress:(float)arg3;
- (float)transitionProgress;
- (id)nextLayout;
- (id)currentLayout;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2;
- (void)_finalizeLayoutTransition;
- (BOOL)_supportsAdvancedTransitionAnimations;
- (void)setTransitionProgress:(float)arg1;
- (void)_prepareForTransitionFromLayout:(id)arg1;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)_setCollectionView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_newVisibleBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_oldVisibleBounds;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (void)invalidateLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;

@end
