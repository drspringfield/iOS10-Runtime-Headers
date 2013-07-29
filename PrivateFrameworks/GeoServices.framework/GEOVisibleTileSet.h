/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVisibleTileSet : PBCodable  {
    struct { unsigned int x1; unsigned int x2; unsigned int x3; } *_tileKeys;
    unsigned int _tileKeysCount;
    unsigned int _tileKeysSpace;
    unsigned int _identifier;
    int _style;
}

@property int style;
@property unsigned int identifier;
@property(readonly) unsigned int tileKeysCount;
@property(readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; }* tileKeys;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTileKeys:(struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg1 count:(unsigned int)arg2;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)tileKeys;
- (void)addTileKey:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; })tileKeyAtIndex:(unsigned int)arg1;
- (unsigned int)tileKeysCount;
- (void)clearTileKeys;
- (void)copyTo:(id)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setIdentifier:(unsigned int)arg1;
- (unsigned int)identifier;
- (id)dictionaryRepresentation;

@end
