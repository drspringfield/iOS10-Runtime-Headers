/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSString;

@interface GEOTransitAppLaunchFeedbackCollection : PBCodable  {
    double _timestamp;
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    GEOLatLng *_source;
    struct { 
        unsigned int timestamp : 1; 
    } _has;
}

@property(readonly) BOOL hasBundleIdentifier;
@property(retain) NSString * bundleIdentifier;
@property(readonly) BOOL hasSource;
@property(retain) GEOLatLng * source;
@property(readonly) BOOL hasDestination;
@property(retain) GEOLatLng * destination;
@property BOOL hasTimestamp;
@property double timestamp;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)hasDestination;
- (BOOL)hasSource;
- (BOOL)hasBundleIdentifier;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)copyTo:(id)arg1;
- (double)timestamp;
- (id)source;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)bundleIdentifier;
- (void)setDestination:(id)arg1;
- (id)destination;
- (id)dictionaryRepresentation;

@end
