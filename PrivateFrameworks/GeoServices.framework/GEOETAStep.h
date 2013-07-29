/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOETAStep : PBCodable  {
    unsigned int _expectedTime;
    unsigned int _stepID;
    int _zilchPointIndex;
    struct { 
        unsigned int expectedTime : 1; 
        unsigned int stepID : 1; 
        unsigned int zilchPointIndex : 1; 
    } _has;
}

@property BOOL hasStepID;
@property unsigned int stepID;
@property BOOL hasExpectedTime;
@property unsigned int expectedTime;
@property BOOL hasZilchPointIndex;
@property int zilchPointIndex;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setHasZilchPointIndex:(BOOL)arg1;
- (void)setZilchPointIndex:(int)arg1;
- (int)zilchPointIndex;
- (BOOL)hasZilchPointIndex;
- (void)setHasStepID:(BOOL)arg1;
- (void)setStepID:(unsigned int)arg1;
- (unsigned int)stepID;
- (BOOL)hasStepID;
- (void)setHasExpectedTime:(BOOL)arg1;
- (void)setExpectedTime:(unsigned int)arg1;
- (unsigned int)expectedTime;
- (BOOL)hasExpectedTime;
- (void)copyTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
