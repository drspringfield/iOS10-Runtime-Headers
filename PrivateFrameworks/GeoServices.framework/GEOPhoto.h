/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOPhoto : PBCodable  {
    NSMutableArray *_photoInfos;
    int _photoType;
    NSString *_uid;
    struct { 
        unsigned int photoType : 1; 
    } _has;
}

@property BOOL hasPhotoType;
@property int photoType;
@property(retain) NSMutableArray * photoInfos;
@property(readonly) BOOL hasUid;
@property(retain) NSString * uid;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)photoInfos;
- (void)setHasPhotoType:(BOOL)arg1;
- (id)photoInfoAtIndex:(unsigned int)arg1;
- (void)clearPhotoInfos;
- (unsigned int)photoInfosCount;
- (void)setPhotoType:(int)arg1;
- (int)photoType;
- (BOOL)hasPhotoType;
- (void)addPhotoInfo:(id)arg1;
- (void)setPhotoInfos:(id)arg1;
- (BOOL)hasUid;
- (void)setUid:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)uid;
- (id)dictionaryRepresentation;

@end
