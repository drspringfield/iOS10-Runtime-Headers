/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSURL, NSString;

@interface SADIAGLatencyDiagnosticReportDiagnosticReport : AceObject <SAAceSerializable> {
}

@property(copy) NSNumber * latency;
@property(copy) NSURL * uri;
@property(copy) NSString * verb;

+ (id)latencyDiagnosticReportDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)latencyDiagnosticReportDiagnosticReport;

- (void)setLatency:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;
- (id)encodedClassName;
- (void)setUri:(id)arg1;
- (id)uri;
- (id)latency;
- (id)groupIdentifier;

@end
