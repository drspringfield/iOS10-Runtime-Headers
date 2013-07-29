/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDate, AVItemErrorLogEventInternal, NSString;

@interface AVItemErrorLogEvent : NSObject <NSCopying> {
    AVItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property(readonly) NSDate * date;
@property(readonly) NSString * URI;
@property(readonly) NSString * serverAddress;
@property(readonly) NSString * playbackSessionID;
@property(readonly) int errorStatusCode;
@property(readonly) NSString * errorDomain;
@property(readonly) NSString * errorComment;


- (id)errorComment;
- (int)errorStatusCode;
- (id)playbackSessionID;
- (id)serverAddress;
- (id)URI;
- (id)errorDomain;
- (id)init;
- (id)date;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;

@end
