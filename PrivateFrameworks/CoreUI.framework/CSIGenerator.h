/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@class NSString, CUIPSDGradient, NSDate, NSMutableArray, CUIShapeEffectPreset;

@interface CSIGenerator : NSObject  {
    struct CGSize { 
        float width; 
        float height; 
    } _size;
    NSString *_name;
    NSMutableArray *_slices;
    NSMutableArray *_bitmaps;
    NSMutableArray *_metrics;
    BOOL _isFPOHint;
    BOOL _isExcludedFromFilter;
    short _colorSpaceID;
    short _layout;
    unsigned int _scaleFactor;
    CUIPSDGradient *_gradient;
    CUIShapeEffectPreset *_effectPreset;
    int _blendMode;
    float _opacity;
    NSDate *_modtime;
}

@property(copy) NSString * name;
@property BOOL isRenditionFPO;
@property(getter=isExcludedFromContrastFilter) BOOL excludedFromContrastFilter;
@property short colorSpaceID;
@property unsigned int scaleFactor;
@property(retain) CUIPSDGradient * gradient;
@property(retain) CUIShapeEffectPreset * effectPreset;
@property int blendMode;
@property float opacity;
@property(copy) NSDate * modtime;


- (void)setOpacity:(float)arg1;
- (float)opacity;
- (void)setModtime:(id)arg1;
- (void)setBlendMode:(int)arg1;
- (id)effectPreset;
- (void)setScaleFactor:(unsigned int)arg1;
- (id)gradient;
- (void)setColorSpaceID:(short)arg1;
- (short)colorSpaceID;
- (void)setExcludedFromContrastFilter:(BOOL)arg1;
- (BOOL)isExcludedFromContrastFilter;
- (void)setIsRenditionFPO:(BOOL)arg1;
- (BOOL)isRenditionFPO;
- (id)CSIRepresentationWithCompression:(BOOL)arg1;
- (void)addMetrics:(struct { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; })arg1;
- (void)addSliceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)addBitmap:(id)arg1;
- (id)initWithShapeEffectPreset:(id)arg1 forScaleFactor:(unsigned int)arg2;
- (id)initWithCanvasSize:(struct CGSize { float x1; float x2; })arg1 sliceCount:(unsigned int)arg2 layout:(short)arg3;
- (unsigned long)writeBitmap:(id)arg1 toData:(id)arg2 compress:(BOOL)arg3;
- (unsigned long)writeGradientToData:(id)arg1;
- (unsigned long)writeResourcesToData:(id)arg1;
- (void)writeHeader:(struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1 toData:(id)arg2;
- (void)formatCSIHeader:(struct _csiheader { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8 : 4; unsigned int x9 : 28; struct _csimetadata { unsigned int x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; BOOL x_10_1_4[128]; } x10; unsigned int x11; struct _csibitmaplist { unsigned int x_12_1_1; unsigned int x_12_1_2[0]; } x12; }*)arg1;
- (void)_addNodes:(id)arg1 toNodeList:(struct _csigradientdatanode { unsigned int x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; }*)arg2;
- (int)blendMode;
- (id)modtime;
- (void)setEffectPreset:(id)arg1;
- (id)name;
- (void)dealloc;
- (void)setGradient:(id)arg1;
- (unsigned int)scaleFactor;
- (void)setName:(id)arg1;

@end
