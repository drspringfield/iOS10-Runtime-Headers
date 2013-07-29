/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPlace, NSString, GEORPMapLocation, NSMutableArray, GEORPDirectionsProblem;

@interface GEORPProblemContext : PBCodable  {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    GEORPDirectionsProblem *_directionsProblem;
    GEORPMapLocation *_mapLocation;
    GEOPlace *_originalPlace;
    int _pinType;
    NSString *_tileStateLog;
    NSMutableArray *_visibleTileSets;
    struct { 
        unsigned int sessionID : 1; 
        unsigned int pinType : 1; 
    } _has;
}

@property BOOL hasSessionID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property BOOL hasPinType;
@property int pinType;
@property(readonly) BOOL hasOriginalPlace;
@property(retain) GEOPlace * originalPlace;
@property(readonly) BOOL hasMapLocation;
@property(retain) GEORPMapLocation * mapLocation;
@property(readonly) BOOL hasDirectionsProblem;
@property(retain) GEORPDirectionsProblem * directionsProblem;
@property(retain) NSMutableArray * visibleTileSets;
@property(readonly) BOOL hasTileStateLog;
@property(retain) NSString * tileStateLog;


- (id)visibleTileSets;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasPinType:(BOOL)arg1;
- (id)tileStateLog;
- (BOOL)hasTileStateLog;
- (id)visibleTileSetsAtIndex:(unsigned int)arg1;
- (void)clearVisibleTileSets;
- (unsigned int)visibleTileSetsCount;
- (id)directionsProblem;
- (BOOL)hasDirectionsProblem;
- (id)mapLocation;
- (BOOL)hasMapLocation;
- (id)originalPlace;
- (BOOL)hasOriginalPlace;
- (void)setPinType:(int)arg1;
- (int)pinType;
- (BOOL)hasPinType;
- (void)addVisibleTileSets:(id)arg1;
- (void)setTileStateLog:(id)arg1;
- (void)setVisibleTileSets:(id)arg1;
- (void)setDirectionsProblem:(id)arg1;
- (void)setMapLocation:(id)arg1;
- (void)setOriginalPlace:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (BOOL)hasSessionID;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
