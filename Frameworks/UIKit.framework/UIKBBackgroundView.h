/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBRenderConfig, UIKBTree, NSString, NSObject;

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {
    UIKBTree *_keyplane;
    int _visualStyle;
    NSObject *_geometryCacheKey;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _splitLeftRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _splitLeftCacheRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _splitRightRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _splitRightCacheRect;
    int _topCorners;
    BOOL _isSplit;
    BOOL _centerFilled;
    BOOL _hasCandidateKeys;
    UIKBRenderConfig *_renderConfig;
}

@property(retain) UIKBRenderConfig * renderConfig;
@property(retain) NSObject * geometryCacheKey;
@property(readonly) NSString * cacheKey;
@property(readonly) BOOL cacheDeferable;
@property(readonly) float cachedWidth;
@property(readonly) BOOL keepNonPersistent;


- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)displayLayer:(id)arg1;
- (void)dealloc;
- (id)geometryCacheKey;
- (void)refreshStyleForKeyplane:(id)arg1;
- (BOOL)keepNonPersistent;
- (BOOL)cacheDeferable;
- (void)drawContentsOfRenderers:(id)arg1;
- (id)cacheKeysForRenderFlags:(id)arg1;
- (float)cachedWidth;
- (id)cacheKey;
- (void)setGeometryCacheKey:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)renderConfig;

@end
