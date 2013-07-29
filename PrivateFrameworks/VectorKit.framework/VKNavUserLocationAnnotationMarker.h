/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKAnimation, VGLRenderState, VGLTexture;

@interface VKNavUserLocationAnnotationMarker : VKMeshAnnotationMarker  {
    BOOL _shouldBillboard;
    VKAnimation *_billboardAnimation;
    float _billboardFactor;
    float _scale;
    BOOL _shouldShowCourse;
    BOOL _puckFlipped;
    double _presentationCourse;
    double _sizePoints;
    BOOL _stale;
    VGLTexture *_arrowTexture;
    VGLTexture *_circleTexture;
    VKAnimation *_puckStyleAnimation;
    int _puckStyle;
    float _greyPuckAlphaScale;
    VGLRenderState *_puckRenderState;
    struct { 
        struct { 
            double v[4][4]; 
        } arrowMatrix; 
        struct { 
            double v[4][4]; 
        } circleMatrix; 
        struct _VGLColor { 
            float r; 
            float g; 
            float b; 
            float a; 
        } arrowColor; 
    } _puckState;
    int _style;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _arrowColor;
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _arrowColorStale;
    float _circleBrightness;
    float _arrowBrightness;
}

@property BOOL shouldBillboard;
@property BOOL shouldShowCourse;
@property float scale;
@property(getter=isStale) BOOL stale;
@property int style;
@property double presentationCourse;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } innerColor;


- (void)setInnerColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })innerColor;
- (BOOL)shouldShowCourse;
- (BOOL)shouldBillboard;
- (void)updateWithStyle:(id)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 style:(int)arg3;
- (void)setStale:(BOOL)arg1;
- (void)setShouldShowCourse:(BOOL)arg1;
- (void)setShouldBillboard:(BOOL)arg1;
- (void)setPresentationCourse:(double)arg1;
- (void)_drawPuckWithContext:(id)arg1;
- (double)presentationCourse;
- (void)_updateTextures;
- (void)_updatePuckStyle;
- (void)drawWithContext:(id)arg1;
- (void)layoutWithContext:(id)arg1;
- (BOOL)isStale;
- (void)setModel:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setScale:(float)arg1;
- (int)style;
- (void)dealloc;
- (id).cxx_construct;
- (float)scale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
