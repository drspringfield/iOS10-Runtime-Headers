/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEOMapMatchRequest : PBRequest  {
    NSMutableArray *_locations;
    NSMutableArray *_waypoints;
}

@property(retain) NSMutableArray * waypoints;
@property(retain) NSMutableArray * locations;


- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (void)clearLocations;
- (void)addLocation:(id)arg1;
- (id)locationAtIndex:(unsigned int)arg1;
- (unsigned int)locationsCount;
- (id)waypoints;
- (id)waypointAtIndex:(unsigned int)arg1;
- (void)clearWaypoints;
- (unsigned int)waypointsCount;
- (void)addWaypoint:(id)arg1;
- (void)setWaypoints:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)locations;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (void)setLocations:(id)arg1;
- (id)dictionaryRepresentation;

@end
