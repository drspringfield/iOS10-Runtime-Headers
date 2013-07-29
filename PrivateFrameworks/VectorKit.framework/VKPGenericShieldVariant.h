/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString;

@interface VKPGenericShieldVariant : PBCodable  {
    struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; } *_layers;
    unsigned int _layersCount;
    unsigned int _layersSpace;
    NSString *_fontName;
    float _fontSize;
    float _leftCapWidth;
    float _leftPadding;
    float _lineSpacing;
    unsigned int _numberOfLines;
    float _rightCapWidth;
    float _rightPadding;
    float _textBaseLine;
    struct { 
        unsigned int fontSize : 1; 
        unsigned int leftCapWidth : 1; 
        unsigned int leftPadding : 1; 
        unsigned int lineSpacing : 1; 
        unsigned int numberOfLines : 1; 
        unsigned int rightCapWidth : 1; 
        unsigned int rightPadding : 1; 
        unsigned int textBaseLine : 1; 
    } _has;
}

@property BOOL hasNumberOfLines;
@property unsigned int numberOfLines;
@property(readonly) unsigned int layersCount;
@property(readonly) struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }* layers;
@property BOOL hasTextBaseLine;
@property float textBaseLine;
@property(readonly) BOOL hasFontName;
@property(retain) NSString * fontName;
@property BOOL hasFontSize;
@property float fontSize;
@property BOOL hasLeftCapWidth;
@property float leftCapWidth;
@property BOOL hasRightCapWidth;
@property float rightCapWidth;
@property BOOL hasLineSpacing;
@property float lineSpacing;
@property BOOL hasLeftPadding;
@property float leftPadding;
@property BOOL hasRightPadding;
@property float rightPadding;


- (void)setHasRightPadding:(BOOL)arg1;
- (void)setHasLeftPadding:(BOOL)arg1;
- (void)setHasLineSpacing:(BOOL)arg1;
- (void)setHasRightCapWidth:(BOOL)arg1;
- (void)setHasLeftCapWidth:(BOOL)arg1;
- (void)setLayers:(struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)arg1 count:(unsigned int)arg2;
- (struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; }*)layers;
- (void)setHasNumberOfLines:(BOOL)arg1;
- (BOOL)hasRightPadding;
- (void)setLeftPadding:(float)arg1;
- (BOOL)hasLeftPadding;
- (BOOL)hasLineSpacing;
- (void)setRightCapWidth:(float)arg1;
- (BOOL)hasRightCapWidth;
- (void)setLeftCapWidth:(float)arg1;
- (BOOL)hasLeftCapWidth;
- (BOOL)hasNumberOfLines;
- (void)clearLayers;
- (float)rightCapWidth;
- (float)leftPadding;
- (struct CGImage { }*)newImageWithBackgroundColor:(struct CGColor { }*)arg1 borderColor:(struct CGColor { }*)arg2 textureAtlases:(id)arg3 contentScale:(float)arg4;
- (struct CGSize { float x1; float x2; })_imageSizeWithTextureAtlases:(id)arg1;
- (struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })layerAtIndex:(unsigned int)arg1;
- (unsigned int)layersCount;
- (void)setHasFontSize:(BOOL)arg1;
- (void)setHasTextBaseLine:(BOOL)arg1;
- (BOOL)hasFontSize;
- (void)setTextBaseLine:(float)arg1;
- (BOOL)hasTextBaseLine;
- (float)textBaseLine;
- (BOOL)hasFontName;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)setLineSpacing:(float)arg1;
- (float)lineSpacing;
- (float)fontSize;
- (void)addLayer:(struct { unsigned int x1; float x2; unsigned int x3; unsigned int x4; int x5; struct { unsigned int x_6_1_1 : 1; unsigned int x_6_1_2 : 1; unsigned int x_6_1_3 : 1; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 1; } x6; })arg1;
- (void)setFontName:(id)arg1;
- (id)fontName;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (float)rightPadding;
- (void)setRightPadding:(float)arg1;
- (void)setFontSize:(float)arg1;
- (unsigned int)numberOfLines;
- (void)setNumberOfLines:(unsigned int)arg1;
- (float)leftCapWidth;
- (id)dictionaryRepresentation;

@end
