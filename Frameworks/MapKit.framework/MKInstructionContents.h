/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString, NSArray;

@interface MKInstructionContents : NSObject  {
    int _maneuverType;
    int _transportType;
    NSString *_intersectionName;
    NSString *_destinationName;
    NSString *_exitNumber;
    NSArray *_branchNames;
    NSArray *_towardNames;
    int _junctionAngle;
    BOOL _toFreeway;
}

@property int maneuverType;
@property(retain) NSString * roadName;
@property(retain) NSString * intersectionName;
@property(retain) NSString * destinationName;
@property(retain) NSString * exitNumber;
@property(retain) NSArray * branchNames;
@property(retain) NSArray * towardNames;
@property int transportType;
@property(readonly) BOOL useRoadName;
@property(readonly) BOOL useTowardNames;
@property(readonly) BOOL useIntersectionName;
@property(readonly) BOOL useDestinationName;
@property(readonly) BOOL hasName;
@property(readonly) NSString * primaryName;
@property(readonly) BOOL isExitManeuver;
@property BOOL toFreeway;
@property int junctionAngle;

+ (id)contentsWithManeuverType:(int)arg1 transportType:(int)arg2;
+ (id)contentsWithSubstep:(id)arg1 transportType:(int)arg2;
+ (id)contentsWithRoute:(id)arg1 step:(id)arg2;

- (void)setDestinationName:(id)arg1;
- (id)roadName;
- (int)junctionAngle;
- (void)setTowardNames:(id)arg1;
- (void)setBranchNames:(id)arg1;
- (id)primaryName;
- (BOOL)isExitManeuver;
- (void)setRoadName:(id)arg1;
- (id)_instructionsForSigns;
- (id)_instructionForChangeHighway;
- (id)_instructionForExit;
- (id)_instructionForRoundabout;
- (id)_walkingInstructionForRoundabout;
- (id)_instructionForArrival;
- (id)_instructionForFerry;
- (id)_instructionForUTurn;
- (id)_walkingInstructionForUTurn;
- (id)_instructionForBranch;
- (id)_instructionForTurn;
- (id)_walkingInstructionForTurn;
- (id)_instructionForStart;
- (id)_walkingInstructionForStart;
- (id)_instructionForContinue;
- (id)_walkingInstructionForContinue;
- (id)towardNames;
- (BOOL)useTowardNames;
- (id)destinationName;
- (id)intersectionName;
- (BOOL)useIntersectionName;
- (id)branchNames;
- (BOOL)useDestinationName;
- (void)setJunctionAngle:(int)arg1;
- (id)_exitNumberFromNameInfo:(id)arg1;
- (void)setName:(id)arg1 signposts:(id)arg2;
- (void)setIntersectionName:(id)arg1;
- (id)_stringFromNameInfo:(id)arg1;
- (BOOL)useRoadName;
- (void)_populateFromSubstep:(id)arg1;
- (void)_populateFromStep:(id)arg1;
- (void)setToFreeway:(BOOL)arg1;
- (BOOL)toFreeway;
- (id)exitNumber;
- (void)setManeuverType:(int)arg1;
- (int)maneuverType;
- (void)setExitNumber:(id)arg1;
- (void)setTransportType:(int)arg1;
- (int)transportType;
- (BOOL)hasName;
- (id)instruction;
- (id)init;
- (void)dealloc;
- (id)description;

@end
