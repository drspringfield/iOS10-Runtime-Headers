/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString;

@interface GEOUsageCollection : PBCodable  {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _probeID;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionID;
    struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } *_tileUsages;
    unsigned int _tileUsagesCount;
    unsigned int _tileUsagesSpace;
    double _timestamp;
    int _cellWifi;
    NSString *_countryCode;
    int _geoService;
    NSString *_hwMachine;
    int _requestDataSize;
    int _responseDataSize;
    int _responseTime;
    BOOL _sessionIDIsPersistent;
    struct { 
        unsigned int probeID : 1; 
        unsigned int sessionID : 1; 
        unsigned int timestamp : 1; 
        unsigned int cellWifi : 1; 
        unsigned int geoService : 1; 
        unsigned int requestDataSize : 1; 
        unsigned int responseDataSize : 1; 
        unsigned int responseTime : 1; 
        unsigned int sessionIDIsPersistent : 1; 
    } _has;
}

@property BOOL hasGeoService;
@property int geoService;
@property BOOL hasRequestDataSize;
@property int requestDataSize;
@property BOOL hasResponseDataSize;
@property int responseDataSize;
@property BOOL hasResponseTime;
@property int responseTime;
@property BOOL hasCellWifi;
@property int cellWifi;
@property(readonly) BOOL hasCountryCode;
@property(retain) NSString * countryCode;
@property BOOL hasSessionID;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property BOOL hasProbeID;
@property struct { unsigned long long x1; unsigned long long x2; } probeID;
@property BOOL hasTimestamp;
@property double timestamp;
@property(readonly) unsigned int tileUsagesCount;
@property(readonly) struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }* tileUsages;
@property(readonly) BOOL hasHwMachine;
@property(retain) NSString * hwMachine;
@property BOOL hasSessionIDIsPersistent;
@property BOOL sessionIDIsPersistent;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasSessionIDIsPersistent:(BOOL)arg1;
- (void)setTileUsages:(struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned int)arg2;
- (struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)tileUsages;
- (void)setHasProbeID:(BOOL)arg1;
- (void)setHasCellWifi:(BOOL)arg1;
- (void)setHasResponseTime:(BOOL)arg1;
- (void)setHasResponseDataSize:(BOOL)arg1;
- (void)setHasRequestDataSize:(BOOL)arg1;
- (void)setHasGeoService:(BOOL)arg1;
- (BOOL)sessionIDIsPersistent;
- (BOOL)hasSessionIDIsPersistent;
- (id)hwMachine;
- (BOOL)hasHwMachine;
- (struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })tileUsageAtIndex:(unsigned int)arg1;
- (unsigned int)tileUsagesCount;
- (void)setProbeID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; })probeID;
- (BOOL)hasProbeID;
- (int)cellWifi;
- (BOOL)hasCellWifi;
- (int)responseTime;
- (BOOL)hasResponseTime;
- (int)responseDataSize;
- (BOOL)hasResponseDataSize;
- (int)requestDataSize;
- (BOOL)hasRequestDataSize;
- (int)geoService;
- (BOOL)hasGeoService;
- (void)clearTileUsages;
- (void)addTileUsage:(struct { unsigned int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (void)setSessionIDIsPersistent:(BOOL)arg1;
- (void)setCellWifi:(int)arg1;
- (void)setResponseTime:(int)arg1;
- (void)setResponseDataSize:(int)arg1;
- (void)setRequestDataSize:(int)arg1;
- (void)setGeoService:(int)arg1;
- (void)setHwMachine:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (BOOL)hasCountryCode;
- (void)copyTo:(id)arg1;
- (void)setHasSessionID:(BOOL)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (BOOL)hasSessionID;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (double)timestamp;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
