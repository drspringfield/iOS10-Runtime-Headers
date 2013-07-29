/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload  {
    unsigned int _airPrintCount;
    NSMutableArray *_ippAddresses;
}

@property unsigned int airPrintCount;
@property(retain) NSMutableArray * ippAddresses;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void)setIppAddresses:(id)arg1;
- (void)setAirPrintCount:(unsigned int)arg1;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)ippAddresses;
- (unsigned int)airPrintCount;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)restrictions;
- (void).cxx_destruct;
- (id)description;

@end
